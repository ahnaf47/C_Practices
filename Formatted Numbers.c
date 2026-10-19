#include <stdio.h>
int main(){

    int n;

    scanf("%d", &n);

    if (n >= 1000000)
        printf("%d,%03d,%03d\n", n / 1000000, (n / 1000) % 1000, n % 1000);

    else if (n >= 1000)
        printf("%d,%03d\n", n / 1000, n % 1000);

    else
        printf("%d\n", n);

    return 0;
    //ahnaf47
}
