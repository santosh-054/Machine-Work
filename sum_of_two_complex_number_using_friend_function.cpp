#include<iostream>
using namespace std;
class complex
{
	float a,b;
	public:
		void init(float x, float y)
		{
			a=x;
			b=y;
		}
		void disp()
		{
			cout<<a<<"+i"<<b<<endl;
			
		}
		friend complex sum(complex,complex);
};

complex sum(complex M, complex N)
{
	complex T;
	T.a=M.a+N.a;
	T.b=M.b+N.b;
	return T;
	
}
int main()
{
	complex ob1,ob2,ob3;
	float a,b;
	cout<<"Enter the first complex numbers(a,b)";
	cin>>a>>b;
	ob1.init(a,b);
	cout<<"Enter the second complex numbers(a,b)";
	cin>>a>>b;
	ob2.init(a,b);
	cout<<"Complex Numbers are";
	ob1.disp();
	ob2.disp();
	cout<<"Sum is:";
	ob3=sum(ob1,ob2);
	ob3.disp();
	return 0;
}
