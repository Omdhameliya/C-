#include<iostream>
using namespace std;

int sum(int a, int b)
{
	int c;
	
	c = a + b;
	
	return c;
}

int sums(int sum)
{
	int d;
	
	d = sum*2;
	
	cout << "Sum Square :" << d << endl;
}

int main()
{
	int a, b;
	cout << "Enter The a :";
	cin  >> a;
	cout << "Enter The b :";
	cin  >> b;
	
	sums(sum(a,b));
}
