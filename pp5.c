#include<stdio.h>
int main()
{
    int a,b,c,i,j,k;
    int x[100];
    int n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    for(i=0;i<=10;i++){
        c=0;
        for(j=0;j<n;j++){
            if(x[j]==i)
                c++;
        }
        printf("%d's counted in %d times\n",i, c);
    }
    return 0;

}
