#include <iostream>
using namespace std;

int main()
{
   int age,move,years_single_house;
   cout << "Enter person's age (years): ";
   cin >> age;
   cout << "Enter the number of times they've moved: ";
   cin >> move;
   years_single_house = age/(move+1);
   cout << "Average number of years lived in the same house: " << years_single_house;
   return 0;
}