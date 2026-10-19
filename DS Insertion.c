#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);

    int arr[n+1];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    n++;
    int p,v;
    scanf("%d%d",&p,&v);

    if(p>=0 && p<n){
        for(int i=n-1;i>p; i--){
            arr[i] = arr[i-1];
        }
        arr[p] = v;
        for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
        }
    }
    else{
        printf("Invalid Position\n");
    }

    return 0;
}
