#ifndef tree_h_
#define tree_h_


#include <stdio.h>
#include <malloc.h>
#define maxsize 100

typedef char datatype;
struct treenode
{
    datatype data;
    treenode *left;
    treenode *right;
};

//创建二叉树
void createtree(treenode *&t, datatype x);
//先序遍历二叉树
void preorder(treenode *t);
//中序遍历二叉树
void inorder(treenode *t);
//后序遍历二叉树
void postorder(treenode *t);
//以层次顺序遍历二叉树
void leve1order(treenode *t);

#endif
