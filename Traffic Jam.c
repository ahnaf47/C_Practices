#include<stdio.h>
int main(){

    int t;
    scanf("%d",&t);

    while(t>0){
        long long n,time;
        scanf("%lld",&n);

        if(n<=100){
            time = 420+1200;
        }
        else if(n>100){
            time = 1620 + (n-100)*14;
        }

        printf("%lld\n",time);
        t--;

    }
    return 0;


}
