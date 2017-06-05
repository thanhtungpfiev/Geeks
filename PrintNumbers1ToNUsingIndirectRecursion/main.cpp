/**
 * \author tungdt9 thanhtungpfiev@gmail.com
 *
 * \date 6/5/2017
 * \class %{Cpp:License:ClassName}
 *
 * \brief
 *
 *
 */
#include <iostream>

using namespace std;

#define N 20

int n = 1;

void func2();

void func1()
{
    if (n <= N) {
        cout << n << endl;
        n++;
        func2();
    } else {
        return;
    }
}

void func2()
{
    if (n <= N) {
        cout << n << endl;
        n++;
        func1();
    } else {
        return;
    }
}

int main(int argc, char *argv[])
{
    func1();
    return 0;
}
