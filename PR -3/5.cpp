#include<iostream>
using namespace std;

class Sum
{
	private  :
	        int a,b,c; 	
	
	public :
	   void getdata()
	   {
	   	cout << "Enter First Value : ";
	   	cin >> a;
	   	cout << "Enter Second Value : ";
	   	cin >> b;
	   	c = a + b;
	   }
	   void putdata()
	   {
	   	cout <<"Sum Is : "<< c ;
	   }
};

int main()
{
	Sum s;
	s.getdata();
	s.putdata();
}
