#include<iostream>
using namespace std;

int main()
{
	int a,i;
	
	cout << "Enter Size Of Array : ";
	cin  >> a;
	int arr[a];
	
	for(i=0; i<a; i++)
	{
		cout << "Enter The Array : ";
		cin  >> arr[i];
	}

	for(i=0; i<a; i++)
	{
		if(arr[i]%2==0)
		{
			cout << arr[i] << endl;
		}
	}
}

