#include <iostream>
#include "numberinput.h"
using namespace std;

NumberInput::NumberInput() {
    n  = 0;
    k  = 0;
    n1 = 0.0;
    n2 = 0.0;
}

void NumberInput::set_n(){
    cout << "Enter a value for n: ";
    while(!(cin >> n)){
        cout << endl << "Not a proper choice." << endl << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        
        cout << "Enter a value for n: ";
    }
    cout << endl;
}

void NumberInput::set_k(){
    cout << "Enter a value for k: ";
    while(!(cin >> k)){
        cout << endl << "Not a proper choice." << endl << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        
        cout << "Enter a value for k: ";
    }
    cout << endl;
}

void NumberInput::set_n1(){
    cout << "Enter a value for n1: ";
    while(!(cin >> n1)){
        cout << endl << "Not a proper choice." << endl << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        
        cout << "Enter a value for n1: ";
    }
    cout << endl;
}

void NumberInput::set_n2(){
    cout << "Enter a value for n2: ";
    while(!(cin >> n2)){
        cout << endl << "Not a proper choice." << endl << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        
        cout << "Enter a value for n2: ";
    }
    cout << endl;
}
