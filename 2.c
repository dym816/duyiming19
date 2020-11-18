#include<stdio.h>
#include<malloc.h>
#define ERROR 0
#define OK 1
typedef  int ElemType; /*定义表元素的类型*/
typedef struct LNode   /*线性表的单链表存储*/
{
    ElemType data;
    struct LNode *next;
} LNode,*LinkList;

LinkList Creat(int t)
{
    int n;
    LinkList p1,p2,head;
    p1=(LinkList)malloc(sizeof(LNode));
    p2=(LinkList)malloc(sizeof(LNode));
    head = NULL;
    n = 1;
    while(n<=t)
    {
        p1->data = n;
        if(n==1)
            head = p1;
        else
            p2->next = p1;
        p2 = p1;
        if(n!=t)
            p1 = (LinkList)malloc(sizeof(LNode));
        n++;
    }
    p2->next = head;
    return head;

}
LinkList Start(LinkList L,int k)
{
    int i;
    i=1;
    while(i!=k)
    {
        L=L->next;
        i++;
    }
    return L;

}
LinkList Delete(int n,int m,LinkList L)
{
    int i,j,k;
    LinkList p;
    p=L;
    k=0;
    while(n>1)
    {
        j=0;
        for(i=1+k; i<=n; i++)
        {
            if((i+1)%m==0)
            {
                printf("%d ",p->next->data);
                p->next=p->next->next;
                i++;
                j++;

            }
            p=p->next;
            k=i%m;
        }
        n=n-j;
    }
    printf("%d\n",p->data);
    return p;
}
int main()
{
    int m,n,k;
    scanf("%d%d%d",&n,&m,&k);
    LinkList L,cur;
    L=Creat(n);
    cur=Start(L,k);
    Delete(n,m,cur);
    return 0;
}


