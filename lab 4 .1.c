#include<stdio.h>
int main()
{
    int a,b,i,j,n;
    float c;
    int arr[100000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(n%2!=0)
        printf("Median = %d",arr[n/2]);
    else
    {
        c= (arr[n/2]+arr[n/2-1])/2.00;
        printf("%f",c);

    }
    return 0;


}
