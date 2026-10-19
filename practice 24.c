#include<stdio.h>
int main(){

    int day;

    scanf("%d",&day);

    int y = day/365;
    int m = (day%365)/30;
    int d = (day%365)%30;

    printf("%d Years %d months and %d Days\n ",y,m,d);


    return 0;
}
