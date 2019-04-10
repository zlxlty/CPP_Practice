#include <iostream>

using namespace std;

class Box
{
    public:
        int length;
        int height;
        int breadth;
        Box(int len, int height, int breadth);
        ~Box();
        void setId(int id);
        int getId(void);

    private:
        int id;
};

Box::Box(int len, int hei, int bre): length(len), height(hei), breadth(bre)
{
    cout << "hello world!" << endl;
}

Box::~Box()
{
    cout << "goodbye world!" << endl;
}

void Box::setId(int id)
{
    Box::id = id;
}

int Box::getId(void)
{
    return id;
}

int main()
{
    int const a = 2;
    int const& ra = a;
    cout << ra << endl;

    Box box(1,2,3);
    cout << "Breadth is: " << box.breadth << endl;
    box.setId(1);
    cout << "Id is: " << box.getId() << endl;


    cout << "end" << endl;
}