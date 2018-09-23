#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#define MAXSIZE_LIST 100

typedef struct LNode *List;
struct LNode
{
    int Data[MAXSIZE_LIST];
    int Last;
};

List ListMakeEmpty();   //初始化一个空线性表
int ListFindK(int K,List L);   //访问下标为K的元素
int ListFindX(int X,List L);   //查找元素X的下标
void ListInsert(int X,int i,List L);   //在i前插入一个新元素X
void ListDelete(int i,List L);   ////删除第i个元素
int ListLength(List L);   //返回线性表的长度

#endif // LIST_H_INCLUDED
