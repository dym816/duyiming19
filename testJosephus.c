#include"Josephus.c"
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

