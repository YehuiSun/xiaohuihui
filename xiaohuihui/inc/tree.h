#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

typedef struct TreeNode *BinTree;
typedef BinTree Position;
struct TreeNode
{
    int Data;
    BinTree Left;
    BinTree Right;
};

/*
bool IsEmpty(BinTree BT);   //判别二叉树是否为空
void PreTraversal(BinTree BT);   //先序遍历二叉树
void InTraversal(BinTree BT);   //中序遍历二叉树
void PostTraversal(BinTree BT);   //后序遍历二叉树
void LevelTraversal(BinTree BT);   //层序遍历二叉树
BinTree CreatBinTree();   //创建二叉树
*/

#endif // TREE_H_INCLUDED
