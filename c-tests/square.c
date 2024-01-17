#include <stdio.h>

// this program displays area and priemeter of square

int main()
{
    // Declaration of Variables
    double side, area, priemeter;

    // Getting the side value from user
    printf("What is the side length of the square?");
    scanf("%lf" , &side);

    // calculate area and priemeter
    area = side * side;
    priemeter = side * 4;

    // print the values
    printf("the area of the square: %f\n", area);
    printf("the priemeter of the square: %f\n", priemeter);


}