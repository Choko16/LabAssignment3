#include <iostream>
#include "main.cpp"
using namespace std;

int main() {
    cout << "Enter the purchase amount in pennies (<= 100): ";
    cin >> purchaseAmount;
    int change = 100 - purchaseAmount;
    quarters = change / 25;
    change = change % 25;
    dimes = change / 10;
    change = change % 10;
    nickels = change / 5;
    change = change % 5;
    pennies = change;

    cout << "Your change is: \n";
    cout << "Quarters: " << quarters << "\n";
    cout << "Dimes: " << dimes << "\n";
    cout << "Nickels: " << nickels << "\n";
    cout << "Pennies: " << pennies << "\n";

    return 0;
}
