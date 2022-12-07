Pattern3 : 12345
           1234
           123
           12
           1
  
Code:

#include <stdio.h>
int main()
{
    int n,i,j;
    printf("Enter no. :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
