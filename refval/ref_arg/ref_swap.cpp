#include <iostream>

using namespace std;

void swapr(int& a, int& b);

struct 
{
    int& number;
} Ref_struct;

int main(int argc, char const *argv[])
{
    int wallet1 = 300;
    int wallet2 = 50;

    cout << "wallet1 :" << wallet1 << endl;
    cout << "wallet2 :" << wallet2 << endl;

    cout << "Using swapr" << endl;
    swapr(wallet1, wallet2);
    cout << "wallet1 :" << wallet1 << endl;
    cout << "wallet2 :" << wallet2 << endl;

    int number = 10;
    Ref_struct.number = number; 

    return 0;
}

void swapr(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}
