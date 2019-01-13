#include <iostream>
#include <string>
#include <cstring>

//string 是一个类, 并且在std名域内

int main(int argc, char const *argv[])
{
    using namespace std;

    char charr1[20];
    char charr2[20] = "Hello";

    string str1;
    string str2 = "Hello world";

    cout << strlen(charr2) << endl;

    cout << str2.size() << endl;

    cin.getline(charr1, 20);

    getline(cin, str1);

    str1 += str2;

    cout << str1 << endl;

    return 0;
}
