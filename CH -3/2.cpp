#include<iostream>
using namespace std;

class Cars {
	
	private :
		
		int id;
		string companyname;
		string color;
		string model;
		int releaseyear;
				
	public :
		
		void getdata(){
		
			cout << "Enter The Car Id :";
			cin  >> id;
			cout << "Enter The Car Company Name :";
			cin  >> companyname;
			cout << "Enter The Car Color :";
			cin  >> color;
			cout << "Enter The Car Modal :";
			cin  >> model;
			cout << "Enter The Car Ralease Year :";
			cin  >> releaseyear;
			
        }
		
		void putdata(){
			
			cout << "Car_ID\t\t\t: " << id << endl
				<< "Car_Company_Name\t: " << companyname << endl
				<< "Car_Color\t\t: " << color << endl
				<< "Car_Modal\t\t: " << model << endl
				<< "Car_Release_Year\t: " << releaseyear << endl;
	
		}
};



int main() {

	Cars c1,c2,c3,c4,c5;

	c1.getdata();
	c2.getdata();
	c3.getdata();
	c4.getdata();
	c1.putdata();
	c2.putdata();
	c3.putdata();
	c4.putdata();
}

