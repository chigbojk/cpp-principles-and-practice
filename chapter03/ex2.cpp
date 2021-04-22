#include <iostream>

using namespace std;

int main(){

    double mile_to_km = 1.609;
    double miles;

    cout << "Please enter the distance, in miles: ";
    cin >> miles;
    cout << miles << "mi = " << (miles * mile_to_km) << "km" << endl;
}