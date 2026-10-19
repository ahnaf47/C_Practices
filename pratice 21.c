#include<stdio.h>
int main(){

    int i,n;
    i = 0;

    scanf("%d",&n);

    do {
        printf("%d\n",i);
        i++;
    }
    while(i<n);

    return 0;
}
