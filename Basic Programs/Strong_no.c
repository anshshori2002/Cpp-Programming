#include <stdio.h>

int main()
{
    int n;
    printf("Enter a no.: ");
    scanf("%d",&n);
    int a=n;
    int last,prod=1;
    int sum = 0;
    while(n>0)
    {
        last = n%10;
        n = n/10;
        for(int i=1;i<=last;i++)
        {
            prod *= i;
        }
        sum += prod;
    }
    if(sum==a)
    printf("%d is strong number",a);
    else
    printf("%d is not a strong number",a);
    

    return 0;
}

