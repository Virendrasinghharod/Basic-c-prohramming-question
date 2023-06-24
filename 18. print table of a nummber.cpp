#include<iostream>
using namespace std;
int main(){
	int n,table;
	cout << "Enter the value of a number" ;
	cin >> n;
	for(int i=1 ; i<=10;i++){
		table=i*n;
		cout << "\t" << n << " * " << i << " = " << table <<"\n\n" ;	
	};
    return 0;
}
