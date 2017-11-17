#include <iostream>
#include <iomanip>
#include <vector>
#include "storage.h"
using namespace std;

void storeResult(double n, vector<long double> * vec) {
    vec->push_back((static_cast<long double>(n)));
    return;
}

void displayStorage(vector<long double> * vec) {
    int i = 0;
    int vectorSize = 0;
    
    vectorSize = (static_cast<unsigned int>(vec->size()));
    
    if (vectorSize > 0) {
        for(i = 0; i < vectorSize; ++i) {
            cout << fixed << setprecision(2) <<
                    "Index " << i << ": " << vec->at(i) << endl;
        } // end for
    }
    else {
        cout << "Storage is empty." << endl;
    } // end if
    
    return;
}
