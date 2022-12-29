#include<iostream>
using namespace std;
class cmp {
	
	private :
		
		int comp_id;
	    string comp_name;
		int comp_staff_quantity;
		string comp_revenue;
		int comp_import_raw_diamonds;
		int comp_export_diamonds;
		string comp_ceo;
		
	public :
	
		void setdata()
		 {
	        
		cout << endl << endl;
		    cout << "COMPANY ID                   : " << comp_id << endl
			     << "COMPANY NAME                 : " << comp_name << endl
			     << "COMPANY STAFF QUANTITY       : " << comp_staff_quantity << endl
			     << "COMPANY REVENUE              : "<< comp_revenue << endl
			     << "COMPANY IMPORT RAW DIAMONDS  : "<< comp_import_raw_diamonds << endl
			     << "COMPANY EXPORT DIAMONDS      : " << comp_export_diamonds << endl 
      	      	 << "COMPANY CEO                  : " << comp_ceo << endl << endl;
		}
		
		void getdata()
		{	
		cout << "Enter The Company Id                 : ";
		cin  >> comp_id;
		cout << "Enter The Company Name               : ";
		cin  >> comp_name;
		cout << "Enter The Company Staff Quantity     : ";
		cin  >> comp_staff_quantity;
		cout << "Enter The Company Revenue (per year) : ";
		cin  >> comp_revenue;
		cout << "Enter The Company Import Raw Diamonds: ";
		cin  >> comp_import_raw_diamonds;
		cout << "Enter The Company Export Diamonds    : ";
		cin  >> comp_export_diamonds;
		cout << "Enter The Company CEO                :";
		cin  >> comp_ceo;
		}
};

int main() {
	cmp a;
	int n;

	
	cout << "Enter The Number Of Companies : ";
	cin  >> n;
	
	
	cout << endl << endl;
	
     for(int i=0; i<n; i++) 
	 {       
		a.getdata();
		a.setdata();		
	 }
			
	
}


