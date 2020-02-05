#include<iostream>
using namespace std;
class abc
{
    public:
    void disp()
    {
        cout<<"ABC \n";
    }
};

int main()
{
    abc OBJ;
    void (abc::*p)(void)=&abc::disp;
    (OBJ.*p)();
    return 0;

}

