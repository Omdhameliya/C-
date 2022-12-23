#include<iostream>
using namespace std;
		
class Om {
	
	private :
		
		string Name;
		string Mobile_No;
		
	public :
		
		Om() {
			
			cout <<"\t    Welcome" << endl << "-------------------------------"<<endl;
		}
		
		Om(Om &m) {
			
			Name = m.Name;
			Mobile_No = m.Mobile_No;
		}
	
		Om(string Name, string Mobile_No) {
			
			this->Name = Name;
			this->Mobile_No = Mobile_No;
		}		
		
		void putData() {
			
			cout << "Name      \t: " << Name << endl
				 << "Mobile_No \t: " << Mobile_No << endl << endl;	
		}
};

int main() {
	
	Om m;
	Om m0("Om Dhameliya","1234567890");
	Om m1("Dhruv Navadiya","9876543210");
	Om m2(m0);
	
	
	m0.putData();
	m1.putData();
	m2.putData();
}