#include<iostream>
using namespace std;

class Math
{
	protected :
		
		int a,b,c;
		double cir,tri,rec;
		
	virtual void calculate(int a,char b,double c) = 0;
	
	double circle(int a)
	{
		cir = 3.14 *a*a;
		return cir;
	}
	double triangle(int a,int b)
	{
		tri = (a * b) / 2;
		return tri;
	}
	int rectangle(int a,int b)
	{
		rec = a*b;
		return rec;
	}
};

class Matic : public Math
{
	public :
		
		int n;
		
		void calculate(int a,char b,double c)
		{
			cout << "Calculate Is Access..." << endl
				 << "-------------------------------" << endl;
		
		
		
		
			cout <<"Enter 1 For Calculate Area Of Circle" << endl ;
			cout <<"Enter 2 For Calculate Area Of Triangle" << endl ;
			cout <<"Enter 3 For Calculate Area Of Rectangle" << endl ;
			cout <<"-----------------------------------------" <<endl;
			
			cout << "Enter Number : ";
			cin  >> n;
			
			switch(n)
			{
				case 1 :
				          cout << endl << "Enter Value : ";
				          cin  >> a;
				          circle(a);
				          
				          cout << "Area Of Circle Is : " << cir << endl;
				          break;
				case 2 :
				          cout << "Enter Value : ";
				          cin  >> a;
				          cout << "Enter Value : ";
				          cin  >> b;
				          triangle(a,b);
				          
				          cout << "Area Of triangle Is : " << tri << endl;
				          break;
				case 3 :
				          cout << "Enter Value : ";
				          cin  >> a;
				          cout << "Enter Value : ";
				          cin  >> b;
				          rectangle(a,b);
				          
				          cout << "Area Of rectangle Is : " << rec << endl;
				          break;			          
			}
		}
};

int main()
{
	Matic a;
	a.calculate(1,'a',3.14);
}












