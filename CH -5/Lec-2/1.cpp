#include<iostream>
using namespace std;

ostream &t (ostream & output)
{
	return output <<"\t";
}

class Hotel {
	
	private :
		
		int id;
		string name;
		string type; 
		string rating; 
		string location; 
		int establish_year;
		int staff_quantity;
		static int room_quantity;
		
	public :
		
		void getData(int i , int n) {
			
			system("cls");
			cout << " Hotel  " << i << "/" << n << endl<<endl;
			cout << "Enter The Hotel Id\t: ";
			cin  >> id;
			cout << "Enter The Hotel Name\t: ";
			cin  >> name;
			cout << "Enter The Hotel Type (like hotel or motel)\t: ";
			cin  >> type;
			cout << "Enter The Hotel Rating (like 1 Star, 2 Start, ..., 7 Star)\t: ";
			cin  >> rating;
			cout << "Enter The Hotel Establish Year\t: ";
			cin  >> establish_year;
			cout << "Enter The Hotel Staff Quantity\t: ";
			cin  >> staff_quantity;
			cout << "Enter The Hotel Location\t: ";
			cin  >> location;
		}
		
		void tabelView() {
			
			
			
			cout << id << t << name << t << type << t << rating << t << establish_year << t << staff_quantity << t << room_quantity << t << location << endl;
		}

		static void Header() {
			
			system("cls");
			
		cout << endl << "Id" << t << "Name" << t << "Type" << t << "Rating" << t << "Year" << t << "Staff" << t << "Rooms" << t << "Location" << endl << "======= ======= ======= ======= ======= ======= ======= ======= " <<endl ;
		}
};

int Hotel::room_quantity = 10;

int main() {
	
	int n;
	
	cout << "Enter The Number Of Hotel : ";
	cin  >> n;
	
	Hotel H[n];
	
	for(int i=0; i<n; i++) 	H[i].getData(i+1,n);
	
	Hotel::Header();
	
	for(int i=0; i<n; i++) 	H[i].tabelView();
}

