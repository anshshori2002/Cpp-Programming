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

//Code for Approach 2: This Approach is done without using the temporary Variable.
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two Number :");
    printf("a = ");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d",&b);
    
    //Approach-2
    a = a + b;
    b = a - b;
    a = a - b;
    
    printf("The Numbers after swaping :\n)";
    printf("a = %d",a);
    printf("b = %d",b);
}
