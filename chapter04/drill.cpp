#include <iostream>
#include "../std_lib_facilities.h"

using namespace std;
int main(){


    double smallest = 0.0;
    double largest = 0.0;
    double input;
    double rawLength = 0.0;
    double sum = 0.0;
    vector<double> lengths;
    string unit;
    
    
    cout << "Enter an length and unit (m, cm, ft or in), or | to exit" << std::endl;
    
    while (cin >> input >> unit){

        if (unit != "m" && unit != "cm" && unit != "ft" && unit != "in"){
            cerr << "Illegal representation of units." << endl;
        }
        else{
            rawLength = input;
            
            // convert all values to metres
            if (unit == "cm"){
                rawLength = input / 100;
            }
            
            else if (unit == "ft"){
                rawLength = input * (12 * 2.54)/100;
            }

            else if (unit == "in"){
                rawLength = input * (2.54/100);
            }

            lengths.push_back(rawLength);

            sum += rawLength;

            if (rawLength < smallest || smallest == 0.0){
                smallest = rawLength;
                cout << rawLength << "m - smallest so far" << std::endl;
            }

            if (rawLength > largest || largest == 0.0){
                largest = rawLength;
                cout << rawLength << "m - largest so far" << std::endl;
            }

            cout << "Lengths in ascending order: " << endl;

            sort(lengths);
            for (int i = 0; i < lengths.size(); i++){
                cout << lengths[i] << "m" << endl;
            }
            
            cout << std::endl;
        }
    }
        cout << "smallest value: " << smallest << "m" << std::endl;
        cout << "largest value: " << largest << "m" << std::endl;
        cout << "number of values: " << lengths.size() << std::endl;
        cout << "sum of values: " << sum << "m" << std::endl;

}