#include <iostream>
using namespace std;
class Point;

class B
{
    public:
    Point inflate(Point &pt, int nOffset);
};

class Point
{
    public:
        friend Point B::inflate(Point &pt, int nOffset);
        Point(int x = 0, int y = 0)
        {
           this->x = x;
           this->y = y;
        }
        void print()
        {
            cout<<"Point "<<x<<","<<y<<endl;
        }
    private:
        int x; 
        int y;
};

Point B::inflate(Point &pt, int nOffset)
{
    pt.x += nOffset;
    pt.y += nOffset;
    return pt;
}
int main(int argc, const char *argv[])
{
    //Point p(1,2);
    Point p;
    p.print(); 
    B b;
    b.inflate(p, 3);
    p.print();
    return 0;
}
