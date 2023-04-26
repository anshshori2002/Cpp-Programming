#include<stdio.h>
#include<limits.h>
#define size 10
struct Stack
{
    int arr[size];
    int top;
}
void push(struct Stack *s,int n)
{
    if(s->top == size-1)
        printf("Overflow");
    s->top++;
    arr[s->top] = n;
}
int pop(struct Stack *s)
{
    if(s->top==-1) 
        return INT_MIN;
    int temp = arr[s->top];
    s->top = s->top-1;
    return temp;
}
void print(int top)
{
    for(int i=0; i<=top; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main()
{
    Stack s1,s2;
    s1.top = -1;
    s2.top = -1;
    push(&s1,12);
    print(s1.top);
}
