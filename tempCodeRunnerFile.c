#include<stdio.h>
int sum(int n)
{
    if(n==1)
    {
        return 1;
    }
    else{
        return n+ sum(n-1);
    }
    
}
int main()
{
    // int i,j,n,k=1;
    // scanf("%d",&n);
    // for(i=1;i<=n;i++)
    // {
    //     for(j=1;j<=i;j++)
    //     {
    //         printf("%d",k);
    //         k++;
    //     }
    //     printf("\n");
    // } 
    // for(i=1;i<=n;i++)
    // {
    //     for(j=i;j<n;j++)
    //     {
    //         printf("%d",k);
    //         k++;
    //     }
    //     printf("\n");
    // }
    int m,n;
    scanf("%d",&m);
    n=sum(m);
    printf("%d",n);
}