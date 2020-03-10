#include<iostream>
using namespace std;
class student
{
	private:
		char name[20];
		int roll;
		char gender[10];
		int age;
	public:
	void getdata();
	void putdata();
		
};

class details:public student
{
	private:
      char clg[100];
      char level[20];
  public:
      void getst();
      void putst();
		
};

void student:: getdata()
{
			cout<<"Enter the name of student";
			cin>>name;
			cout<<"Enter Roll No";
			cin>>roll;
			cout<<"Gender:";
			cin>>gender;
			cout<<"Enter the age of student";
			cin>>age;
			
}

void student:: putdata()
{
			cout<<"name of student"<<name<<endl;
			cout<<"Roll No"<<roll<<endl;
			cout<<"Gender:"<<gender<<endl;
			cout<<"Age of student:"<<age<<endl;
	
}

void details::getst()
{
    student::getdata();
    cout<<"College: ";
    cin>>clg;
    cout<<"Level: ";
    cin>>level;
}

void details::putst()
{
    student::putdata();
    cout<<"College    : "<<clg<<endl;
    cout<<"Level      : "<<level<<endl;
}
int main()
{
	details data;
	data.getst();
	data.putst();
	return 0;
}
