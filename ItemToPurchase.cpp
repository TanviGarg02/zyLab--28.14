/* Type your code here */
#include "ItemToPurchase.h"
#include <string>
using namespace std;

ItemToPurchase::ItemToPurchase(){
  itemName = "none";
  itemDescription = "none";
  itemPrice = 0;
  itemQuantity = 0;
}

ItemToPurchase::ItemToPurchase(string name, string description, int price, int quantity = 0){
  itemName = name;
  itemDescription = description;
  itemPrice = price;
  itemQuantity = quantity;
}
      
void ItemToPurchase::SetName(string name){
  itemName = name;
}

void ItemToPurchase::SetDescription(string description){
  itemDescription = despription;
}

void ItemToPurchase::SetPrice(int price){
  itemPrice = price;
}

void ItemToPurchase::SetQuantity(int quantity){
  itemQuantity = quantity;
}
       
string GetName() const{
  return itemName;
}

string GetDescription() const{
  return itemDescription;
}

int GetPrice() const{
  return itemPrice;
}

int GetQuantity() const{
  return itemQuantity;
}
      
void ItemToPurchase::PrintItemCost(){
cout << itemName << " " << itemQuantity << " @$" << itemPrice << " =$"  << (itemQuantity * itemPrice) << endl;
}

void ItemToPurchase::PrintItemDescription(){
cout << itemName <<": " << itemDescription << endl;
}
   
  
