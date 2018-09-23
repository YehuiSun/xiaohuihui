#include "xiaohuihui.h"

List ListMakeEmpty()   //初始化一个空顺序表
{
    List PtrL;   //定义一个顺序表指针
    PtrL=(List)malloc(sizeof(struct LNode));   //申请内存空间
    PtrL->Last=-1;   //当顺序表为空时，末位地址指为-1
    return PtrL;   //返回该顺序表的指针
}

int ListFindK(int K,List L)   //访问下标为K的元素
{
     return L->Data[K] ;
}

int ListFindX(int X,List L)   //查找元素X的下标
{
    int i=0;   //定义循环变量
    while(i<=L->Last && L->Data[i]!=X)   //当该元素不是最后一个，并且 不等于K时
        i++;
    if(i > L->Last)    return -1;
    else  return i;
}

void ListInsert(int X,int i,List L)   //在i前插入一个新元素X
{
    int j=0;   //循环变量

    if(L->Last == MAXSIZE_LIST)   //检查表满
    {
        printf("顺序表已满");
        return;
    }

    if(i<0 || i>L->Last+2)   //检查插入地址的合法性
    {
        printf("插入地址不合法");
        return;
    }

    for(j=L->Last;j>i;j--)   //腾出插入空间
    {
        L->Data[j+1]= L->Data[j];
    }

     L->Data[i]=X;   //插入元素X
     L->Last++;   //表尾地址+1

     return;   //返回空
}
void ListDelete(int i,List L)   //删除第i个元素
{
     int j=0;   //循环变量

    if(i<0 || i>L->Last+1)   //检查插入地址的合法性
    {
        printf("插入地址不合法");
        return;
    }

    for(j=i;j<L->Last;j++)   //腾出插入空间
    {
        L->Data[j-1]= L->Data[j];
    }

    L->Last--;   //表尾地址-1
    return;
}
int ListLength(List L)   //返回线性表的长度
{
    return L->Last+1;
}
