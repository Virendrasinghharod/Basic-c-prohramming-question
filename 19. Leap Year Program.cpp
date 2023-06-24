#include<iostream>
using namespace std;
int main(){
	
	char ch ;
	cout << "Enter any character to check :: " ;
	cin >> ch;
	if(ch>= 65 && ch<=90)
	{
		cout << "\n the entered character " << ch << " is an UPPERCASE\n" ;
	}
	else if(ch >= 48 && ch <=570)
	{
		cout << "\n the entered character " << ch << " is a LOWERCASE \n";
	}
	else {
		cout << "\n the entered character " << ch << " is a SPECIAL character \n" ; 
	}
	
	return 0;
}
