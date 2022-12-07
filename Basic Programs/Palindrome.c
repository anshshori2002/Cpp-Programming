#include <stdio.h>
int main()
{
    int n,a;
    printf("Enter the no. :");
    scanf("%d",&n);
    a=n;
    int sum = 0,last = 0;
    while(n>0)
    {
        last = n%10;
        n = n/10;
        sum = sum*10 + last;
    }
    if(sum==a) printf("%d is a Palindrome",a);
    else
    printf("%d is not a Palindrome",a);

    return 0;
}

Output:
Enter the no. :154
154 is not a Palindrome

Enter the no. :121
121 is a Palindrome
