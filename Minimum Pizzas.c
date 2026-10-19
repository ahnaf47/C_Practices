#include<stdio.h>
#include<math.h>
int main(){

    int t;
    scanf("%d",&t);

    while(t--){
        int n,x;
        scanf("%d%d",&n,&x);

        int total = n*x;
        int pizza = ceil(total/4.0);

        printf("%d\n",pizza);
    }
    return 0;
    //ahnaf47
}
