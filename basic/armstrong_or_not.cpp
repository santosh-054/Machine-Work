#include <iostream>  
using namespace std;  
int main()  
{  
  int n,rem,sum=0,temp;    
  cout<<"Enter the Number=  ";    
  cin>>n;    
  temp=n;    
  while(n>0)    
  {    
    rem=n%10;    
    sum=sum+(rem*rem*rem);    
    n=n/10;    
  }    
  if(temp==sum)    
    cout<<"Armstrong Number."<<endl;    
  else    
    cout<<"Not Armstrong Number."<<endl;   
  return 0;  
}  
