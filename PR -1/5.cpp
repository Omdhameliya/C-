#include<iostream>
using namespace std;

int main()
{
	int n;
	
	cout << "Enter The Size Of Array :";
	cin  >> n;
	
	int a[n];
	
	for(int i=0; i<n; i++)
	{
		cout << "Enter The Element :";
		cin  >> a[i];
		
		for(int j=0; j<=a[i]; j++)
		{
			if(j*j==a[i])
			{
				cout <<j;
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	
}
