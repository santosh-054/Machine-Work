#include<iostream>
using namespace std;
class Complex
{
    int real,imag;
public:
    Complex()
   {

   }
    Complex(int r)
    {
    real=r;
    imag=r;
   }
   Complex(int r,int i)
   {
   real=r;
   imag=i;
   }
   Complex(Complex &c)
   {
    real=c.real;
    imag=c.imag;
   }
   void print()
   {
   cout<<"\n The sum of two complex number is "<<real<<"+"<<imag<<"i.";
   }
   friend Complex sum(Complex,Complex);
};
Complex sum(Complex obj1,Complex obj2)
{
    Complex obj3;
    obj3.real=obj1.real+obj2.real;
    obj3.imag=obj1.imag+obj2.imag;
    return obj3;
}
int main()
{
    int a,b,c;
    Complex c1;
    cout<<"Enter the equal value for real and imag part are same:\n";
    cin>>a;
    Complex c2(a);
    cout<<"Enter the real and imag part of complex:\n";
    cin>>b>>c;
    Complex c3(b,c);
    Complex c4=sum(c2,c3);
    c4.print();
    return 0;
 }
