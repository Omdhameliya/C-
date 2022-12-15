#include<iostream> 
using namespace std;

class Time
{
    private :
           int h1,h2,h3;
           int m1,m2,m3;
           int s1,s2,s3;
	
	public :
		void getdata()
		{	
		    cout << "Enter Time For First Time in hour,min and sec : " << endl;
		    cin >> h1;
		    cin >> m1;
		    cin >> s1;
		
		    cout << "Enter Time For second time In hour,min and sec : " << endl;
		    cin >> h2;
		    cin >> m2;
		    cin >> s2;
		
		    s3 = s1 + s2;
		    m3 = m1 + m2 + (s3/60); 
		    h3 = h1 + h2 + (m3/60);
		    s3 = s3%60;
		    m3 = m3%60;
     	}
     	void putdata()
     	{
  		  cout << endl << "Total hour = " << h3 << endl 
		  << "Total minute = " << m3 << endl 
		  << "Total second = " << s3;	
		}
};

int main() 
{
	Time t;
	t.getdata();
	t.putdata();
    
}
