#include<iostream>
using namespace std;
int hcf (int a , int b){
	if (b==0)
	return a;
	return hcf(b, a%b);
}
int main(){
	int a ,b;
	cout << "Enter two number " ;
	cin >> a >> b;
	cout << "HCF of " << a <<" and" << b << " is " << hcf(a,b) << endl;
	system("pause");
	return 0;
	
}
