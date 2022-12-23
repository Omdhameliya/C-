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
			
			cout << "Name Is      : " << Name << endl;
			cout << "Mobile No Is : " << Mobile_No << endl << "-------------------------------"<< endl;
		}
};

int main() {
	
	Om g("Dhruv Navadiya","9876543210");
	Om g1("Om Dhameliya","1234567890");
	Om g2("Het Magukiya","5647389201");
	Om g3 = g;
	
	g.putData();
	g1.putData();
	g2.putData();
	g3.putData();
	
}
