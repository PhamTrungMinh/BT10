#include <iostream>
using namespace std;

struct point{
    double x;
    double y;
    point(){}

    point(double _x, double _y){
        x=_x; y=_y;
    }
};

int main()
{
    point a(2,3);
    cout << &a << endl;
    cout << &a.x << endl;
    cout << &a.y << endl;
    return 0;
}
//biến x có cùng vị trí với biến a, còn biến y có vị trí
//cách x 1 khoảng tương ứng với kiểu biến
