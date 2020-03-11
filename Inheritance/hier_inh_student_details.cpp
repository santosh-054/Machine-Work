#include<iostream>
using namespace std;
class student
{
	protected:
		char name[20];
		int roll;
		char gender[10];
		int age;
		char clg[100];
      	char level[20];
	public:
	void getper();
	void getedu();
		
};

class per:public student
{
      
  public:
      void personal();		
};

class edu:public student
{
	public:
			void educational();
};

void student:: getper()
{
			cout<<"Enter the name of student";
			cin>>name;
			
			cout<<"Gender:";
			cin>>gender;
			cout<<"Enter the age of student";
			cin>>age;
    		    		
			
}



void student:: getedu()
{
			cout<<"Enter Roll No";
			cin>>roll;
			cout<<"College: ";
    		cin>>clg;
    		fflush(stdin);
    		cout<<"Level: ";
    		cin>>level;
			
}

void per:: personal()
{
			getper();
			cout<<"Personal Details::"<<endl;
			fflush(stdin);
			cout<<"name of student"<<name<<endl;
			cout<<"Gender:"<<gender<<endl;
			cout<<"Age of student:"<<age<<endl;	
}

void edu:: educational()
{
	getedu();
	cout<<"Educational Details::"<<endl;
	fflush(stdin);
	cout<<"College    : "<<clg<<endl;
    cout<<"Level      : "<<level<<endl;
    cout<<"Roll No    :"<<roll<<endl;
}
int main()
{
	per data1;
	edu data2;
//	data.getdata();
	data1.personal();
	data2.educational();
	return 0;
}
