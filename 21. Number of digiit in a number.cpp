#include<iostream>
using namespace std;

int main()
{
    int n,no,a=0;

    cout<<"Enter any positive integer :: ";
    cin>>n;

    no=n;

    while(no>0)
    {
        no=no/10;
        a++;
    }
    cout<<"\nNumber of Digits in a number [ "<<n<<" ] is :: "<<a<<"\n";

/*   --> another way for this import #include<string>
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    std::string numberString = std::to_string(number);
    int digitCount = numberString.length();

    std::cout << "Number of digits: " << digitCount << std::endl;
*/
   return 0;
}
