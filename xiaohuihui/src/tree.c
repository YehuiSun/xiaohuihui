#include"xiaohuihui.h"

/*
bool IsEmpty(BinTree BT)   //判别二叉树是否为空
{

}
*/
void PreTraversalRec(BinTree BT)   //递归先序遍历二叉树
{
    if(BT)
    {
        printf("%d ",BT->Data);
        PreTraversalRec(BT->Left);
        PreTraversalRec(BT->Right);
    }
}


void InTraversalRec(BinTree BT)   //递归中序遍历二叉树
{
    if(BT)
    {
        PreTraversalRec(BT->Left);
        printf("%d ",BT->Data);
        PreTraversalRec(BT->Right);
    }
}

void PostTraversalRec(BinTree BT)   //递归后序遍历二叉树
{
    if(BT)
    {
        PreTraversalRec(BT->Left);
        PreTraversalRec(BT->Right);
        printf("%d ",BT->Data);
    }
}

/*
void LevelTraversal(BinTree BT)   //层序遍历二叉树
{

}

BinTree CreatBinTree()   //创建二叉树
{

}
*/
