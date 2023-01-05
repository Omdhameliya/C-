#include<iostream>
using namespace std;

class Admin
{
	protected :
	string company_name;
	int manager_salary;
	int employee_salary;
	int total_staff;
	long long int total_annual_revenue;
	string can_terminate;
	
	Admin()
	{
	company_name = "Relince";
	manager_salary = 100000;
	employee_salary = 30000;
	total_staff = 500;
	total_annual_revenue = 100000000;
	}
	
	void myAccess()
	{
		cout << "-----------------------------" << endl;
		cout << "Admin Access..." << endl;
		cout << "-----------------------------" << endl;
		cout << "Company Name    : "<< company_name << endl;
		cout << "Manager salary  : "<< manager_salary << endl;
		cout << "Employee Salary : "<< employee_salary << endl;
		cout << "total Staff     : "<< total_staff << endl;
		cout << "Annual Revenue  : "<< total_annual_revenue << endl << endl;
		cout << "-----------------------------" << endl;
	}
	
};

class Manager : protected Admin
{
	protected :
	void myAccess()
	{	
	
	Admin::myAccess();
		cout << "Manager Access..." << endl;
		cout << "-----------------------------" << endl;
		cout << "Company Name    : "<< company_name << endl;
		cout << "Manager salary  : "<< manager_salary << endl;
		cout << "Employee Salary : "<< employee_salary << endl;
		cout << "total Staff     : "<< total_staff << endl << endl;
		cout << "-----------------------------" << endl;
	}
};

class Employee : Manager
{
	public :
	void myAccess()
	{	
	Manager::myAccess();
		cout << "Employee Access..." << endl;
		cout << "-----------------------------" << endl;
		cout << "Company Name    : "<< company_name << endl;
		cout << "Employee Salary : "<< employee_salary << endl << endl;
		cout << "-----------------------------" << endl;

	}
};

int main()
{
	Employee e;
	
	e.myAccess();
}


























































