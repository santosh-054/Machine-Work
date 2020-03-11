#include<iostream>
using namespace std;
class circle
{
    int r;
    float ar;
public:
        circle(int a)
        {
            r=a;
        }
        void disp()
        {
            cout<<"Area of Circle="<<3.14*r*r;
        }
};

class rect: public circle
{
    int l,b;
public:
    rect(int a,int m,int n):circle(a)
    {
        l=m;
        b=n;
    }

    void result()
    {
        cout<<"\nArea of rectangle="<<l*b;
    }

};
int main()
{
    int a,c,d;
    cout<<"\n Enter the radious of circle";
    cin>>a;

    cout<<"\n Enter the Sides of Rectangle";
    cin>>c>>d;
    rect obj(a,c,d);
    obj.disp();
    obj.result();
    return 0;
}
