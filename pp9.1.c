#include<stdio.h>
int main()
{
    int a,b,c,i,j,k,l,n,m,n2,m2;
    int arr[100][1000];
    int brr[100][1000];
    int ml[100][1000];
    printf("inter rows number for A  : ");
    scanf("%d",&n);
    printf("\ninter coloms number for A: ");
    scanf("%d",&m);

    printf("matrix A = \n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("inter rows number for B  : ");
    scanf("%d",&n2);
    printf("\ninter coloms number for B: ");
    scanf("%d",&m2);
    printf("matrix B = \n");
    for(i=0;i<n2;i++){
        for(j=0;j<m2;j++){
            scanf("%d",&brr[i][j]);
        }
    }

    if(m==n2){
        for(i=0;i<n;i++){
            for(j=0;j<m2;j++){
               ml[i][j]=0;
               for(k=0;k<m;k++){
                  //for(l=0;l<m;l++){
                     ml[i][j]=ml[i][j]+(arr[i][k]*brr[k][j]);
                 // }
               }
            }
        }

        printf("multiply of A and B  = \n");
        for(i=0;i<n;i++){
            for(j=0;j<m2;j++){
                printf("%d ",ml[i][j]);
            }
            printf("\n");

        }
    }
    else
        printf("Not possible");
    return 0;

}
