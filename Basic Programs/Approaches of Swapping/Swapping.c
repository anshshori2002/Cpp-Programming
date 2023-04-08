//Code for Approach 1: This Approach is done by using the Temporary Variable.
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two Number :");
    printf("a = ");
    scanf("%d,&a);
    printf("b = ");
    scanf("%d",b);
    
    //Approach-1
    int temp;
    temp = a;
    a = b;
    b = temp;
    
    printf("The Numbers after swaping :");
    printf("a = %d",a);
    printf("b = %d",b);
}
