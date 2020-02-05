#include<iostream>
using namespace std;
class abc
{
    public:
    int a;
    float b;
}obj;

int main()
{
    abc *ptr;
    ptr=&obj;
    ptr->a=2;
    (*ptr).b=2.5;
    cout<<obj.a<<"  "<<obj.b;
    return 0;

}
