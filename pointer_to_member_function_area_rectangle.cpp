#include<iostream>
using namespace std;
class cir
{
    friend int main();
    int l,b;
    float ar;
    void cal();
public:
    void get(int x, int y)
    {
        l=x;
        b=y;
    }
    void disp()
    {
        cal();
        cout<<"Area="<<ar;
    }
};
void cir::cal()
{
    ar=l*b;
}
int main()
{
    void(cir::*ptr)(void)=&cir::disp;
    cir obj;
    obj.get(5,5);
    (obj.*ptr)();
    return 0;
}
