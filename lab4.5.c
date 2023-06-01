
#include<stdio.h>
int main()
{
    int a,b,i,j,k=0,n;
    int arr[10000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        b=1;
        scanf("%d",&a);
        for(j=0;j<i;j++){
            if(arr[j]==a){
                b=0;
                break;
            }
        }
        if(b==1){
            arr[k]=a;
            k++;
        }
    }
    for(i=0;i<k;i++)
        printf("%d",arr[i]);

    return 0;
}
