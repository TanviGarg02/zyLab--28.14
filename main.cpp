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
   switch(option){
      case 'a':{
         cout << "ADD ITEM TO CART" << endl;
         string name, description;
         int price, quantity;
         cout<< "Enter the item name:" <<endl;
         cin.ignore();
         getline(cin,name);
         cout << "Enter the item description:" <<endl;
         getline(cin, description);
         cout<< "Enter the item quantity:" << endl;
         cin >> quantity;
         ItemToPurchase newItem(name,description,price, quantitiy);
         theCart.AddItem(newItem);
         break;
      }
      case 'd':{
         cout << "REMOVE ITEM FROM CART" << endl;
         string nameToRemove;
         cout<< "Enter name of item to remove:" <<endl;
         cin.ignore();
         getline(cin, nameToRemove);
         theCart.RemoveItem(nameToRemove);
         break;
      }
      case 'c':{
         cout << "CHANGE ITEM QUANTITY" << endl;
         string nameToModify;
         int newQuantity;
         cout << "Enter the item name:" << endl;
         cin.ignore();
         getline(cin, nameToModify);
         cout << "Enter the new quantity:" << endl;
         cin >> newQuantity;
         ItemToPurchase modifiedItem(nameToModify, " ", 0, newQuantity);
         theCart.ModifyItem(modifiedItem);
         break;
      }
      case 'i':
         cout<< "OUTPUT ITEMS' DESCRIPTIONS" <<endl;
         theCart.PrintDescriptions();
      break;
      case 'o':
         cout << "OUTPUT SHOPPING CART" << endl;
         theCart.PrintTotal();
      break;
      case 'q':
         cout << "Exiting ..."<<endl;
      break;
      default:
         cout << "Invalid option. Please try again." << endl;
      break;
   }
}
      
   
   
   
}

int main() {
   /* Type your code here */
   
   return 0;
}
