#include"tree.h"
//创建二叉树
//以先序序列输入各个节点的数据。某节点的左子树或右子树为空时，输入一个特定的值x
void createtree(treenode *&t, datatype x)
{
    datatype d;
    scanf("%c", &d);
    if (d == x)
    {
	t == NULL;
    }
    else 
    {
	t = (treenode*)malloc(sizeof(treenode));
	t->data = d;
	createtree(t->left, x);
	createtree(t->right, x);
    }
}

//先序遍历二叉树
void preorder(treenode *t)
{
    if (t)
    {
	printf("%c ", t->data);
	preorder(t->left);
	preorder(t->right);
    }
}

//中序遍历二叉树
void inorder(treenode *t)
{
    if (t)
    {
	inorder(t->left);
	printf("%c ", t->data);
	inorder(t->right);
    }
}

//后序遍历二叉树
void postorder(treenode *t)
{
    if (t)
    {
	postorder(t->left);
	postorder(t->right);
	printf("%c ", t->data);
    }
}

//以层次顺序遍历二叉树
void leve1order(treenode *t)
{
    treenode *q[maxsize];
    int front=0;
    int rear=0;
    treenode *p;
    if (t == NULL) return;
    q[rear] = t;
    rear = (rear+1) % maxsize;
    while (front != rear)
    {
	p = q[front];
	front = (front+1) % maxsize;
	printf("%c ", p->data);
	if (p->left)
	{
	    q[rear] = p->left;
	    rear = (rear+1) % maxsize;
	}
	if (p->right)
	{
	    q[rear] = p->right;
	    rear = (rear+1) % maxsize;
	}
    }
}


