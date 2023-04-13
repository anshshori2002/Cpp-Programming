#include<stdio.h>
#include<limits.h>
#define size 10
int Stack[size];
int top=-1;
void push(int key)
{
    if(top==size-1)
        printf("Overflow");
    top++;
    Stack[top] = key;
}
int pop()
{
    if(top==-1)
        return INT_MIN;
    int temp = Stack[top];
    top--;
    return temp;
}
void print()
{
    for(int i=0; i<top; i++)
    {
        printf("%d ",Stack[i]);
    }
}
void main()
{
  push(10);
  pop();
  return 0;
}
