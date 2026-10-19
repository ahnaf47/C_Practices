#include<stdio.h>
int main(){

    int t;
    scanf("%d",&t);

    int arr[t+5][5];
    for(int i=0;i<t;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0;i<t;i++){

        int zero = 0;
        for(int j=0;j<3;j++){
            if(arr[i][j] == 0){
                zero++;
            }
        }

        if(zero>=2){
            printf("Water filling time\n");
        }
        else{
            printf("Not now\n");
        }
    }


    return 0;
    //ahnaf47
}
