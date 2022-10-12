#include <iostream>
using namespace std;
int main ()
{
int number, x, count = 0;
cout << "Please enter the number to check if it's prime or not : " << endl;
cin >> number;
if ( number == 0)
{
cout << "\n" << number << " This number is not prime";
exit(1);
}
else   {
for ( x=2; x < number; x++)
if ( number % x == 0)
count++;
}
if ( count > 1)
cout << "\n" << number << " This number is not prime.";
else
cout << "\n" << number << " This is prime number.";
return 0;