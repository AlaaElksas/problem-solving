#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int a = 10;
    double b = 10.5;
    printf("%lu\n", sizeof(b)); // 8 bytes = 64 bits

    float c = 10.5;
    printf("%lu\n", sizeof(c)); // 4 bytes = 32 bits

    char v = 'M'; //one character
    char n[] = "char array"; //aka a string
    bool f = true;

    int slices = 17;
    int people = 2;

    double  slicesPerPerson = (double) slices / people; //the expecting result is 8.5000
    printf("%lf\n", slicesPerPerson);




    return(0);
}