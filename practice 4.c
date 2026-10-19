#include<stdio.h>
int main(){

    float weight,h,height,BMI;


    //Heading
    printf("BMI Calculator-\n");

    //Input
    printf("Enter Weight in Kilogram:");
    scanf("%f",&weight);

    printf("Enter Height in Centimeter:");
    scanf("%f", &h);

    //Convert Height CM to M
    height = (h/100);

    //BMI Formula
    BMI = (weight/(height*height));

    printf("Your BMI is %.2f.\n",BMI);

    //BMI category
    if(BMI<18.5) {
        printf("Category: Underweight.\n");
    }
    else if(BMI>=18.5 && BMI<25) {
        printf("Category: Normal Weight.\n");
    }
    else if(BMI>=25 && BMI<30) {
        printf("Category: Overweight.\n");
    }
    else {
        printf("Category: Obese.\n");
    }

    return 0;
}
