#include<iostream>
using namespace std;
class test
{
	int a,b;
	int gr();
	public:
		void init(int x, int y)
		{
			a=x;
			b=y;
		}
		void disp()
		{
			int R;
			R=gr();
			cout<<"Greatest Number is"<<R;
		}
			
};
int test::gr()
{
	if(a>b)
	return a;
	else
	return b;
}
int main()
{
	test ob1;
	ob1.init(10,20);
	ob1.disp();
}
