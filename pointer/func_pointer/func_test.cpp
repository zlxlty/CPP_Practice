#include <iostream>
#include <string>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;
using std::string;

struct 
{
    unsigned int numeric : 1;
} flags;

int numcomp(int *a, int *b)
{
    if (*a > *b)
        return 1;
    else if (*a < *b)
        return -1;
    else
        return 0;
}

typedef int (*pcomp)(void *, void *); 


int main(int argc, char const *argv[])
{
    flags.numeric = 0;

    pcomp pc1 = flags.numeric ? (pcomp)numcomp : (pcomp)strcmp;
    
    char a[20] = "hello", b[20] = "hello";

    cout << (*pc1)(&a, &b) << endl;

    return 0;
}
