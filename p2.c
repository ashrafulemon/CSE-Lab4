#include<stdio.h>
int main()
{
    int a,i,j,n;
    int ar[100000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    for(j=n-1;j>=0;j--){
        printf("%d ",ar[j]);
    }
    return 0;
}
