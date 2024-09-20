#include <iostream>
using namespace std;

int main()
{
   float veg_per_kg_price,fruit_per_kg_price;
   int total_kg_veg,total_kg_fruit,total_earning_rp;
   cout << "Enter vegetable price per kilogram (in coins): ";
   cin >> veg_per_kg_price;
   cout << "Enter fruit price per kilogram (in coins): ";
   cin >> fruit_per_kg_price;
   cout << "Enter total kilograms of vegetables: ";
   cin >> total_kg_veg;
   cout << "Enter total price of fruits: ";
   cin >> total_kg_fruit;
   total_earning_rp = (total_kg_veg*veg_per_kg_price + total_kg_fruit*fruit_per_kg_price)/1.94;
   cout << "Total earnings in Rupees (Rps): " << total_earning_rp;
   return 0;
}