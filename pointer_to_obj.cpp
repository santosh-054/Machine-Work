#include<iostream>
using namespace std;
class cir
{
    int r;
    float ar;
    void cal();
    public:
        void get(int x)
        {
            r=x;
        }
        void disp()
        {
            cal();
            cout<<"Area="<<ar;
        }
};
void cir :: cal()
{
    ar=3.14*r*r;
}
int main()
{
    cir obj;
    int n;
    cout<<"Enter Radious";
    cin>>n;
    obj.get(n);
    cir *ptr;
    ptr=&obj;
    ptr->disp(); //Second method
}
