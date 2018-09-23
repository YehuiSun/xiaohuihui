#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

typedef struct SNode *Stack;
struct SNode
{
    int Data;
    Stack Next;
};


Stack CreateStack();   //创建空栈
int IsEmpty(Stack S);   //判断堆栈S是否为空

void Push(Stack S,int item);   //将元素item压入堆栈
int Pop(Stack S);   //出栈，并返回栈顶元素


#endif // STACK_H_INCLUDED
