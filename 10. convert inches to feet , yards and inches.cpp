#include<iostream>
using namespace std;
int main(){
	// Convert inches to feet yards and inches
	int y , f , i;
	cout << "Enter Inches to convert :: " ;
	cin >> i;
	y = i/432;
	i = i%432;
	f = i/12;
	i = i%12;
	cout << "yards: " << y << endl;
	cout << "feet: " << f << endl;
	cout << "inches " << i << endl;
	
	
}
