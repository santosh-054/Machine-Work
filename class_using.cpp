#include<iostream>
using namespace std;
class person
{
	int age;
	char name[30];
	public:
			void getdata();
			void display();
};
void person :: getdata()
{
	cout<<"Enter your Name \n";
	cin>>name;
	cout<<"Enter Age \n";
	cin>>age;
}
void person :: display()
{
	cout<<"Name:"<<name<<"\n";
	cout<<"Your Age:"<<age;
}
int main()
{
	person p;
	p.getdata();
	p.display();
	return 0;
}
