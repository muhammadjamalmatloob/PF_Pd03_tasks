#include <iostream>
using namespace std;

int main()
{
   int size_pounds,cost_bag,area_sqft,cost_per_pound,cost_per_sqft;
   cout << "Enter size of fertilizer bag in pounds: ";
   cin >> size_pounds;
   cout << "Enter cost of the bag: $";
   cin >> cost_bag;
   cout << "Enter area in square feet that can be covered by the bag: ";
   cin >> area_sqft;
   cost_per_pound = cost_bag/size_pounds;
   cost_per_sqft = cost_bag/area_sqft;
   cout << "Cost of the fertilizer per pound: $" << cost_per_pound << endl;
   cout << "Cost of the fertilizer per square feet: $" << cost_per_sqft;
   return 0;
}