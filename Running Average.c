#include<stdio.h>
int main(){

    int n,num,sum=0;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        scanf("%d",&num);

        sum+=num;

        double avg = (double)sum/i;

        printf("%.10lf\n",avg);
    }

    return 0;
    //ahnaf47
}
