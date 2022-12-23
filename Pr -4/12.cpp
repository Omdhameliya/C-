#include<iostream>
using namespace std;

class Student {
	
	private :
		
		int stu_id;
		string stu_name;
		int stu_age;
		string stu_course;
		string stu_city;
		string stu_college;
		
		
	public :

		void setData(int i,int n){
			
        	cout << "Enter Student Detail " << i << "/" << n << endl << endl;
			
			cout << "\tEnter The Student Id :";
			cin  >> stu_id;
			cout << "\tEnter The Student Name :";
			cin  >> stu_name;
			cout << "\tEnter The Student Age :";
			cin  >> stu_age;
			cout << "\tEnter The Student Course :";
			cin  >> stu_course;
			cout << "\tEnter The Student City :";
			cin  >> stu_city;
			cout << "\tEnter The Student College Name :";
			cin  >> stu_college;
			
        }
        
        void Header() {
        	
        	
        	cout << endl << endl << "Id\tName\tAge\tCourse\tCity\tCollege\n-------\t-------\t-------\t-------\t-------\t-------" << endl; 
		}
		
		void getData(){
			
		
			cout << stu_id << "\t"<< stu_name<< "\t " << stu_age << "\t " << stu_course << "\t" << stu_city << "\t" << stu_college << endl;
		}
};
int main() {
    int n,i;
	
	cout << "Entre The Number Of Student :";
	cin  >> n;
	
	Student s[n];
	
	for(i=0; i<n; i++)  s[i].setData(i+1,n);
	
	s[0].Header();
	
	for(int i=0; i<n; i++)  s[i].getData();
}

