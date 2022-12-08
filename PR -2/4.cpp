#include<iostream>
using namespace std;

inline int mul(int n , int i)
{
	cout <<"\t" << n << " * " << i << " = " << n*i << endl;
}

int main()
{
	int n,i;
	
	cout << "Entre The n :";
	cin  >> n;
	
	cout << endl;
	for(i=0;i<=10;i++)
	{
	mul(n,i);
     }
}
