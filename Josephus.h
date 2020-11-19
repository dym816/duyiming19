#include<stdio.h>
#include<malloc.h>

typedef  int dataType; 
typedef struct LNode   
{
    dataType data;
    struct LNode *next;
} LNode,*LinkList;

LinkList Creat(int t);
LinkList Start(LinkList L,int k);
LinkList Delete(int n,int m,LinkList L);
