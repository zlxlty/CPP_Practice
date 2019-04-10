#include <iostream>
#include <ctime>

#define inline_test 1

using namespace std;

#if inline_test

inline int calculation(int a, int b){ return a*a+b*b+a*b+b*a; }

#else

int calculation(int a, int b){ return a*a+b*b+a*b+b*a; }

#endif


int main(int argc, char const *argv[])
{
    clock_t start = clock();

    cout << calculation(1, 3) << endl;
    cout << calculation(2, 4) << endl;
    cout << calculation(1, 3) << endl;
    cout << calculation(2, 4) << endl;
    cout << calculation(1, 3) << endl;
    cout << calculation(2, 4) << endl;
    cout << calculation(1, 3) << endl;
    cout << calculation(2, 4) << endl;

    clock_t end = clock();

    cout.precision(8);

    cout << CLOCKS_PER_SEC << endl;

    cout << "\n" << end-start << endl;

    return 0;
}
