#include<iostream>
using namespace std;

int main()
{
	
	int a[1000], count = 0;
	
	for(int i=2020; i<=3030; i++)
	{
		if(i%4 == 0)
		{
			a[count++] = i;
		}
	}
	
	for(int i=0; i<count; i++)
	{
		cout << a[i] << "\t" ;
	}
}


