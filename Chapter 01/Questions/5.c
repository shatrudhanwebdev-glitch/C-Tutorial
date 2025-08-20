#include<stdio.h>

//shatrudhan.web.developer

int main() {

    //Simple Intrest Calculator.

    int principal, rate, time;
    double SI;

    //input from user
    printf("Enter principal : \nEnter rate : \nEnter time(in year) : ");
    scanf("%d %d %d", &principal, &rate, &time);

    //formula of SI
    SI = (principal * rate * time) / 100.0;

    //final output
    printf("Value of SI = %f\n", SI);

    return 0;
}