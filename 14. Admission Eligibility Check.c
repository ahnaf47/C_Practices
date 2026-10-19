#include<stdio.h>
int main(){

    int math,phy,chem,total,tmp;

    printf("Enter your marks in Mathematics:");
    scanf("%d", &math);

    printf("Enter your marks in Physics:");
    scanf("%d", &phy);

    printf("Enter your marks in Chemistry:");
    scanf("%d", &chem);

    total == (math+phy+chem);
    tmp == (math+phy);

    if(math >= 65 && phy >= 55 && chem >= 50 && total >= 190) {
        printf("The candidate is eligible for admission.\n");
    }
    else if(tmp >= 140) {
        printf("The candidate is eligible for admission.\n");
    }
    else {
        printf("The candidate is not eligible for admission.\n");
    }

    return 0;
}
