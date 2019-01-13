#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;

    cout << R"(Hello, my name is "sky" \n)" << endl;

    cout << R"+*(Hello "(World)")+*" << endl;
    return 0;
}
