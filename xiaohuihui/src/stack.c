#include"xiaohuihui.h"

Stack CreateStack()   //´´½¨¿ÕÕ»
{
    Stack S;
    S=(Stack)malloc(sizeof(struct SNode));
    S->Next=NULL;

    return S;
}

int StackIsEmpty(Stack S)   //ÅÐ¶Ï¶ÑÕ»SÊÇ·ñÎª¿Õ
{
    return (S->Next==NULL) ;
}

void StackPush(Stack S,int item)   //½«ÔªËØitemÑ¹Èë¶ÑÕ»
{
    Stack p;
    p=(Stack)malloc(sizeof(struct SNode));
    p->Data=item;
    p->Next=S->Next;
    S->Next=p;
}

int StackPop(Stack S)   //³öÕ»£¬²¢·µ»ØÕ»¶¥ÔªËØ
{
     Stack p;
     int Top=0;

     if(StackIsEmpty(S))
     {
         printf("¶ÑÕ»¿Õ");
         return 0;
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
