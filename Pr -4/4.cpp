#include<iostream>
using namespace std;

class HighSchool {
	
	private :
	
		int id;
		string stu_name;
		int stu_roll_no;
		int stu_standard;
		int stu_age;
		string stu_contact;
		static string stu_edu_institute_name;
		string stu_address;
		
	public :
		
		void getDataH() {
			
			
			cout << "Enter The Student Id : ";
			cin  >> id;
			cout << "Enter The Student Name : ";
			cin  >> stu_name;
			cout << "Enter The Student Roll No : ";
			cin  >> stu_roll_no;
			cout << "Enter The Student Standard : ";
			cin  >> stu_standard;
			cout << "Enter The Student Age : ";
			cin  >> stu_age;
			cout << "Enter The Student Contact No : ";
			cin  >> stu_contact;
			cout << "Enter The Student Address : ";
			cin  >> stu_address;
			
		}
		
		void putDataH() {
			
			cout << endl;
			cout << "\t\t STUDENT ID                      : " << id << endl
				<< "\t\t STUDENT NAME                    : " << stu_name<< endl
				<< "\t\t STUDENT ROLL NO                 : " << stu_roll_no << endl
				<< "\t\t STUDENT STANDARD                : " << stu_standard << endl
				<< "\t\t STUDENT AGE                     : " << stu_age << endl
				<< "\t\t STUDENT CONTACT NO              : " << stu_contact << endl
			     << "\t\t STUDENT EDUCTION INSTITUTE NAME : " << stu_edu_institute_name << endl
				<< "\t\t STUDENT ADDRESS                 : " << stu_address << endl;
		}
		
};

class College {
	
	private :
	
		int id;
		string stu_name;
		int stu_roll_no;
		string stu_standard;
		int stu_age;
		string stu_contact;
		static string stu_edu_institute_name;
		string stu_address;
		
	public :
		
		void getDataC() {
			
			cout << "Enter The Student Id : ";
			cin  >> id;
			cout << "Enter The Student Name : ";
			cin  >> stu_name;
			cout << "Enter The Student Roll No : ";
			cin  >> stu_roll_no;
			cout << "Enter The Student Standard : ";
			cin  >> stu_standard;
			cout << "Enter The Student Age : ";
			cin  >> stu_age;
			cout << "Enter The Student Contact No : ";
			cin  >> stu_contact;
			cout << "Enter The Student Address : ";
			cin  >> stu_address;
			
		}
		
		void putDataC() {
			
			cout << endl;
			cout << "\t\t STUDENT ID                     : " << id << endl
				<< "\t\t STUDENT NAME                   : " << stu_name<< endl
				<< "\t\t STUDENT ROLL NO                : " << stu_roll_no << endl
				<< "\t\t STUDENT STANDARD               : " << stu_standard << endl
				<< "\t\t STUDENT AGE                    : " << stu_age << endl
				<< "\t\t STUDENT CONTACT NO             : " << stu_contact << endl
			     << "\t\t STUDENT EDUCTION INSTITUTE NAME: " << stu_edu_institute_name << endl
				<< "\t\t STUDENT ADDRESS                : " << stu_address << endl;
			
		}
		
};

string HighSchool :: stu_edu_institute_name = "J.B. And Karp Vidya Sankul School";
string College :: stu_edu_institute_name = "Bhagavan Mahaveer University";

int main() {
	
	HighSchool h1;
	College c1;
	
	h1.getDataH();
	h1.putDataH();
	
	c1.getDataC();
	c1.putDataC();
}

