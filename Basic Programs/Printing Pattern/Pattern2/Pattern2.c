Pattern2: 1
          22
          333
          4444
          55555
  
Code:

#include <stdio.h>
int main()
{
    int n,i,j;
    printf("Enter no. :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}
