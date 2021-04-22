#include <iostream>

using namespace std;

int main(){
    double val1, val2;

    cout << "Val 1: ";
    cin >> val1;

    cout << "Val 2: ";
    cin >> val2;

    cout << "Min value: " << min(val1, val2) << endl;
    cout << "Max value: " << max(val1, val2) << endl;
    cout << "Sum: " << (val1 + val2) << endl;
    cout << "Difference: " << (val1 - val2) << endl;
    cout << "Product: " << (val1 * val2) << endl;
    cout << "Ratio: " << (val1/val2) << endl;

}