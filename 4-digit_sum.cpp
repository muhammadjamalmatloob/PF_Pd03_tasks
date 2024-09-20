#include <iostream>
using namespace std;

int main()
{
   int num,sum_of_digits;
   cout << "Enter a four-digit number: ";
   cin >> num;
   sum_of_digits = num%10 + (num/10)%10 + (num/100)%10 + (num/1000)%10;
   cout << "Sum of individual digits: " << sum_of_digits; 
   return 0;
}