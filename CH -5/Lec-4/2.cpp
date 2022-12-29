#include<iostream>
using namespace std;

class Cafe {
	
	private :
		
		int n;
		int cafe_id;
		string cafe_name;
		string cafe_type;
		string cafe_rating;
		string cafe_location;
		int cafe_establish_year;
		int cafe_staff_quantity; 
		
	public :
		
		Cafe() {
			
			cout << "Enter The Number Of Fast Food Cafe : ";
			cin  >> n;
			
			for(int i=0; i<n; i++) {
				
				cout << "\n\nEnter The Cafe Id : ";
				cin  >> cafe_id;
				cout << "Enter The Cafe Name : ";
				cin  >> cafe_name;
				cout << "Enter The Cafe Type (like rooftop or normal) : ";
				cin  >> cafe_type;
				cout << "Enter The Cafe Rating (like 1 Star, 2 Start, ..., 5 Star) : ";
				cin  >> cafe_rating;
				cout << "Enter The Cafe Location (city  name): ";
				cin  >> cafe_location;
				cout << "Enter The Cafe Establish Year : ";
				cin  >> cafe_establish_year;
				cout << "Enter The Cafe Staff Quantity : ";
				cin  >> cafe_staff_quantity;
				
				cout << endl << endl;
				cout << "CAFE ID             : " << cafe_id << endl
				     << "CAFE NAME           : " << cafe_name << endl
				     << "CAFE TYPE           : " << cafe_type << endl		    
					 << "CAFE RATING         : " << cafe_rating << endl
				  	 << "CAFE LOCATION       : "<< cafe_location << endl
				  	 << "CAFE ESTABLISH YEAR : " << cafe_establish_year << endl
				  	 << "CAFE STAFF QUANTITY : " << cafe_staff_quantity << endl << endl;
			}
		}
		
		
};

int main() {
	
	Cafe c;
	
}
