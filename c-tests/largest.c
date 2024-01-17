#include <stdio.h>

// Define largest function
int largest(int ages[], int size);

int main()
{
    // Declaration & Initialization
    int ages[] = {1, 33, 50, 20, 2};
    int size = sizeof(ages) / sizeof(ages[0]);
    int result = largest(ages, size);

    // print result
    printf("%d\n", result);

    return (0);
}
// ccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc
int largest(int ages[], int size)
{
    int res = ages[0];
    for(int i = 0; i <= size; i++)
    {
        if(ages[i] > res)
        {
            res = ages[i];
        }
    }
    return (res);
}