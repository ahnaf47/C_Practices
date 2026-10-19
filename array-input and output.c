#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    //array input
    int nira[n+5];
    for(int i=0;i<n;i++){
        scanf("%d",&nira[i]);
    }
    //array output
    for(int i=0;i<n;i++){
        printf("%d ",nira[i]);
    }

    return 0;
}
