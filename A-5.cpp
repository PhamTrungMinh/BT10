#include <iostream>
using namespace std;

struct point{
    double x;
    double y;
    point(){}

    point(double _x, double _y){
        x=_x; y=_y;
    }

    void print(){
        cout << "(" << x << "," << y << ")" << endl;
    }
};

int main()
{
    point a(2,3);
    point b = a;
    a.print();
    b.print();
    cout << &a << " " << &b;
    return 0;
}

//2 biến struct có giá trị giống nhau, khác nhau ở vị trí trong bộ nhớ
