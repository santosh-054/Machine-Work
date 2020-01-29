#include<iostream>
using namespace std;
class A
{
    int x;
    static int y;
public:
    void get(int a)
    {
        x=a;
        y++;
    }
    void disp()
    {
    cout<<x<<" "<<y<<endl;

    }
};

int A::y;
int main()
{
    A OB1;
    A OB2;
    OB1.get(100);
    OB2.get(200);
    OB1.disp();
    OB2.disp();
    return 0;
}
