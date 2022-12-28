#include<iostream>
using namespace std;

class Customer {
	
	private :
		
		int id;
		string name;
		int age;
		string tele;
		string mo;
		string city;
		string sim;
		
		
	public :
		
		void getdata(int i){
			
			system("cls");
			
			cout << "Customer No : " << i << "/ 5" << endl;
			
			cout << "Enter The Id        :";
			cin  >> id;
			cout << "Enter The Name      :";
			cin  >> name;
			cout << "Enter The Age       :";
			cin  >> age;
			cout << "Enter telecome brand:";
			cin  >> tele;
			cout << "Enter Mobile Number :";
			cin  >> mo;
			cout << "Enter The City      :";
			cin  >> city;
			cout << "Enter Sim Validity  :";
			cin  >> sim;
			
			
        }
        
        void header() {
     	system("cls");
        	cout << endl<<"id\tname\tage\tbrand\tcity\tmo.no.\t\tvalidity\n------- ------- ------- ------- ------- --------------  -------" << endl; 
		}
		
		void putdata(){
		     
			cout  << id << "\t" << name << "\t" << age << "\t" << tele << "\t" << city << "\t" << mo << "\t" << sim << "\t" << endl ;
	    }
};




int main() {

	Customer c[5];
	
	for(int i=0; i<5; i++)  c[i].getdata(i+1);
	
	c[0].header();
	
	for(int i=0; i<5; i++)  c[i].putdata();

	
}

