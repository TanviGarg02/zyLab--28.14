#include <iostream>
#include <iomanip>
using namespace std;

#include "ShoppingCart.h"

void PrintMenu() {
   /* Type your code here */
   cout << "a - Add item to cart" << endl;
   cout << "d - Remove item from cart" << endl;
   cout << "c - Change item quantity" << endl;
   cout << "i - Output items' descriptions" << endl;
   cout << "o - Output shopping cart" << endl;
   cout << "q - Quit" << endl;
}

void ExecuteMenu(char option, ShoppingCart& theCart) {
   /* Type your code here */
   
   
}

int main() {
   /* Type your code here */
   string customerName;
   string currentDate;
   char option;

   cout << "Enter customer's name:" << endl;
   getline(cin, customerName);
   cout << "Enter today's date:" << endl;
   getline(cin, currentDate);

   cout << "Customer name: " << customerName;
   cout << "Today's date: " << customerData;

   ShoppintCart theCart(customerName, currentDate);
   
   while(option != 'q'){
      PrintMenue();
      cout << "Choose and option:" << endl;
      cin >> option;
      ExecuteMenu(option, theCart);
   }
   
   return 0;
}
