#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

typedef struct SNode *Stack;
struct SNode
{
    int Data;
    Stack Next;
};


Stack CreateStack();   //创建空栈
int StackIsEmpty(Stack S);   //判断堆栈S是否为空

void StackPush(Stack S,int item);   //将元素item压入堆栈
int StackPop(Stack S);   //出栈，并返回栈顶元素


#endif // STACK_H_INCLUDED
