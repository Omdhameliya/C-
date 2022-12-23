#include<iostream>
using namespace std;

class Employee {
	
	private :
		
		int id;
		string name;
		string role;
		double salary;
		string exprience;
		string address;
		string email;
		string contactNo;
		
	public :
		
		



void getData() {

     		cout << "Enter The Employee Id : ";
			cin  >> id;
			cout << "Enter The Employee Name : ";
			cin  >> name;
			cout << "Enter The Employee Role : ";
			cin  >> role;
			cout << "Enter The Employee Salary : ";
			cin  >> salary;
			cout << "Enter The Employee Exprience : ";
			cin  >> exprience;
			cout << "Enter The Employee Address : ";
			cin  >> address;
			cout << "Enter The Employee Email : ";
			cin  >> email;
			cout << "Enter The Employee Contact No : ";
			cin  >> contactNo; 
		}
		
		void putData(int i) {
			
			cout << "Employee No : " << i << "/" << "5" << endl;
			cout << "EMPLOYEE ID         : " << id << endl
				<< "EMPLOYEE NAME       : " << name << endl
				<< "EMPLOYEE ROLE       : " << role << endl
				<< "EMPLOYEE SALARY     : " << salary << endl
			     << "EMPLOYEE EXPRIENCE  : " << exprience << endl
			     << "EMPLOYEE ADDRESS    : " << address << endl
				<< "EMPLOYEE EMAIL      : " << email << endl
				<< "EMPLOYEE CONATCT NO : " << contactNo << endl << endl << endl;
		}
};

int main() {
	int i;
	Employee e1[5];
	
	for(i=0; i<5; i++)
	{	
		
	e1[i].getData();
		
	}
	
	system("cls");
		
	for(i=0; i<5; i++)
	{	
		
	e1[i].putData(i+1);
		
	}	

}

