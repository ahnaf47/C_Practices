#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);

    while(n--){
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);

        int total = x*y;

        if(total < 2*z){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
    //ahnaf47
}
