#include<iostream>
using namespace std;

class cir
{
    friend int main();
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
void cir::cal()
{
    ar=3.14*r*r;
}
int main()
{
    void(cir::*ptr)(void)=&cir::disp;
    cir obj;
    int cir::*pr=&cir::r;
    obj.*pr=5;
    (obj.*ptr)();
    return 0;
}

