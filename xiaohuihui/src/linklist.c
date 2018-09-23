#include"xiaohuihui.h"

int LinkListLength(LinkList L)   //求链表表长
{
    LinkList p=L;   //遍历指针
    int j=0;   //循环变量
    while(p)   //遍历链表
    {
        p=p->Next;
        j++;
    }
    return j;    //返回表长
}

LinkList LinkListFindK(int K,LinkList L)   //访问链表的第K个元素
{
     LinkList p=L;   //遍历指针
     int i=0;
     while(p!=NULL && i<K)   //如果P指针不为空，并且还没有访问到第K个元素
    {
        p=p->Next;
        i++;
    }

    if(i==K)   return p;
    else  return NULL;
}

LinkList LinkListFindX(int X,LinkList L)   //访问链表中值为X的元素
{
     LinkList p=L;   //遍历指针
     while(p!=NULL && p->Data!=X)   //如果P指针不为空，并且还没有访问到第K个元素
    {
        p=p->Next;
    }
    return p;
}

LinkList LinkListInsert(int X,int i,LinkList L)   //在第i-1个节点后插入一个X元素
{
    LinkList p,q;

    if(i>LinkListLength(L))
    {
        printf("插入地址不合法");
        return  NULL;
    }

    if(i==1)   //特殊情况，如果插入节点为新节点
    {
        q=(LinkList)malloc(sizeof(struct LinkNode));
        q->Data=X;
        q->Next=NULL;
        return q;
    }

    p=LinkListFindK(i-1,L);   //找到第i-1个节点

    if(p==NULL)
    {
        printf("参数i错误");
        return NULL;
    }
    else
    {
        q=(LinkList)malloc(sizeof(struct LinkNode));
        q->Data=X;
        q->Next=p->Next;
        p->Next=q;

        return L;
    }
}

LinkList LinkListDelete(int i,LinkList L)   //删除链表的第i个结点
{
    LinkList p,q;

    if(i==1)   //如果删除第一个节点
    {
        p=L;
        if(L!=NULL)   L=L->Next;
        else   return NULL;
        free(p);
        return L;
    }

    p=LinkListFindK(i-1,L);

    if(p==NULL)
    {
        printf("第%d个节点不存在",i-1);
        return NULL;
    }
    else if(p->Next==NULL)
    {
        printf("第%d个节点不存在",i);
        return NULL;
    }
    else
    {
        q=p->Next;
        p->Next=q->Next;
        free(q);
        return  L;
    }
}
