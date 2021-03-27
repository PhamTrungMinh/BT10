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

point mid_point(const point &a, const point &b)
{
    point c;
    c.x = (a.x+b.x)/2;
    c.y = (a.y+b.y)/2;
    return c;
}

int main()
{
    point a(2,3);
    point b(5,6);;
    point c = mid_point(a,b);
    c.print();
    return 0;
}
