#include <stdio.h>
int power(int a, int x);
int recPower(int a, int x);

int main()
{
  //int result = power(5, 3);
  int result = recPower(5, 3);
  printf("%d\n", result);
  return (0);
}

int recPower(int a, int x)
{
    if(x < 1)
    {
        return (1);
    }
    return a * recPower(a, --x);
}

int power(int a, int x)
{
  int res = 1;
  for(int i = 0; i < x; i++)
    {
      res *= a;
    }
  return (res);
}