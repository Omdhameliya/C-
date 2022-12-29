#include<iostream>
using namespace std;

class X {
	
	protected :
		
		int a;
		int b;
		int c;
		int a2,b2,c2;
		int sum;
		
};

class Y : public X {
	
	public :
		
		void setData(){
			
			cout << "Enter The a :";
			cin  >> a;
			cout << "Enter The b :";
			cin  >> b;
			cout << "Enter The c :";
			cin  >> c;
		}
		
	   void getData() {
	   	
	   	a2= a*a*a;
	   	b2= b*b*b;
	   	c2= c*c*c;
	   	sum = a2+b2+c2;
	   	cout << endl << "\t a : " << a2 << endl
	   	     << "\t b : " << b2 << endl
	   	     << "\t c : " << c2 << endl;
	   	     cout << endl;
	   	     cout << "Sum Is : "<< sum << endl;
	   }
};

int main() {
	
	Y y1;
	
	y1.setData();
	y1.getData();
}