#include<stdio.h>

//shatrudhan.web.developer

int main () {

    //Input (Sum of 2 number)

    int Num1, Num2;

    //Input number from user
    printf("Enter Num1 : ");
    scanf("%d", &Num1);

    printf("Enter Num2 : ");
    scanf("%d", &Num2);

    //Sum of Num1 and Num2
    int sum = Num1 + Num2;

    //output
    printf("Value of sum = %d\n", sum);

    return 0;
}