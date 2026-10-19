#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);

    int sum = 1;

    for(int i=1;i<n;i++){
        sum*=2;
    }
    printf("%d\n",sum);

    return 0;
    //ahnaf47
}
