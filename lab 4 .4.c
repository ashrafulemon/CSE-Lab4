

#include<stdio.h>
int main()
{
    int i,j,tem,n;
    int arr[100000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    //int x[5]={2,5,8,9,10};
    //printf("In order :");
    j=n-1;
    for(i=0;i<n/2;i++){
        tem= arr[i];
        arr[i]= arr[j];
        arr[j]=tem;
        printf(" arr[%d] = %d , arr[%d]= %d \n",i,arr[i],j,arr[j]);
        j--;
    }
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);

    return 0;
}
