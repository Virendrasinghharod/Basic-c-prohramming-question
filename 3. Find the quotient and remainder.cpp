#include<iostream>
using namespace std;
int main(){
	int divisor , divident ,quotient , remainder;
	cout << "Enter divident:" << endl;
	cin >> divident;
	cout << "Enter the divisor" << endl;
	cin >> divisor;
	quotient = divident / divisor;
	remainder = divident % divisor;
	cout << "divide is : " <<divide << endl;
	cout << "remainder is " << remainder << endl;
	return 0;
}
