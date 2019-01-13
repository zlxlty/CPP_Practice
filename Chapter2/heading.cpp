#define IOH 0
#define IO 1

#if IOH

#include <iostream.h>

int main(int argc, char const *argv[])
{
    cout << "Hello World" << endl;

    return 0;
}

#endif

#if IO

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Hello World" << endl;
    return 0;
}

#endif

