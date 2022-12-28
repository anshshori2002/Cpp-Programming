//Program of Swapping of Values by Call by Value :-

#include <stdio.h>
void swap(int,int);
int main()
{
    int a,b;
    printf("Enter two number for Swaping: \na: ");
    scanf("%d",&a);
    printf("b: ");
    scanf("%d",&b);
    swap(a,b);
    printf("Values are Swaping: \n");
    printf("a: %d\nb: %d",a,b);
    return 0;
}
void swap(int a,int b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Output:-
//   Enter two number for Swaping: 
//   a: 23 
//   b: 45
//   Values are Swaping: 
//   a: 23
//   b: 45

## Explain:-
// As we can see that this code for swapping not works. This is because:-
// In the above Code we work on Identifers as in the swap funtion there is different identifiers and it does not reflect or change the value of identifiers of main().

_____________________________________________________________________________________________________________________________________________________________________________________________________________________

// Program of Swapping of values by Call by Reference :-

#include <stdio.h>
void swap(int*,int*);
int main()
{
    int a,b;
    printf("Enter two number for Swaping: \na: ");
    scanf("%d",&a);
    printf("b: ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("Values are Swaping: \n");
    printf("a: %d\nb: %d",a,b);
    return 0;
}
void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Output:
//   Enter two number for Swaping: 
//   a: 2
//   b: 5
//   Values are Swaping: 
//   a: 5
//   b: 2

## Explain:-
// As we can see that above code works perfectly. This is because :-
// In the above Code we pass address of the identifier to the function and changes are done in same identifier that's why the values are easily Swapped. 
