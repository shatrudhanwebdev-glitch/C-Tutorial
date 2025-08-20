#include<stdio.h>

//shatrudhan.web.developer

int main() {

    //Simple Intrest Calculator.

    int P, R, T;
    float SI;

    //intput from user
    printf("Enter P : , Enter R : , Enter T(in year) : ");
    scanf("%d %d %d", &P, &R, &T);

    //formula of SI
    SI = (P * R * T) / 100.0;

    //final result
    printf("Value of SI = %f\n", SI);

    return 0;
}