#include <iostream>
using namespace std;

struct point{
    double x;
    double y;

    point(double _x, double _y){
        x=_x; y=_y;
    }

    void print(){
        cout << "(" << x << "," << y << ")" << endl;
    }
};

void test1(point a)
{
    a.print();
    cout << &a << endl;
}

void test2(point &a)
{
    a.print();
    cout << &a << endl;
}

int main()
{
    point a(2,3);
    cout << &a << endl;
    test1(a);
    test2(a);
    return 0;
}
