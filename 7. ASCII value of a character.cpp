#include<iostream>
using namespace std;
int main(){
	char c;
	cout  <<  "Enter the value of char c :" <<  endl;
	cin >> c;
	cout << "the ASCII value of char is  " << static_cast<int>(c) << endl;
	return 0;
}
