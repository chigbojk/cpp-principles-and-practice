#include <iostream>

using namespace std;

int main(){

    int number;
    cout << "Input an integer, and I'll tell you if it's even or odd: ";
    cin >> number;

    if (number % 2 == 0)
        cout << number << " is even!";

    else
        cout << number << " is odd!";

    cout << endl;
}