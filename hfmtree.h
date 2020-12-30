#ifndef hfm_h_
#define hfm_h_


#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 30

typedef struct node
{
    int data;//结点数据
    struct node *lchild,*rchild;//哈夫曼树的左右孩子指针
    struct node *next;//哈夫曼树的结点同时又是单链表的结点，next为单链表的结点指针
}BSTree_Link;//二叉树及单链表结点类型




BSTree_Link *CreateLinkList(int n);//根据叶子结点的权值生成一个升序单链表

void print(BSTree_Link *h);//输出单链表

BSTree_Link *HuffTree(BSTree_Link *link);//生成哈夫曼树

void Preorder(BSTree_Link *p);//先序遍历二叉树

void Inorder(BSTree_Link *p);//中序遍历二叉树

void HuffCode(BSTree_Link *p);//后序遍历哈夫曼树并输出哈夫曼树编码

#endif
