#include <iostream>
using namespace std;

class Complex
{
    public:
        Complex(double real=0, double img=0)
        {
           this->real = real;
           this->img = img;
        }
        void print()
        {
            cout<<"real="<<real<<" img="<<img<<endl;
        }
        friend Complex operator +(Complex &c, Complex &d);
        Complex operator +(double x);
        //Complex operator ((double x);
    private:
        double real;
        double img;
};

Complex operator +(Complex &c, Complex &d)
{
       Complex tmp;
       tmp.real = d.real + c.real;
       tmp.img = d.img + c.img;
       return tmp;
}

Complex Complex::operator +(double x)
{
       Complex tmp;
       tmp.real = this->real + x;
       tmp.img = this->img;
       return tmp;
}

//Complex Complex::operator !(double x)
//{
       //Complex tmp;
       //tmp.real = this->real + x;
       //tmp.img = this->img;
       //return tmp;
//}

int main(int argc, const char *argv[])
{
    Complex c1(12, 20), c2(23, 12), c;
    c.print();
    c = c1 + c2;
    c.print();
    c = c1 + (c2,1000,50);
    c.print();
    c = c1 + 444;
    c.print();

    return 0;
}
