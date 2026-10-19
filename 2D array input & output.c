#include<stdio.h>
int main(){
    //input
    int n;
    scanf("%d",&n);

    int arr[n+5][10];

    for(int i=0;i<n;i++){
        for(int j=0;j<5;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    //output
    return 0;
}
