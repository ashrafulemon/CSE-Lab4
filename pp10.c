#include<stdio.h>
int main()
{

    int a,b,c,i,j,k,n,m;
    int arr[100][100];
    int brr[100][100];
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            brr[j][i]=arr[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
