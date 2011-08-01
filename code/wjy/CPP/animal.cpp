#include<iostream>

using namespace std;

class Animal 
{
    public:
        string name;
        Animal(string name)
        {   
            kind = "animal";
            this->name = name; 
        }
        ~Animal()
        {
            cout<<"missing"<<endl;
        }
        void eat()
        {
            cout<<kind<<" "<<name<<" eat"<<endl;
        }

    private:
        string kind;
};

class People:public Animal
{
    public:
        People(string name):Animal(name)
        {   
            kind = "people";
        }

        ~People()
        {
            
        }
        void eat()
        {
            cout<<kind<<" "<<name<<" eat"<<endl;
        }
    private:
        string kind;
};
int main(int argc, const char *argv[])
{
    Animal an("dabai");
    an.eat();
    Animal ant("dada");
    ant = an;
    ant.eat();
    People pp("xiaobai");
    pp.eat();
    return 0;
}
