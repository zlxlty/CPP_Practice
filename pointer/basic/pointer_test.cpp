#include <iostream>

int main(int argc, char const *argv[])
{
    using std::cout;
    using std::endl;

    double val = 10;
    int val2 = 10;

    cout << &val << endl;
    cout << &val2 << endl;

    return 0;
}
