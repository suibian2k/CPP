#include <iostream>
#include <string.h>

using namespace std;

class Person
{
    public:
        Person()    
        {   
            name = NULL;
        }
        Person(char *name)
        {
            this->name = new char[strlen(name)+1];
            strcpy(this->name, name); 
        }
        Person(Person &a)
        {
           Person(name); 
        }
        ~Person()
        {
            if(NULL != name) 
            {
                delete []name;
                name = NULL;
            }
        }
        char *get_name()
        {
            return name;
        }
        void set_name(char *name)
        {
            this->name = new char[strlen(name)+1];
            strcpy(this->name, name); 
            
        }

    private:
        char *name;
};

int main(int argc, const char *argv[])
{
    char *p = new char[12];
    strcpy(p, "one");
    Person one(p);
    Person two(one);
     
    //two = one;
    strcpy(p, "two");
    two.set_name(p);
    delete []p;
    cout<<one.get_name()<<endl;
    cout<<two.get_name()<<endl;
    return 0;
}
