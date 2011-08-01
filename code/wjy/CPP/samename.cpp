#include <iostream>

using namespace std;

int add(int x, int y)
{
    return x+y;     
}

double add(double x, double y)
{
    return x+y;
}
int main(int argc, const char *argv[])
{
    int n = 2;
    int *p = new int[n];
    delete []p;
    cout<<"add(3,4)"<<add(3, 4)<<endl<<"add(3.1, 4.2)"<<add(3.1, 4.2)<<endl;
    return 0;
}
