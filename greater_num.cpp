//Find the greatest value among two classes using friend function
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
        cout<<"A="<<a;
    }
    friend int big(A,B);
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
        friend int big(A,B);

};
int big(A M, B N)
{
    if(M.a>N.b)
        return(M.a);
    else
        return(N.b);
}
int main()
{
    A OBA;
    B OBB;
    int R;
    OBA.get(100);
    OBB.read(200);
    R=big(OBA,OBB);
    cout<<"Bigger value"<<R<<endl;
    OBA.disp();
    OBB.print();
    return 0;
}
