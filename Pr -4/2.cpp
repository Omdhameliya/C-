#include<iostream>
using namespace std;


class Steve {
			
	public :
		
		int rollNo;
		string name;
		int standard;
		int age;
		string school;

		
		void setData() {
			
			
			cout << "Enter The Student Roll No : ";
			cin  >> rollNo;
			cout << "Enter The Student Name : ";
			cin  >> name;
			cout << "Enter The Student Standard : ";
			cin  >> standard;
			cout << "Enter The Student Age : ";
			cin  >> age;
			cout << "Enter The Student School name : ";
			cin  >> school;
		}
		 
		 
		
};

class Thor {
	
	public :
		
		
		void getData() {
			
			Steve s1;
			s1.setData();
			
			cout << "STIUDENT ROLL NO    : "<< s1.rollNo  << endl
				<< "STIUDENT NAME       : " << s1.name <<endl
				<< "STIUDENT STANDARD   : " << s1.standard  << endl
				<< "STIUDENT AGE        : " << s1.age  << endl
				<< "STIUDENT SCHOOL NAME: " << s1.school << endl;
		
		}
		
};
int main() {
	
	
	Thor t1;
	
 	t1.getData();
 	
}

