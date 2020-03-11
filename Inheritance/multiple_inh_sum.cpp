#include<iostream> 
using namespace std;
class base1
{
 	public:
 	int x;
 	void getx()
    {
 	    cout << "enter value of x: "; cin >> x;
    }
};
class base2
{
 	public:
 	int y;
 	void gety()
 	{
 	    cout << "enter value of y: "; cin >> y;
 	}
};
class child : public base1, public base2
{
 	public:
 	void sum()
 	{
 	    cout << "Sum = " << x + y;
 	}
};

int main()
{
 	 child obj;
 	 obj.getx();
 	 obj.gety();
 	 obj.sum();
 	 return 0;
}
