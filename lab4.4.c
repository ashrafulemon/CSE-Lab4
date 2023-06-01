
#include<stdio.h>
int main()
{
    int i=0,j,k,n;
    int arr[100000];
    scanf("%d",&n);
    while(1){
        arr[i]=n%2;
        n=n/2;
        i++;
        if(n==0)
            break;
    }
    for(j=i-1;j>=0;j--){
        printf("%d",arr[j]);
    }
    return 0;
}
