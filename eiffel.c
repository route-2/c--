#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i*2+2;j--)
        {
            printf("%d",i);
            printf("\n");
        }
         printf("\n");
    }
   return 0;

}