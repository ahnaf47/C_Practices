#include <stdio.h>
int main() {

    int A, B;
    scanf("%d %d", &A, &B);

    while(A > 0 || B > 0){

        int C = A % 10;
        int D = B % 10;

        if(C + D >= 10){
            printf("Yes\n");
            return 0;
        }

        A /= 10;
        B /= 10;
    }

    printf("No\n");

    return 0;
    //ahnaf47
}
