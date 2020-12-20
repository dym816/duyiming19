#include"search.h"
void selectsort(int a[], int n)
{   
    int i, j, k, m;
    for (i=0; i<n-1; i++)
    {
	m = a[i];
	k = i;
	for (j=i+1; j<n; j++)
	    if (a[j] < m)
	    {
		m = a[j];
		k = j;
	    }
	    a[k] = a[i];
	    a[i] = m;
    }
}

int binarysearch(int a [], int n, int x)
{
    int low = 0, high = n-1, mid;
    while (low<=high)
    {
	mid = (low+high)/2;
	if (a[mid] == x)
	    return mid;
	else if (x < a[mid])
	    high = mid - 1;
	else
	    low = mid + 1;
    }
    return -1;
}

int Bsearch(int a[], int low, int high, int x)
{
    if (low > high)
	return -1;
    int mid = (low + high)/2;
    if (a[mid] == x)
	return mid;
    else if (x < a[mid])
	return Bsearch(a, low, mid-1, x);
    else
	return Bsearch(a, mid+1, high, x);
}

int binarysearch2(int a[], int n, int x)
{
    Bsearch(a, 0, n-1, x);
    return -1;
}






void insert(PNode *root, datatype key)
{
    PNode p = (PNode)malloc(sizeof(Node));
    p->key = key;
    p->right = p->left = p->parent = NULL;
    if ((*root) == NULL)
    {
	*root = p;
	return;
    }
    if ((*root)->left == NULL && (*root)->key>key)
    {
	p->parent = (*root);
	(*root)->left = p;
	return;
    }
    if ((*root)->right == NULL && (*root)->key<key)
    {
	p->parent = (*root);
	(*root)->right = p;
	return;
    }
    if ((*root)->key > key)
	insert(&(*root)->left, key);
    else if ((*root)->key < key)
	insert(&(*root)->right, key);
    else
	return;
}

void create(PNode *root, datatype *keyArray, int length)
{
    int i;
    for (i=0; i<length; i++)
	insert(root, keyArray[i]);
}

PNode search(PNode root , datatype key)
{
    if (root == NULL)
	return NULL;
    if (key > root->key)
	return search(root->right, key);
    else  if (key < root->key)
	return search(root->left, key);
    else
	return root;
}







//初始化哈希表
int InitHashTable(HashTable &pHashTable)
{
    pHashTable.count = 0;
    pHashTable.elem = new int [HASHSIZE];
    for (int i=0; i<HASHSIZE; ++i)
	pHashTable.elem[i] = NULLKEY;
    return 1;
}

//哈希函数
int Hash(int key)
{
    return key % HASHSIZE;   //除留取余法
}

//插入关键字到哈希表
int InsertHashTable(HashTable &pHashTable, int key)
{
    int addr = Hash(key);   //求哈希地址
    while (pHashTable.elem[addr] != NULLKEY)  //不为空，则冲突了
	addr = (addr+1) % HASHSIZE;   //开放定址法：线性探测
	pHashTable.elem[addr] = key;
	pHashTable.count++;
	return 1;
}

//在哈希表中查找关键字记录
int SearchHashTable(HashTable& pHashTable,int key, int *addr)
{
    *addr = Hash(key);
    while (pHashTable.elem[*addr] != key)
    {
	*addr = (*addr+1) % HASHSIZE;  //开放定址法，线性探测
	if (pHashTable.elem[*addr] == NULLKEY || *addr == Hash(key))
	    return 0;
    }
    return 1;
}

