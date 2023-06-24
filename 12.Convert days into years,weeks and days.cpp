#include<iostream>
using namespace std;
int main(){
    // program to convert days into years,Weeks,Days
    
    int y ,d , w;
    cout << "Enter the no. of days " ;
    cin >> d;
    y = d/365;
    d = d%365;
    w = d/7;
    d = d%7;
    cout << "\n No of Years " << y << "\n No of weeks" << w << "\n no of days" << d;
    return 0;
}
