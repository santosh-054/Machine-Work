#include <iostream>  
using namespace std;  
int main() {  
  int a=0,b=1,c,i,num;    
  cout<<"Enter the number of elements: ";    
  cin>>num;    
  cout<<a<<endl<<b<<endl;   
  for(i=2;i<num;i++)  
  {    
    c=a+b;    
    cout<<c<<endl;    
    a=b;    
    b=c;    
  }    
  return 0;  
}  
