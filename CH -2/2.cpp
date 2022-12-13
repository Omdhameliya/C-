#include<iostream>
using namespace std;

int sum(int o, int m)
{
	return o+m;
}

int sub(int o, int m)
{
	return o-m;
}

int mul(int o, int m)
{
	return o*m;
}

int Div(int o, int m)
{
	return o/m;
}

int mod(int o, int m)
{
	return o%m;
}

int main()
{
	int a, b, n, ans;
	cout <<"Enter Any Number : "<< endl;
	cout <<"1. Addition" << endl;
	cout <<"2. Subtraction" << endl;
	cout <<"3. Multiplication" << endl;
	cout <<"4. Division" << endl;
	cout <<"5. Moduls" << endl;
	cout <<"6. Exit " << endl;
	
	do {
	cout << endl <<"Enter The Any Choice :";
	cin  >> n;
		
	
	switch(n)
	{
		case 1: 
			cout << "Enter The value of a :";
			cin  >> a;
			cout << "Enter The value of b :";
			cin  >> b;
		    
		    ans = sum(a,b);
		    cout << "Addition : " << ans << endl;
			break;	
		    
			case 2: 
			cout << "Enter The value of a :";
			cin  >> a;
			cout << "Enter The value of b :";
			cin  >> b; 
		    
		    ans = sub(a,b);
		    cout << "Subtraction : "<< ans << endl;
		    break;
		    
		case 3: 
			cout << "Enter The value of a :";
			cin  >> a;
			cout << "Enter The value of b :";
			cin  >> b; 
		    
		    ans = mul(a,b);
		    cout << "Multiplication :" << ans << endl;
		    break;
		    
		case 4: 
			cout << "Enter The value of a :";
			cin  >> a;
			cout << "Enter The value of b :";
			cin  >> b; 
		    
		    ans = Div(a,b);
		    cout <<" Division : " << ans << endl;
		    break; 
			
		case 5: 
			cout << "Enter The value of a :";
			cin  >> a;
			cout << "Enter The value of b :";
			cin  >> b; 
		    
		    ans = mod(a,b);
		    cout <<" Modulus : " << ans << endl;
		    break;  
		    
		case 6:
			
			cout << "Quit calculator..." << endl;
			break;
		
		default :
			 
			 cout << "enter valid choice" << endl;
			 
		    
	}

	
	n++;
	
  }while(n<=6);
}

