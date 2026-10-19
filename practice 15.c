#include<stdio.h>
int main(){

    int m,s,h;

    scanf("%d%d%d",&m,&s,&h);

    int total = (m*11) + (s*23) + (h*29);
    int students = total/50;
    int dean = total%50;

    printf("Each Students:%d & Dean office:%d\n",students,dean);

    return 0;
}
