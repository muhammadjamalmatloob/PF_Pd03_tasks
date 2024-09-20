#include <iostream>
using namespace std;

int main()
{
   string movie;
   int adult_ticket_price,child_ticket_price,adult_tickets_sold,child_tickets_sold,percent_amount_charity,total_amount,donation_to_charity,remaining_amount;
   cout << "Enter movie name: ";
   getline(cin,movie);
   cout << "Enter the adult ticket price: $";
   cin >> adult_ticket_price;
   cout << "Enter the child ticket price: $";
   cin >> child_ticket_price;
   cout << "Enter the number of adult tickets sold: ";
   cin >> adult_tickets_sold;
   cout << "Enter the number of child tickets sold: ";
   cin >> child_tickets_sold;
   cout << "Enter the percentage amount to be donated to charity: ";
   cin >> percent_amount_charity;
   total_amount = adult_tickets_sold*adult_ticket_price + child_tickets_sold*child_ticket_price;
   donation_to_charity = (total_amount/100)*percent_amount_charity;
   remaining_amount = total_amount - donation_to_charity;
   cout << endl << "Movie: " << movie << endl;
   cout << "Total amount generated from the ticket sales: $" << total_amount << endl;
   cout << "Donation to charity (" << percent_amount_charity << "%): $" << donation_to_charity << endl;
   cout << "Remaining amount after donation: $" << remaining_amount;
   return 0;
}