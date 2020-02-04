#include<iostream>
using namespace std;
class employee
{
	char name[30];
	float age;
	public:
		void getdata(void);
		void putdata(void);
};
void employee::getdata()
{

	cout<<"Enter the name";
	cin>>name;
	cout<<"\n Enter the agea";
	cin>>age;	
}
void employee::putdata()
{
	cout<<"Name: "<<name<<endl;
	cout<<"Age:"<<age<<endl;
		
}
const int size=3;
int main()
{
	employee manager[size];
	employee accountant[size];
	for(int i=0;i<=size;i++)
	{
		cout<<"Enter details of manager"<<i+1<<endl;
		manager[i].getdata();
		
	}
	for(int i=0;i<=size;i++)
	{
		cout<<"manager"<<i+1<<endl;
		manager[i].putdata();
		
	}
	
	
	for(int i=0;i<=size;i++)
	{
		cout<<"Enter details of accountant"<<i+1<<endl;
		accountant[i].getdata();
		
	}
	for(int i=0;i<=size;i++)
	{
		cout<<"accountant"<<i+1<<endl;
		accountant[i].putdata();
		
	}
}
