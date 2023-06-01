#include<stdio.h>
int main()
{
    int a,b,c,i,j,k,n,sum=0;
    float avg;
    int ar[100000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
        sum= sum+ar[i];
    }
    avg = (float)sum/n;
    printf("sum = %d,\navg = %f",sum,avg);
    return 0;
}
