#include<stdio.h>
int main(){

    int n;

    scanf("%d",&n);

    int totalSum = n*(n+1)/2;
    int givenSum = 0,num;

    for(int i=1;i<n;i++){
        scanf("%d",&num);
        givenSum += num;
    }

    int m = totalSum - givenSum;

    printf("%d\n",m);



    return 0;
}
