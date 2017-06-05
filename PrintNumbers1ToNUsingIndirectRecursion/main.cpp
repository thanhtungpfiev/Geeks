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

template<int N>
class PrintOneToN
{
public:
    static void print()
    {
        PrintOneToN<N-1>::print();
        cout << N << endl;
    }
};

template<>
class PrintOneToN<1>
{
public:
    static void print()
    {
        cout << 1 << endl;
    }
};

int main(int argc, char *argv[])
{
    const int N = 20;
    PrintOneToN<N>::print();
    return 0;
}
