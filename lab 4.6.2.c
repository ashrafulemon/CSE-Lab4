///sort
#include<stdio.h>
int main()
{
    int a,b,c,i,j,k,n,temp;
    int ar[100000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(ar[i]>ar[j]){
                temp = ar[i];
                ar[i]= ar[j];
                ar[j]=temp;
            }
        }
     //   for(j=0;j<n;j++){
     //       printf("%d ",ar[j]);
     //   }
     //   printf("\n");
    }
    for(i=0;i<n;i++){
        printf("%d ",ar[i]);
    }
    return 0;
}
