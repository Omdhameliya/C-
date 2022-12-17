#include<iostream>
using namespace std;

class Student {
	
	private :
		
		int stu_id;
		string stu_name;
		int stu_age;
		string stu_course;
		string stu_email;
		string stu_city;
		string stu_college;
		
		
	public :
		
		void getdata(int i){
			
			system("cls");
			
			cout << "Employee No : " << i << "/ 5" << endl;
			
			cout << "Enter The Student Id    :";
			cin  >> stu_id;
			cout << "Enter The Student Name  :";
			cin  >> stu_name;
			cout << "Enter The Student Age   :";
			cin  >> stu_age;
			cout << "Enter The Student Course:";
			cin  >> stu_course;
			cout << "Enter The Student Email :";
			cin  >> stu_email;
			cout << "Enter The Student City  :";
			cin  >> stu_city;
			cout << "Enter The  College Name :";
			cin  >> stu_college;
			
			
        }
        
        void header() {
     	system("cls");
        	cout << endl<<"Id\tName\tAge\tCourse\tCity\tCollege\tEmail\n------- ------- ------- ------- ------- ------- -------" << endl; 
		}
		
		void putdata(){
		     
			cout  << stu_id << "\t"<< stu_name << "\t " 
			      << stu_age << "\t " << stu_course 
				   << "\t" << stu_city << "\t" << stu_college 
				   << "\t" << stu_email << endl;
	    }
};




int main() {

	Student s[5];
	
	for(int i=0; i<5; i++)  s[i].getdata(i+1);
	
	s[0].header();
	
	for(int i=0; i<5; i++)  s[i].putdata();

	
}

