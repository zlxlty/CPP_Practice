#include <iostream>

using namespace std;

int vals[5] = {1, 123, 21, 45, 66};
int ids[5] = {4, 1123, 1234, 123, 1};

int& setval(int index, int* array)
{
    return array[index];
}

int main(void)
{
    setval(0, vals) = 2;

    for (int i = 0; i < 5; i++)
    {
        cout << setval(i, ids) << endl;
    }
}