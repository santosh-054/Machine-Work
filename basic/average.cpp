#include<iostream>
using namespace std;
int main()
{
  int a[100],i,n,sum=0;
  float avg=0.0;
  cout<<"\n Enter the size of array";
  cin>>n;
  cout<<"\n Enter the array elements";
  for(i=0;i<n;i++)
  {
  	cin>>a[i];
  }  
  for(i=0;i<n;i++)
  {
    sum=sum+a[i];
  }
  avg=sum/n;
  cout<<"Average="<<avg<<endl;
  return 0;
  }
