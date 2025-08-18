#include<stdio.h>

//shatrudhan.web.developer

int main() {

    //area of circle

    float radius, circle;

    //input radius from user
    printf("Enter radius : ");
    scanf("%f", &radius);

    //formula area of circle
    circle = 3.14 * (radius * radius);

    //final output
    printf("Value area of circle = %f\n", circle);

    return 0;
}