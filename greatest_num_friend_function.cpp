#include<iostream>
using namespace std;
class test
{
	int a,b;
	public:
		void get(int,int);
		void disp()
		{
			cout<<"A="<<a<<endl<<"B="<<b<<endl;
		}
		friend int big(test);
};
void test::get(int x,int y)
{
	a=x;
	b=y;
}
int big(test M)
{
	int t;
	if(M.a>M.b)
	t=M.a;
	else
	t=M.b;
	return t;
}
int main()
{
	test obj;
	obj.get(10,20);
	obj.disp();
	cout<<"Greatest Number="<<big(obj);
	
}
