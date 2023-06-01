
#include<stdio.h>
int main()
{
    int i,j,k,n;
    int arr[510000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    k=arr[0];
    for(i=1;i<n;i++){
        if(k>arr[i])
            k=arr[i];
    }
    printf("%d",k);

    return 0;
}
