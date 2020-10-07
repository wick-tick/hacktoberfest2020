#include<iostream>
using namespace std;

class test
{
        int x;
    public:
        test(){}
        test(int a)
        {
            x=a;
        }
        friend test operator + (int a,test &t)
        {
            test temp;
            temp.x = a + t.x;
            return temp;
        }
        friend test operator + (test &t,int a)
        {
            test temp;
            temp.x = t.x + a;
            return temp;
        }
        void display()
        {
            cout<<"x = "<<x<<"\n";
        }
};

int main()
{
    test a(5),b(6),c,d;
    cout<<"a : ";
    a.display();
    cout<<"b : ";
    b.display();
    c = a + 2;
    cout<<"a + 2 : ";
    c.display();
    d = 4 + b;
    cout<<"4 + b : ";
    d.display();
    return 0;
}
