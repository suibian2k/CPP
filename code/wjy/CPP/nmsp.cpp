#include <iostream>
#include <string.h>
using namespace std;

namespace my
{
    char name[] = "my";
    void show_name()
    {
        cout<<name<<endl;
    }
}
namespace your
{
    char name[] = "your";
    void show_name()
    {
        cout<<name<<endl;
    }
}
int main(int argc, const char *argv[])
{
    strcpy(my::name,"ddt"); 
    strcpy(your::name,"ddbt"); 
    my::show_name();
    //your::show_name();
    return 0;
}
