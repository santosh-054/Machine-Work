#include<iostream>
using namespace std;
class circle
{
    int r;
    float ar;
public:
        void get(int a)
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
    void init(int m,int n)
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
    int a,b,c;
    cout<<"\n Enter the radious of circle";
    cin>>a;
    rect obj;
    obj.get(a);
    obj.disp();
    cout<<"\n Enter the Sides of Rectangle";
    cin>>b>>c;
    obj.init(b,c);
    obj.result();
    return 0;
}
