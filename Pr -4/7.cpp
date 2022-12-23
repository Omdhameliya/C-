#include<iostream>
using namespace std;

class Om {
	
	private :
		
		string Name;
		string Mobile_No;
		
	public :
	
		Om(string Name, string Mobile_No) {
			
			this->Name = Name;
			this->Mobile_No = Mobile_No;
		}		
		
		void putData() {
			
			cout << "Name ID \t: " << Name << endl
				 << "Mobile_No \t: " << Mobile_No  << endl;	
		}
};


int main() {
	
	Om d("omdhameliya54@gmail.com", "#om007");
	
	d.putData();

}