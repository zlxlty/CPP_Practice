#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;

    enum spectrum {red, orange, yellow, blue, violet, ultraviolet};

    spectrum spc;

    //spc = 4; 不能为enum变量赋int类型值
 
    spc = spectrum(4);
    cout << spc << endl;

    spc = violet;
    cout << violet << endl;

    return 0;
}
