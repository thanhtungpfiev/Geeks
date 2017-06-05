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

void printNos(unsigned int n)
{
    if (n > 0) {
        printNos(n - 1);
        cout << n << endl;
    }
    return;
}

int main(int argc, char *argv[])
{
    printNos(20);
    return 0;
}
