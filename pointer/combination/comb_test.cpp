#include <iostream>

using namespace std;

struct Student 
{
    string name;
    int score;
};

int main(int argc, char const *argv[])
{
    Student s1, s2, s3;

    s1.name = "sky";
    s2.name = "connie";
    
    const Student *pstu[3] = {&s1, &s2, &s3};

    const Student **ppstu1 = pstu;

    auto ppstu2 = pstu;

    cout << pstu[0]->name << endl;

    cout << (*ppstu1)->name << endl;

    cout << (*(ppstu2+1))->name << endl;

    return 0;
}
