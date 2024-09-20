#include <iostream>
using namespace std;

int main()
{
   int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,n14,n15;
   cout << "Enter number1: ";
   cin >> n1;
   cout << "Enter number2: ";
   cin >> n2;
   cout << "Enter number3: ";
   cin >> n3;
   cout << "Enter number4: ";
   cin >> n4;
   cout << "Enter number5: ";
   cin >> n5;
   cout << "Enter number6: ";
   cin >> n6;
   cout << "Enter number7: ";
   cin >> n7;
   cout << "Enter number8: ";
   cin >> n8;
   cout << "Enter number9: ";
   cin >> n9;
   cout << "Enter number10: ";
   cin >> n10;
   cout << "Enter number11: ";
   cin >> n11;
   cout << "Enter number12: ";
   cin >> n12;
   cout << "Enter number13: ";
   cin >> n13;
   cout << "Enter number14: ";
   cin >> n14;
   cout << "Enter number15: ";
   cin >> n15;
   int sum_first_5 = n1+n2+n3+n4+n5;
   int product_next_5 = n6*n7*n8*n9*n10;
   int sub_next_5 = n11-n12-n13-n14-n15;
   int add_pro_sum = sum_first_5 + product_next_5;
   int final_result = add_pro_sum - sub_next_5;
   cout << "The final result is: " << final_result; 
   return 0;
}