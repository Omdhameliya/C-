#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char name[50];
	int n;

	cout << "Enter The Your Name :";
	cin  >> name;

	n = strlen(name);

	for(int i=0; i<n; i++)
	{
	    if(name[i]>='0' && name[i]<='9')
		{
			cout << "That Is Numaric String" << endl;
		}

	    else
		{
			cout << "That Is No a Numaric String " << endl;
		}
	}


}
