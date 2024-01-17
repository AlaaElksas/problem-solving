#include <stdio.h>


int main()
{
    char name[20];
    do{
        printf("Entre your name: ");
        scanf("%19s", name);
    }while(name == NULL);
    printf("Hello %s\n", name);
    return(0);
}