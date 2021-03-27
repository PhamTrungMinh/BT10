#include <iostream>
using namespace std;

struct point{
    double x;
    double y;

    point(double _x, double _y){
        x=_x; y=_y;
    }

    void print(){
        cout << "(" << x << "," << y << ")";
    }
};

int main()
{
    point a(2,3);
    a.print();
    return 0;
}
