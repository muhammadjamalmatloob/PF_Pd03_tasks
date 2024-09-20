#include <iostream>
using namespace std;

int main()
{
   int no_frames_per_sec,min,total_frames;
   cout << "Enter number of minutes: ";
   cin >> min;
   cout << "Enter number of frames per second: ";
   cin >> no_frames_per_sec;
   total_frames = no_frames_per_sec*min*60;
   cout << "Total number of frames: " << total_frames;
   return 0;
}