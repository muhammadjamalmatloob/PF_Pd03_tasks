#include <iostream>
using namespace std;

int main()
{
   string name;
   float t_w_loss,days;
   cout << "Enter the name of the person: ";
   getline(cin,name);
   cout << "Enter the target weight loss in kilograms: ";
   cin >> t_w_loss;
   days = t_w_loss*15;
   cout << name << " will need " << days << " days to loss " << t_w_loss << " kg of weight by following the doctor's suggestions.";
   return 0;
}