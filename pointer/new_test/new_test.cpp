#include <iostream>
#include <string>
#include <cstring>

#define MAXLEN 10

typedef struct _student
{
    
    char *name;
    int id;
    double score;

} Student;

int main(int argc, char const *argv[])
{
    using namespace std;

    Student *stu = new Student;

    stu->name = new char [MAXLEN];
    strcpy(stu->name, "sky");
    stu->id = 10;
    stu->score = 4.0;

    cout << stu->name << endl;

    delete [] stu->name;
    delete stu;

    return 0;
}
