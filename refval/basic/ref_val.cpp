#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    
    int number = 12;
    int& digit = number;

    // int& digit;
    // digit = number; 不可以先定义再赋值

    cout << digit << endl;
    cout << number << endl;
    cout << &digit << endl;
    cout << &number << endl;

    int number2 = 10;
    digit = number2;

    //合法,但是只会修改值，不会修改地址

    cout << digit << endl;
    cout << number2 << endl;
    cout << number << endl;
    cout << &digit << endl;
    cout << &number2 << endl;

    return 0;
}
