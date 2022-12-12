#include<iostream>
using namespace std;

class Employee {
	
	private :
		
		int id;
		string name;
		string role;
		int age;
		int salary;
		double experience;
		string city;
		string company;
		
		
	public :
		
		void getdata(){
			
			cout << "Enter The Employee Id :";
			cin  >> id;
			cout << "Enter The Employee Name :";
			cin  >> name;
			cout << "Enter The Employee Role :";
			cin  >> role;
			cout << "Enter The Employee Age :";
			cin  >> age;
			cout << "Enter The Employee Salary :";
			cin  >> salary;
			cout << "Enter The Employee Experience :";
			cin  >> experience;
			cout << "Enter The Employee City :";
			cin  >> city;
			cout << "Enter The Employee Company :";
			cin  >> company;
			
        }
        
        void putdata() {
        	
        	cout << "Id : \t\t"<< id << endl
		     << "Name : \t\t"<< name << endl
		     << "Role : \t\t"<< role << endl
		     << "Age : \t\t"<< age << endl
		     << "Salary : \t"<< salary << endl
		     << "Experience : \t"<< experience << endl
		     << "City : \t\t"<< city << endl
		     << "Company : \t"<< company << endl;
		}
		
};




int main() {

	Employee e1,e2,e3,e4,e5;

     e1.getdata();
     e2.getdata();
     e3.getdata();
     e4.getdata();
     e5.getdata();
     
 
	
	e1.putdata();
	e2.putdata();
	e3.putdata();
	e4.putdata();
	e5.putdata();

}

