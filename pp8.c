#include<stdio.h>
int main()
{
    int a,b,c,i,j,k,n,m;
    int arr[100][1000];
    int brr[100][1000];
    int sum[100][1000];
    printf("inter rows number   : ");
    scanf("%d",&n);
    printf("\ninter coloms number : ");
    scanf("%d",&m);

    printf("matrix A = \n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("matrix B = \n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&brr[i][j]);
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            sum[i][j]=arr[i][j]+brr[i][j];
        }
    }

    printf("Sum of A and B  = \n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;

}
