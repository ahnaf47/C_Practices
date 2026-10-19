#include<stdio.h>
int main(){

    int s,a;
    scanf("%d%d",&s,&a);

    if(s>=80 && a>=75){
        printf("Selected\n");
    }
    else if(s>=80 && a<75){
        printf("Low Attendance\n");
    }
    else if(s<80 && a>=75){
        printf("Low Score\n");
    }
    else {
        printf("Not Selected\n");
    }

    return 0;
}
