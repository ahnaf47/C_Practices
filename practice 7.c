#include<stdio.h>
int main(){

    int num1,num2,num3;

    //Input of a number
    printf("Enter your first Number:");
    scanf("%d",&num1);

    printf("Enter your second Number:");
    scanf("%d",&num2);

    printf("Enter your third Number:");
    scanf("%d",&num3);


    //Find the largest number
    if(num1==num2 && num2==num3) {
        printf("All are Equal.\n");
    }
    else if(num1>=num2 && num1>=num3) {
        printf("The Largest Number is %d.\n",num1);
    }
    else if(num2>=num1 && num2>=num3) {
        printf("The Largest Number is %d.\n",num2);
    }
    else {
        printf("The Largest Number is %d.\n",num3);
    }


    return 0;
}
