#include<iostream>
using namespace std;
int main(){
	int a , no,b,temp = 0;
	cout << "Enter any Number " ;
	cin >>  no;
	b = no;
	while(no>0){
		a = no/10;
		no = no/10;
		temp = temp * 10 * a;
		
	}
	if(temp == b){
		cout << "Palindrome Number " ;
	}
	else {
		cout << "Not Palindrome number " ;
	}
	
	return 0;
	
}
