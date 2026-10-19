#include<stdio.h>
int main() {

    float length, width, area;

    //Input length in meter
    printf("Enter the length:");
    scanf("%f",&length);

    //Input width in meter
    printf("Enter the width:");
    scanf("%f",&width);

    //Area formula
    area = length*width;

    //Area calculation
    printf("The Area is %.2f square meter.\n",area);


    return 0;
}
