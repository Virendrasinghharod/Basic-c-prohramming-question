#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	
	int i;
	int num; 
	cout << "Genreating random number " << endl;
	for(int i=1 ; i<=10 ; i++){
		num = rand()%100; 
		cout << " " << num << " " ;
	}
	cout << "\n";
	
	return 0;
}
