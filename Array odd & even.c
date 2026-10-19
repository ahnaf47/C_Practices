#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);

    int arr[n+5];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int odd = 0;
    int even = 0;

    for(int i=0;i<n;i++){
        if(arr[i]&1){
            odd++;
        }
        else{
            even++;
        }
    }

    if(even>odd){
        printf("READY FOR BATTLE\n");
    }
    else{
        printf("NOT READY\n");
    }

    return 0;
    //ahnaf47

}
