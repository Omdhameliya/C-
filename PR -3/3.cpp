#include<iostream>
using namespace std;

class Time
{
    private:
          int sec,min,hour;
          
    public:
    	void getdata()
    	{
    	    cout << "Enter value in second :";
	    cin >> sec;
	
	    hour = sec/3600;
	    sec = sec%3600;
	    min = sec/60;
	    sec=sec%60;
     }
     void putdata()
     { 	
     cout << endl << "HH:MM:SS = " << hour << ":" << min << ":" << sec;
	}
};

int main()
{
    Time s;
	s.getdata();
	s.putdata();
}
