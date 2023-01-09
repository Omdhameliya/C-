#include<iostream>
using namespace std;

class Logic{
	int a;
	int b;
	public:
		void setData()
		{
			cout << "Enter A : ";
			cin >> a;
			cout << "Enter B : ";
			cin >> b;
		}
		void getDiv()
		{
			if(b == 0)
			{
				throw b;
			}
			else
			{
				cout << "Division of : " << a/b << endl;
			}
		}
		void mylogic()
		{
			try{
				getDiv();
			}
			catch(int b)
			{
				cout << b << " Can not divided by Zero !!" << endl;
			}
			catch(...)
			{
				cout << b << " Can not divided Without Integer !!" << endl;
			}	
		}
};
int main()
{
	Logic l;
	l.setData();
	l.mylogic();
}
