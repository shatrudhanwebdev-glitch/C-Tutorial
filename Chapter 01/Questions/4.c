#include<stdio.h>

//shatrudhan.web.developer

int main() {

    //Valueme of cylender.

    int radius, hight;
    float cylender;

    //input feom user
    printf("Enter radius : ");
    scanf("%d", &radius);

    printf("Enter hight : ");
    scanf("%d", &hight);

    //formula of cylender
    cylender = 3.14 * (radius * radius) * hight;

    //final output
    printf("Value valueme of cylender = %f\n", cylender);

    return 0;
}