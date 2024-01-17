#include <stdio.h>
#include <stdbool.h>

int main()
{
    int age = 17;
    double money = 3000;
    //bool isGraduated = true;
    //if((age > 17 && money > 2500) || isGraduated)
    //{
        //printf("this is true\n");
    //}

    //else
    //{
        //printf("this is false\n");
    //}
    bool hasMoney;
    hasMoney = money > 0 ? 1 : 0;
    printf("has Money? 1 is yes 0 is no:%d\n", hasMoney);
    return(0);
}