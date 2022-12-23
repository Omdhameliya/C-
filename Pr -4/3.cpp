#include<iostream>
using namespace std;

class Hotel {
	
	private :
		int id;
		string name;
		string type;
		int staff_size; 
		int room_size;
		int establish_year;
		string address;
		string rating_type;
		string website;
		
	public :
		
		void getData(int id,string name,string type,int staff_size,int room_size,int establish_year,string address,string rating_type,string website)
		{
			
			this->id = id;
			this->name = name;
			this->type = type;
			this->staff_size = staff_size;
			this->room_size = room_size;
			this->establish_year = establish_year;
			this->address = address;
			this->rating_type = rating_type;
			this->website = website;
		}
		
		void putData() {
			
			cout << "HOTEL ID            : " << id << endl
				<< "HOTEL NAME          : " << name << endl
				<< "HOTEL TYPE          : " << type << endl
				<< "HOTEL STAFF SIZE    : " << staff_size << endl
			   	<< "HOTEL ROOM SIZE     : " << room_size<< endl
				<< "HOTEL ESTABLISH YEAR: " << establish_year << endl
				<< "HOTEL ADDRESS       : " << address << endl
				<< "HOTEL RATING TYPE   : " << rating_type << endl
				<< "HOTEL WEBSITE       : " << website << endl;
		}
		
};

int main() {
	
	Hotel h1;
	
	h1.getData(192,"Taj","motel",1000,90,1999,"Mumbai","5star","Tajhotel.com");
	h1.putData();
}



