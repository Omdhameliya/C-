#include<iostream>
using namespace std;

class Time2;
class Time {
	
	private :
		
		int H;
		int M;
		int S;
	
	public :
		
		void getData() {
			
			cout << "Enter The Hour For First Time\t\t: ";
			cin  >> H;
			cout << "Enter The Minutes For First Time\t: ";
			cin  >> M;
			cout << "Enter The Seconds For First Time\t: ";
			cin  >> S;
			
		}
		
		friend void myTime(Time,Time2);
};

class Time2 {
	
	private :
		
		int H;
		int M;
		int S;
	
	public :
		
		void getData() {
			
			cout << endl << "Enter The Hour For Second Time\t\t: ";
			cin  >> H;
			cout << "Enter The Minutes For Second Time\t: ";
			cin  >> M;
			cout << "Enter The Seconds For Second Time\t: ";
			cin  >> S;
		}
		
		friend void myTime(Time , Time2);
};

void myTime(Time T, Time2 t) {
	
		int s3,m3,h3;
		    s3 = T.S + t.S;
		    m3 = T.M + t.M + (s3/60); 
		    h3 = T.H + t.H + (m3/60);
		    s3 = s3%60;
		    m3 = m3%60;
		    
  		  cout << endl << "Total Time = " << h3  << ":" << m3 << ":" << s3;
	
}

int main() {
	
	Time T;
	Time2 t;
	
	T.getData();
	t.getData();
	
	myTime(T , t);
}
