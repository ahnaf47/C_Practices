#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);

    int arr[n+1];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int t;
    scanf("%d",&t);

    for(int i=0; i<n; i++){
        if(arr[i] == t){
            printf("Found\nIndex: %d\n",i);
            return 0;
        }
    }
    printf("Not Found\n");

    return 0;
}
