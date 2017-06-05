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

class PrintOneToN
{
public:
    PrintOneToN()
    {
        cout << count++ << endl;
    }
private:
    static int count;

};

int PrintOneToN::count = 1;

int main(int argc, char *argv[])
{
    const int N = 20;
    PrintOneToN printOneToN[N];
    return 0;
}
