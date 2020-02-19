#include<iostream>
using namespace std;
class abc
{
public:
    int r;
    int s;

}obj;
int main()
{
    class abc *ptr;
    int c;
    ptr=&obj;
    ptr->r=2;
    c=obj.r*obj.r*3.14;
    cout<<"Area of Circle="<<c;
    return 0;

}
