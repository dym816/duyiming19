#include"search.h"



int main()
{
    printf("二叉查找");
    PNode root = NULL;
    datatype nodeArray[11] = {15,6,18,3,7,17,20,2,4,13,9};
    printf("待查找数据为: \n");
    for (int i=0; i<11; i++)
	printf("%d ", nodeArray[i]);
    create(&root, nodeArray, 11);
    printf("\n请输入要查找的元素的值: ");

    datatype locate;
    scanf("%d", &locate);
    if (search(root,locate) != NULL)
	printf("这些数中有你要查找的数%d\n", search(root,locate)->key);
    else
	printf("这些数中没有i你要查找的数\n");
    //return -1;





    printf("哈希查找");
    HashTable HashTable;
    InitHashTable(HashTable);
    int b[10] = { 4, 5, 6, 4, 8, 14, 10, 23, 12, 16 };
    for (int i=0; i<10; ++i)
    {
	InsertHashTable(HashTable, b[i]);
    }
    printf("待查找数据为:\n");
    for (int i=0; i<10; i++)
    {
	printf("%4d", b[i]);
    }
    printf("\n请输入要查找的元素的值：");

    datatype1 locate1;
    scanf("%d", &locate);
    int addr;
    if (!SearchHashTable(HashTable, locate, &addr))
	printf("这些数中没有你要查找的数\n");
    else
	printf("这些数中有你要查找的数，元素索引位置为:%d\n", addr);
    //return -1;



    printf("折半查找");
    int a[N];
    srand (time(0));

    for (int i=0; i<N; i++)
	a[i] = rand() % 100;

    selectsort(a, N);
    printf("排序后数据为: ");
    for (int i=0; i<N; i++)
	printf("%d ", a[i]);
	printf("\n");
	printf("请输入要查找的元素的值,查找结果按ctrl+z. \n");

    int x;
    while(~scanf("%d", &x))
    {
	int t = binarysearch(a, N, x);
	//int t = binarysearch2(a, N, x);
	if (t == -1)
	    printf("没有你要找的数据\n");
	else
	    printf("你要找的数据在第%d的位置\n", t+1);
    }
}









