#include<stdio.h>
int main (){

    int num;

    //Input A number
    printf("Enter a Number:");
    scanf("%d",&num);


    //Checking is it Odd or Even
    if(num%2 == 0){
        printf("This Number %d is Even.\n",num);
    }
    else {
        printf("This Number %d is Odd.\n",num);
    }

    return 0;

}
