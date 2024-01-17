#include <stdio.h>

int main(void)
{
    //printf("hello world\n");

    int x = 50; //declaration and intialization
    int y = 10;

    printf("%s world\n","hello");
    //printf("the value of x: %d\n", x);
    //printf("X: %d, Y: %d\n", x, y);

    printf("what is your age?:");
    int age;
    scanf("%d", &age); //here we take a value from the user and store it in the address of the variable

    printf("your age is: %d\n" , age );

    printf("what is your name?:");
    char name[20]; //char array of 20 characters. but we reserve the last one to the null char '.\0' to know the end of the string
    scanf("%19s" , name);
    printf("your name is :%s\n" , name);

    return(0);

}
