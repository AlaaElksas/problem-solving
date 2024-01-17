#include <stdio.h>

// this programe checks the degrees of one student compared by other students degrees

int main()
{
    // Declaration & Initialization
    double Degree;
    int StudentsDegrees[]= {60, 45, 38, 52, 49, 58, 30, 40, 29, 59};
    double lengthOfArray = sizeof(StudentsDegrees) / sizeof(StudentsDegrees[0]);
    double sum = 0;
    double average;

    // getting a degree from a user
    printf("what is your degree?: ");
    scanf("%lf", &Degree);

    //calculate sum of array
    for(int i = 0; i < lengthOfArray; i++)
    {
        sum = sum + StudentsDegrees[i];
    }

    // calculate average of degrees
    average = sum / lengthOfArray;

    // comparing MyDegree with the average of degrees
    if(Degree > average)
    {
        puts("you succeeded");
    }
    else if(Degree < average)
    {
        puts("sorry, you didn't make it");
    }
    else
    {
        puts("you just made it");
    }

}