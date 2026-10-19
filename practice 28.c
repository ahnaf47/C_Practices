#include<stdio.h>
int main(){

    float a,b;
    char op;

    scanf("%f%c%f",&a,&op,&b);

    float add = a+b;
    float substract = a-b;
    float multiply = a*b;
    float division = a/b;

    switch(op){
    case '+':
        printf("%.2f",add);
        break;
    case '-':
        printf("%.2f",substract);
        break;
    case '*':
        printf("%.2f",multiply);
        break;
    case '/':
        if(b==0){
            printf("Division by zero is not possible\n");
        }
        else{
            printf("%.2f",division);
        }
        break;
    default:
        printf("Invalid Operator\n");
    }
    return 0;
}
