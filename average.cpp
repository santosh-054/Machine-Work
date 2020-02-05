//Find average of two number from different class using friend function
#include<iostream>
using namespace std;
class B;
class A
{
    int a;
public:
    void get(int x)
    {
        a=x;
    }
    void disp()
    {
        cout<<"A="<<a<<endl;
    }
    friend int avg(A,B);
};

class B
{
    int b;
public:
    void read(int x)
    {
        b=x;
    }
    void print()
    {
        cout<<"B="<<b;
    }
        friend int avg(A,B);

};
int avg(A M, B N)
{

    return(M.a+N.b)/2;

}
int main()
{
    A OBA;
    B OBB;
    int c;
    OBA.get(100);
    OBB.read(200);
    c=avg(OBA,OBB);
    cout<<"Average"<<c<<endl;
    OBA.disp();
    OBB.print();
    return 0;
}
