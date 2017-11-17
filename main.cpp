#include <iostream>
#include <vector>
#include "counting.h"
#include "storage.h"
#include "basicoperations.h"
#include "numberinput.h"
using namespace std;

void menu1();
void menu2();

int main() {
    // create dynamic to store values and results
    //vector<long double> * storage = new vector<long double>;
    
    NumberInput * numInObj = new NumberInput;
    
    int choice = -1;
    
    while (choice != 0) {
        menu1();
        cout << "Enter your number choice: ";
        
        while(!(cin >> choice)){
            cout << endl << "Not a proper choice." << endl << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            
            menu1();
            cout << "Enter your number choice: ";
        }
        cout << endl;
    
        switch (choice) {
            case 0:
                break;
            case 1:
                performFactorial(numInObj);
                break;
            case 2:
                performPermute(numInObj);
                break;
            case 3:
                performCombine(numInObj);
                break;
                
            case 4:
                choice = -1;
                
                while (choice != 6) {
                    menu2();
                
                    cout << "Enter your number choice: ";
                    while(!(cin >> choice)){
                        cout << endl << "Not a proper choice." << endl << endl;
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        
                        menu2();
                        cout << "Enter your number choice: ";
                    }
                    cout << endl;
                
                    switch (choice) {
                        case 1:
                            performAdd(numInObj);
                            break;
                        case 2:
                            performSubtract(numInObj);
                            break;
                        case 3:
                            performMultiply(numInObj);
                            break;
                        case 4:
                            performDivide(numInObj);
                            break;
                        case 5:
                            performMod(numInObj);
                            break;
                        case 6:
                            break;
                        default:
                            cout << "Not a valid choice." << endl;
                    } // end switch
                    
                    cout << endl;
                } // end while
                
            default:
                if (choice != 6) {
                    cout << "Not a valid choice." << endl;
                }
        } // end switch
        
        cout << endl;
    } // end while
    
    return 0;
}

void menu1() {
    cout << "1) factorial(n)" <<
    endl << "2) permute(n, k)" <<
    endl << "3) combine(n, k)" <<
    endl << "4) elementary operation" <<
    endl << "0) quit" << endl << endl;
    return;
}

void menu2() {
    cout << "1) add"           <<
    endl << "2) subtract"      <<
    endl << "3) multiply"      <<
    endl << "4) divide"        <<
    endl << "5) mod"           <<
    endl << "6) previous menu" << endl << endl;
    return;
}
