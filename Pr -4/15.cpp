#include<iostream>
using namespace std;

class Dhruv;

class OM {
	
	private :
		int a;
		
	public :
		
		void setData() {
			
			cout << "Enter The A : ";
			cin  >> a;
		}
		
		friend void Het(OM , Dhruv);
};


class Dhruv {
	
	private :
		int b;
		
	public :
		
		void setData() {
			
			cout << "Enter The B : ";
			cin  >> b;
		}
		
		friend void Het(OM , Dhruv);
};

void Het(OM h, Dhruv H) {
	
	cout << endl <<"Addition Of A And B Is : " << h.a + H.b << endl;
}

int main() {
	
	OM h1;
	Dhruv   H1;
	
	
	h1.setData();
	H1.setData();
	
	Het(h1,H1);
}
