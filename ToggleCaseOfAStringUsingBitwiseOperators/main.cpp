/**
 * \author thanhtung thanhtungpfiev@gmail.com
 *
 * \date 6 - 6 - 2017
 *
 * \class %{Cpp:License:ClassName}
 *
 * \brief
 *
 *
 */
#include <iostream>

using namespace std;

const int x = 32;

char *toogleCase(char *a)
{
    for (int i = 0; a[i] != '\0'; i++) {
//        if ((a[i] ^ 65) & x) {
//            a[i] &= ~x;
//        } else {
//            a[i] |= x;
//        }
        a[i] ^= x;
    }
    return a;
}

int main(int argc, char *argv[])
{
    char str[] = "CheRrY";
    cout << "Toogle case: " << toogleCase(str) << endl;
    cout << "Original string: " << toogleCase(str) << endl;
    return 0;
}
