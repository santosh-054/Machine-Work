#include<iostream>
using namespace std;
class TEST
{
    int a,b,c;
    int avg(void);
public:
    void init(int x, int y, int z)
    {
        a=x;
        b=y;
        c=z;
    }
    void disp (void)
    {
        int R;
        R=avg();
        cout<<"Average = "<<R;;
    }
};
int TEST:: avg(void)
{
    int d;
    d=(a+b+c)/3;
    return(d);
}
int main()
{
    TEST OBJ;
    OBJ.init(10,20,30);
    OBJ.disp();
    return 0;
}
