#include<iostream>
using namespace std;

class India {
	
	private :
		
		string states;
		string district;
		string capitalCity;
		static string country;
	
	public :
		
		void getData() {
			
			cout << "Enter The States : ";
			cin  >> states;
			cout << "Enter The District : ";
			cin  >> district;
			cout << "Enter The Capital City : ";
			cin  >> capitalCity;
		}
		
		static void Header() {
			                cout << "------------------------------------------------------------"<<endl;
			cout << "STATES\t\tDISTRICT\tCAPITAL_CITY\tCOUNTRY\n" 
			                     << "------------------------------------------------------------\n";
		}
		
		void putData() {
			
			cout << states << "\t\t" << district << "\t\t" << capitalCity << "\t" << country << "\n";
		}
};

string India :: country = "India";

int main() {
	
	int n;
	
	cout << "Enter The Number Of Country Data : ";
	cin  >> n;
	
	India d[n];
	
	for(int i=0; i<n; i++)	 d[i].getData();
	
	India :: Header();
	
	for(int i=0; i<n; i++) 	d[i].putData();
	
	
}
