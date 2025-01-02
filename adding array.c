#include<stdio.h>
int main()
{
    int arr[10][10],arr1[10][10],i,j;
    int n,m;
    printf("Enter the rows :");
    scanf("%d",&n);
    printf("Enter the columns :");
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
        
    }
    for(i=0;i<n;i++)
    {
        printf("\n");
        for(j=0;j<m;j++)
        {
            printf("%d ",arr[i][j]+arr1[i][j]);
        }
        
    }
    return 0;
    
}
