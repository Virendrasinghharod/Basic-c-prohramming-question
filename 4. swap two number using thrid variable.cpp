#include<iostream>
using namespace std;
int main(){
	int a ,b;
	cout << "Enter the value of a:" << endl;
	cin >> a;
	cout << "Enter the value of b" << endl;
	cin >> b;
	
	cout << "before swap a = " << a << endl;
	cout << "before swap b = " << b << endl;
	a =a + b;
	b = a - b;
	a = a - b;
	cout << "After swap a " << a << endl;
	cout << "after swap b = " << b << endl;
	return 0;
}
