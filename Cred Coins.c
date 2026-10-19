#include<stdio.h>
#include<math.h>
int main(){

    int t;
    scanf("%d",&t);

    while(t--){
        int x,y;
        scanf("%d%d",&x,&y);

        int total = x*y;
        int bag = floor(total/100.0);

        printf("%d\n",bag);
    }
    return 0;
    //ahnaf47
}
