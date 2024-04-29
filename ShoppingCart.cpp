#include "ShoppingCart.h"
#include <iostream>

// Default constructor
ShoppingCart::ShoppingCart() {
    customerName = "none";
    currentDate = "January 1, 2016";
}

// Parameterized constructor
ShoppingCart::ShoppingCart(string name, string date) {
    customerName = name;
    currentDate = date;
}

// GetCustomerName() accessor
string ShoppingCart::GetCustomerName() const {
    return customerName;
}

// GetDate() accessor
string ShoppingCart::GetDate() const {
    return currentDate;
}

// AddItem() method
void ShoppingCart::AddItem(ItemToPurchase item) {
    cartItems.push_back(item);
}

// RemoveItem() method
void ShoppingCart::RemoveItem(string name) {
    bool found = false;
    for (auto it = cartItems.begin(); it != cartItems.end(); ++it) {
        if (it->GetName() == name) {
            cartItems.erase(it);
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Item not found in cart. Nothing removed." << endl;
    }
}

// ModifyItem() method
void ShoppingCart::ModifyItem(ItemToPurchase item) {
    bool found = false;
    for (auto& cartItem : cartItems) {
        if (cartItem.GetName() == item.GetName()) {
            if (item.GetDescription() != "none") {
                cartItem.SetDescription(item.GetDescription());
            }
            if (item.GetPrice() != 0) {
                cartItem.SetPrice(item.GetPrice());
            }
            if (item.GetQuantity() != 0) {
                cartItem.SetQuantity(item.GetQuantity());
            }
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Item not found in cart. Nothing modified." << endl;
    }
}

// GetNumItemsInCart() method
int ShoppingCart::GetNumItemsInCart() {
    int totalQuantity = 0;
    for (const auto& item : cartItems) {
        totalQuantity += item.GetQuantity();
    }
    return totalQuantity;
}

// GetCostOfCart() method
double ShoppingCart::GetCostOfCart() {
    double totalCost = 0.0;
    for (const auto& item : cartItems) {
        totalCost += item.GetPrice() * item.GetQuantity();
    }
    return totalCost;
}

// PrintTotal() method
void ShoppingCart::PrintTotal() {
    cout << GetCustomerName() << "'s Shopping Cart - " << GetDate() << endl;
    cout << "Number of Items: " << GetNumItemsInCart() << endl << endl;
    if (cartItems.empty()) {
        cout << "SHOPPING CART IS EMPTY" << endl;
    } else {
        for (const auto& item : cartItems) {
            cout << item.GetName() << " @ $" << item.GetPrice() << " = $" << (item.GetPrice() * item.GetQuantity()) << endl;
        }
        cout << endl << "Total: $" << GetCostOfCart() << endl;
    }
}

// PrintDescriptions() method
void ShoppingCart::PrintDescriptions() {
    cout << GetCustomerName() << "'s Shopping Cart - " << GetDate() << endl << endl;
    if (cartItems.empty()) {
        cout << "SHOPPING CART IS EMPTY" << endl;
    } else {
        cout << "Item Descriptions" << endl;
        for (const auto& item : cartItems) {
            cout << item.GetName() << ": " << item.GetDescription() << endl;
        }
    }
}
/* Type your code here */
