#ifndef search_h_
#define search_h_



#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 20

void selectsort(int a[], int n);
int binarysearch(int a [], int n, int x);
int Bsearch(int a[], int low, int high, int x);
int binarysearch2(int a[], int n, int x);




#include<stdio.h>
#include<stdlib.h>

//typedef int datatype
#define datatype int
typedef struct Node
{
    datatype key;
    struct Node *left;
    struct Node *right;
    struct Node *parent;
}Node, *PNode;

void insert(PNode *root, datatype key);
void create(PNode *root, datatype *keyArray, int length);
PNode search(PNode root , datatype key);




#include<iostream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#define HASHSIZE 12
#define NULLKEY 0xffffffff/2

typedef int datatype1;
//#define datatype int
typedef struct HashTable
{
    int *elem;
    int count;
}HashTable;

//初始化哈希表
int InitHashTable(HashTable &pHashTable);
//哈希函数
int Hash(int key);
//插入关键字到哈希表
int InsertHashTable(HashTable &pHashTable, int key);
//在哈希表中查找关键字记录
int SearchHashTable(HashTable& pHashTable,int key, int *addr);

#endif
