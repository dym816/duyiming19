#include"tree.h"

int main()
{
    treenode *t;
    printf("请按先序遍历输入各节点的字符，某节点的左子树或右子树为空时输入一个字符#。\n");
    printf("如输入ABD#G###CE##F##\n");
    createtree(t, '#');
    printf("先序遍历为：");
    preorder(t);
    printf("\n");
    printf("中序遍历为：");
    inorder(t);
    printf("\n");
    printf("后序遍历为：");
    postorder(t);
    printf("\n");
    printf("层序遍历为：");
    leve1order(t);
    printf("\n");
}

