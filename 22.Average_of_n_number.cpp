#include<iostream>
using namespace std;
int main(){
	
	int i,x,n,sum = 0; 
	float avg;
	cout << "How many number you want to enter " ;
	cin >> n;
	for(i=1 ; i<=n ; i++){
		cout << "Enter the number " << i << " ";
		cin >> x;
		sum += x;
 	}
 	avg = (float)sum/(float)n;
 	cout << "sum of " << n << "Number "<< sum;
 	cout << "average of " << n << "Number " << avg;
 	cout << "\n";
 	return 0;
	
	
}
