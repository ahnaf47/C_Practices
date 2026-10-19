#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);

    int arr[n+5][5];

    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        float avg = (arr[i][0]+arr[i][1])/2.0;
        if(avg > arr[i][2]){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
    //ahnaf47
}
