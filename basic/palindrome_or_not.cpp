#include <iostream>  
using namespace std;  
int main()  
{  
  int n,rem,sum=0,temp;    
  cout<<"Enter the Number=";    
  cin>>n;    
 temp=n;    
 while(n>0)    
{    
 rem=n%10;    
 sum=(sum*10)+rem;    
 n=n/10;    
}    
if(temp==sum)    
cout<<"Number is Palindrome.";    
else    
cout<<"Number is not Palindrome.";   
  return 0;  
}  
