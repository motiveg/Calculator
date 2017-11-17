#include <iostream>
#include <iomanip>
#include "counting.h"
#include "numberinput.h"
using namespace std;

double factorial(double num) {
    double result = num;
    num--;
    
    for(int intNum = static_cast<int>(num) - 1; intNum > 0; intNum--) {
        result *= num--;
    } // end for
    return result;
}
double permute(int n, int k) {
    return factorial(static_cast<double>(n)) / factorial(static_cast<double>(n - k));
}

double combine(int n, int k) {
    return factorial(static_cast<double>(n)) /
            (factorial(static_cast<double>(n - k)) * factorial(static_cast<double>(k)));
}

void performFactorial(NumberInput * obj) {
    obj->set_n();
    cout << fixed << setprecision(0) << obj->get_n() << "! = " <<
            factorial(static_cast<double>(obj->get_n())) << endl;
    return;
}

void performPermute(NumberInput * obj){
    obj->set_n();
    obj->set_k();
    cout << fixed << setprecision(0) << "permute(" << obj->get_n() << ", " << obj->get_k() << ") = " <<
            permute(static_cast<double>(obj->get_n()), static_cast<double>(obj->get_k())) << endl;
    return;
}

void performCombine(NumberInput * obj) {
    obj->set_n();
    obj->set_k();
    cout << fixed << setprecision(0) << "combine(" << obj->get_n() << ", " << obj->get_k() << ") = " <<
            combine(static_cast<double>(obj->get_n()), static_cast<double>(obj->get_k())) << endl;
    return;
}
