
#include "hfmtree.h"


void main()
{
    BSTree_Link *root;
    int n;
    printf("输入叶子节点的个数：\n");
    scanf("%d",&n);
    printf("输入n个叶子节点的权值:\n");
    root=CreateLinkList(n);//根据叶子结点的权值生成一个升序单链表
    printf("输出所生成的升序单链表:\n");
    print(root);
    root=HuffTree(root);//生成哈夫曼树
    printf("先序遍历输出哈夫曼树各节点的值:\n");
    Inorder(root);
    printf("\n");
    printf("中序遍历输出哈夫曼树各节点的值:\n");
    Preorder(root);
    printf("\n");
    printf("后序遍历输出哈夫曼树构造并输出哈夫曼编码:\n");
    HuffCode(root);
}
