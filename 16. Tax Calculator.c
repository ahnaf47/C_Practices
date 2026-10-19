#include<stdio.h>
int main(){

    int income;

    printf("Enter Your Yearly Income:");
    scanf("%d",income);

    if( income < 400000) {
            printf("No Tax.\n");
    }
    else if (income == 400000){

        float tax = (income*(10/100));

        printf("Your Payable Tax is %2.f\n",tax);
    }
    else if (income > 400000 && income <= 90000) {

        float tax = (40000+(income-400000)*(15/100));

        printf("Your Payable Tax is %2.f\n",tax);
    }
    else if (income > 900000 && income <= 1200000) {

        float tax = (115000+(income-900000)*(20/100));

        printf("Your Payable Tax is %2.f\n",tax);
    }
    else {

        float tax = (175000+(income-1200000)*(30/100));

        printf("Your Payable Tax is %2.f\n",tax);
    }


    return 0;

}
