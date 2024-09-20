#include <iostream>
using namespace std;

int main()
{
   double acc,init_velocity,final_velocity,time;
   cout << "Enter initial velocity (m/s): ";
   cin >> init_velocity;
   cout << "Enter acceleration (m/s^2): ";
   cin >> acc;
   cout << "Enter time (s): ";
   cin >> time;
   final_velocity = init_velocity + acc*time;
   cout << "Final velocity (m/s): " << final_velocity; 
   return 0;
}