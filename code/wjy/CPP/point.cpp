/*
 * the first cpp file
 */

#include <iostream>

using namespace std;

/*a class descript point*/
class point
{
    private:
        int x;
        int y;

    public:
    
    point(int x, int y)
    {
        this->x = x; 
        this->y = y;
    }
    ~point()
    {
           
    }

    void show_point()
    {
        cout<<"x = "<<x<<endl<<"y = "<<y<<endl;
    }

};
int main()
{
    point pt(9,5);

    pt.show_point();

    return 0;

}
