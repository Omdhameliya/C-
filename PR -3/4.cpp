#include<iostream> 
using namespace std;

class House 
{
    private :
           int no,bhk;
		 string color;
           
    public :
    		
    	   void getdata()
    	   {
        cout << "Enter house no = ";
        cin >> no;
        cout << "Enter how many room = ";
        cin >> bhk;
        cout << "Enter house color = ";
        cin >> color;
  	   }
	   void putdata()
	   {
	   	
        cout << "House No \t: "<< no << endl << "Total Bedroom \t: " <<bhk << endl << "House color \t: " <<color << endl;
	   }
};
 
int main()
{
    House h;
    h.getdata();
    h.putdata();

} 
