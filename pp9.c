#include<stdio.h>
int main()
{
    int a,b,c,i,j,k,l,n,m;
    int arr[100][1000];
    int brr[100][1000];
    int ml[100][1000];
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
           ml[i][j]=0;
           for(k=0;k<n;k++){
              //for(l=0;l<m;l++){
                 ml[i][j]=ml[i][j]+(arr[i][k]*brr[k][j]);
             // }
           }
        }
    }

    printf("multiply of A and B  = \n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",ml[i][j]);
        }
        printf("\n");
    }
    return 0;

}
