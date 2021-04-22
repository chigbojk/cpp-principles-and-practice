#include <iostream>

using namespace std;

int main(){

    int pennies, nickels, dimes, quarters, half_dollars, whole_dollars;

    cout << "How many pennies? ";
    cin >> pennies;

    cout << "How many nickels? ";
    cin >> nickels;

    cout << "How many dimes? ";
    cin >> dimes;

    cout << "How many quarters? ";
    cin >> quarters;

    cout << "How many 50-cent coins? ";
    cin >> half_dollars;

    cout << "How many 100-cent coins? ";
    cin >> whole_dollars;

    cout << "You have " << pennies << " pennies." << endl;
    cout << "You have " << nickels << " nickels." << endl;
    cout << "You have " << dimes << " dimes." << endl;
    cout << "You have " << quarters << " quarters." << endl;
    cout << "You have " << half_dollars << " 50-cent coins." << endl;
    cout << "You have " << whole_dollars << " 100-cent coins." << endl;

    int total = (pennies) + (5 * nickels) + (10 * dimes) + (25 * quarters) + (50 * half_dollars) + (100 * whole_dollars);
    cout << "The value of all of your coins is " << total;
    cout << endl;
}