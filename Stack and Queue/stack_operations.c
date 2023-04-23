//Stack Operations using Array
#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
#define size 10
int Stack[size];
int top=-1;

//Function to push the element in the Stack
void push(int key)
{
    if(top==size-1)
        printf("Overflow");
    top++;
    Stack[top] = key;
}

//Function to pop the elements from stack
int pop()   
{
    if(top==-1)
        return INT_MIN;
    int temp = Stack[top];
    top--;
    return temp;
}

//Function to print the element in FIFO pattern
void print()
{
    for(int i=0; i<=top; i++)
    {
        printf("%d ",Stack[i]);
    }
    printf("\n");
}

//Function to print the element in reverse
void reverse_print()
{
    for(int i=top;i>=0;i--)
    {
        printf("%d ",Stack[i]);
    }
    printf("\n");
}

int main()
{
    int n;
    printf("1. Push Element\n");
    printf("2. Pop Element\n");
    printf("3. Print Elements\n");
    printf("4. Print Elements in Reverse Order\n");
    printf("5. Exit\n");
    
    while(1)
    {
        printf("Enter the Choice: ");
        scanf("%d",&n);
        int a;
        switch(n)
        {
        case 1:printf("Enter the Element: ");
               scanf("%d",&a);
               push(a);
               break;
        case 2:a = pop();
               printf("Pop element is : %d\n",a);
               break;
        case 3: print();
                break;
        case 4: reverse_print();
                break;
        default: exit(0);
        }
    }
    
}
