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
#include <iostream>

using namespace std;

/* simple recursive program for Fibonacci numbers */
int fib(int n)
{
   if (n <= 1) {
       return n;
   }
   return fib(n - 1) + fib(n - 2);
}

int main(int argc, char *argv[])
{
    cout << fib(40) << endl;
    return 0;
}
