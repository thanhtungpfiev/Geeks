/**
 * \author thanhtung thanhtungpfiev@gmail.com
 *
 * \date 12 - 6 - 2017
 *
 * \class %{Cpp:License:ClassName}
 *
 * \brief Dynamic Programming
 *
 *
 */
/* C program for Tabulated version */
#include<stdio.h>
int fib(int n)
{
  int *f = new int[n+1];
  int i;
  f[0] = 0;   f[1] = 1;
  for (i = 2; i <= n; i++)
      f[i] = f[i-1] + f[i-2];

  return f[n];
}

int main ()
{
  int n = 9;
  printf("Fibonacci number is %d ", fib(n));
  return 0;
}
