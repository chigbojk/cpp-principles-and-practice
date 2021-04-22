#include <iostream>
#include "std_lib_facilities.h"
using namespace std;

int main(){
    string first_name;
    
    cout << "Please enter your first name: ";
    cin >> first_name;
    cout << "Hello, " << first_name << endl;

    cout << "How are you?" << endl;
    cout << "I am fine. I miss you." << endl;

    string friend_name;
    cout << "Please enter your friend's name: ";
    cin >> friend_name;

    cout << "Have you seen " << friend_name << " recently? " << endl;

    char friend_sex;
    cout << "Please enter m if your friend is male, or f if your friend is female: ";
    cin >> friend_sex;
    if (friend_sex == 'm')
        cout << "If you see " << friend_name << " please ask him to see me" << endl;
    if (friend_sex == 'f')
        cout << "If you see " << friend_name << " please ask her to see me" << endl;

    int age;
    cout << "How old are you? ";
    cin >> age;

    cout << "I hear you just had a birthday and you are " << age << " years old." << endl;

    if (age <= 0 || age >= 110)
        simple_error("you're kidding!");

    if (age < 12)
        cout << "Next year you will be " << (age + 1) << "." << endl;

    if (age == 17)
        cout << "Next year you will be able to vote." << endl;
    
    if (age > 70)
        cout << "I hope you are enjoying retirement." << endl;

    cout << "Yours sincerely, \n\n" << first_name << endl; 
}