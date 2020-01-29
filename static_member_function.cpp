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
    static void PR()
    {
        cout<<"\n"<<y<<endl;
    }



};
int A::y;
int main()
{
    A OB1;
    A OB2;
    OB1.get(100);
    OB1.get(200);
    A::PR();
    return 0;

}
