#include <iostream>
using namespace std;

int main()
{
   int n,sum_of_internal_angles;
   cout << "Enter number of sides of the polygon: ";
   cin >> n;
   sum_of_internal_angles = (n-2)*180;
   cout << "The sum of internal angles of " << n << "-sided polygon is " << sum_of_internal_angles << " degrees.";
   return 0;
}