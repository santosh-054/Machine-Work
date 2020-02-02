#include<iostream>
using namespace std;
int main()
{
	int *arr;
	int size;
	cout<<"Enter the size of array";
	cin>>size;
	cout<<"Creating an array in size of"<<size;
	arr=new int[size];
	cout<<"\n Dynamically allocation of memory for arr is successful";
	delete arr;
	return 0;
}
