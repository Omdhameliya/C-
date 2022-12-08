#include<iostream>
using namespace std;

int swap(int a[10], int b[10], int n)
{
	for(int i=0; i<n; i++)
	{
		a[i] = a[i] + b[i];
		b[i] = a[i] - b[i];
		a[i] = a[i] - b[i];
	}
}

int main()
{
	int n;
	
	cout << "Enter The Size Of n :";
	cin  >> n;
	
	int a[n];
	int b[n];
	
		cout << "Enter The First Array :";
		
	for(int i=0; i<n; i++)
	{
		cin  >> a[i];
	}
	
		cout << "Enter The Second Array :";
		
	for(int i=0; i<n; i++)
	{
		cin  >> b[i];
	}
	
	swap(a,b,n);
	
		cout << "First Array : ";
		
	for(int i=0; i<n; i++)
	{
		cout << a[i];
	}
	
		cout <<endl << "second Array : ";
	
	for(int i=0; i<n; i++)
	{
		cout << b[i];
	}
}


