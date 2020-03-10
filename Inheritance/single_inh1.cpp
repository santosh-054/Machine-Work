#include<iostream>
using namespace std;

class base
{
	protected:
		int l;
	public:
		void getdata()
		{
			cout<<"Enter lenth of rectangle";
			cin>>l;
		}
};
class child:public base
	{
		private:
			int b;
		public:
			void scan()
			{
				cout<<"Enter the breadth of rectangle";
				cin>>b;
			}
		void area()
		{
			int a;
			a=l*b;
			cout<<"Area of Rectangle ="<<a;
		}
	};
int main()
{
	child obj;
	obj.getdata();
	obj.scan();
	obj.area();
}
