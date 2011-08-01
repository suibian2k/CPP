#include <iostream>
using namespace std;

//template <class T, class  P, int z>
//T sum(T x, P y)
//{
    //return x+y+z;
//}

template <typename T, typename  P>
class C
{
    public:
        C()
        {
            
        }
        ~C()
        {
            
        }

        void sum(T x, P y)
        {
            cout<<"1"<<endl;
        }

        void sum(T x, T y)
        {
            cout<<"2"<<endl;
        }
        
        void sum(P x, P y);
        //{
            //cout<<"3"<<endl;
        //}
};

template <typename T, typename  P>

void C<T,P>::sum(P x, P y)
{
    cout<<"3"<<endl;
}
int main(int argc, const char *argv[])
{
    //cout<<"sum(2, 'a')="<<(sum<int,char,10>)(2, 'a')<<endl;
    C<char,double> a;
    a.sum(2.1,2.1);
      
    return 0;
};
