#include"xiaohuihui.h"

Stack CreateStack()   //´´½¨¿ÕÕ»
{
    Stack S;
    S=(Stack)malloc(sizeof(struct SNode));
    S->Next=NULL;

    return S;
}

int IsEmpty(Stack S)   //ÅÐ¶Ï¶ÑÕ»SÊÇ·ñÎª¿Õ
{
    return (S->Next==NULL) ;
}

void Push(Stack S,int item)   //½«ÔªËØitemÑ¹Èë¶ÑÕ»
{
    Stack p;
    p=(Stack)malloc(sizeof(struct SNode));
    p->Data=item;
    p->Next=S->Next;
    S->Next=p;
}

int Pop(Stack S)   //³öÕ»£¬²¢·µ»ØÕ»¶¥ÔªËØ
{
     Stack p;
     int Top=0;

     if(IsEmpty(S))
     {
         printf("¶ÑÕ»¿Õ")£»
         return NULL;
     }
     else
     {
         p=S->Next;
         S->Next=p->Next;
        Top=p->Data;
         free(p);
         return Top;
     }

}
