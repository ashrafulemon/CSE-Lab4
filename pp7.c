#include<stdio.h>
int main()
{
    int a[10]={3,4,5},b[10]={2,3,5,7,5};
    int un[120], it[10],dfa[10],dfb[10],i,j,u=0,s=0,d=0,e=0,all[10],al=0,temp,k,l;
    for(i=0;i<3;i++){
        all[al]=a[i];
        al++;
    }
    for(i=0;i<5;i++){
        all[al]=b[i];
        al++;
    }
    for(i=0;i<al;i++){
        printf("%d ",all[i]);
    }
    printf("\n");
    for(i=0;i<al-1;i++){
        for(j=i;j<al;j++){
            if(all[i]>all[j]){
                temp=all[i];
                all[i]=all[j];
                all[j]=temp;
            }
        }
    }
    printf("Ascending order   : ");
    for(i=0;i<al;i++){
        printf("%d ",all[i]);
    }
    printf("\n");

    for(i=0;i<al;i++){
        if(u!=0 && all[i]==un[u-1])
            continue;
        un[u]=all[i];
        u++;
    }
    printf("Union             : ");
    for(i=0;i<u;i++){
        printf("%d ",un[i]);
    }
    printf("\n");
    for(i=0;i<al-1;i++){
        if(all[i]==all[i+1]){
            if(s!=0 && all[i]==it[s-1])
                continue;
            it[s]=all[i];
            s++;
        }
    }
    printf("Intersection      : ");
    for(i=0;i<s;i++){
        printf("%d ",it[i]);
    }
    printf("\n");

    for(i=0;i<3;i++){
        k=1;
        for(j=0;j<5;j++){
            if(a[i]==b[j]){
                k=0;
                break;
            }
        }
        if(k==1){
            dfa[d]=a[i];
            d++;
        }
    }
    printf("Deffenence a to b : ");
    for(i=0;i<d;i++){
        printf("%d ",dfa[i]);
    }
    printf("\n");

    for(i=0;i<5;i++){
        k=1;
        for(j=0;j<3;j++){
            if(b[i]==a[j]){
                k=0;
                break;
            }
        }
        if(k==1){
            dfb[e]=b[i];
            e++;
        }
    }
    printf("Difference b to a : ");
    for(i=0;i<e;i++){
        printf("%d ",dfb[i]);
    }
    printf("\n");

    return 0;
}
