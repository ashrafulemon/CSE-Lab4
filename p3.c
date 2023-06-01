#include<stdio.h>
int main()
{
    int a,b,i,j,k=0;
    int ar[10]= {1,4,5,8,6,5,7,4,9,0};
    for(i=0;i<10;i++){
        if(k<ar[i])
            k=ar[i];
    }
    printf("%d",k);
    return 0;
}
