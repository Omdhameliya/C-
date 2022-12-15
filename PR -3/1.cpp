#include<iostream>
using namespace std;

class Distance {
	
	private :
		
		int feet1, feet2;
		int inch1, inch2;
		int i, d, f, e;
		
	public :
		
		void getdata() {
			
			cout << "Enter The First Feet :";
			cin  >> feet1;
			cout << "Enter The Second Feet :";
			cin  >> feet2;
			cout << "Enter The First Inch :";
			cin  >> inch1;
			cout << "Enter The Second Inch :";
			cin  >> inch2;
		}
		
		void putdata() {
			
			i = inch1 + inch2;
			d     = i/12;
			
			f     = feet1 + feet2 + d;
			
			e  =  i % 12;
			
			cout << endl;
			cout <<  "Total Feet : " << f << endl
				 << "Total Inch : " << e << endl;
		}
};

int main() {

	Distance d1;
	d1.getdata();
	d1.putdata();
}
