#include <iostream>
#include <iomanip>
#include "numberinput.h"
#include "basicoperations.h"
using namespace std;

double add     (double n1, double n2) { return n1 + n2; }
double subtract(double n1, double n2) { return n1 - n2; }
double multiply(double n1, double n2) { return n1 * n2; }
double divide  (double n1, double n2) { return n1 / n2; }
int    mod     (int    n1, int    n2) { return n1 % n2; }

void performAdd(NumberInput * obj) {
    obj->set_n1();
    obj->set_n2();
    cout << fixed << setprecision(2) << obj->get_n1() << " + " << obj->get_n2() <<
            " = " << add(obj->get_n1(), obj->get_n2()) << endl;
    return;
}

void performSubtract(NumberInput * obj) {
    obj->set_n1();
    obj->set_n2();
    cout << fixed << setprecision(2) << obj->get_n1() << " - " << obj->get_n2() <<
            " = " << subtract(obj->get_n1(), obj->get_n2()) << endl;
    return;
}

void performMultiply(NumberInput * obj) {
    obj->set_n1();
    obj->set_n2();
    cout << fixed << setprecision(2) << obj->get_n1() << " * " << obj->get_n2() <<
            " = " << multiply(obj->get_n1(), obj->get_n2()) << endl;
    return;
}

void performDivide(NumberInput * obj) {
    obj->set_n1();
    obj->set_n2();
    cout << fixed << setprecision(2) << obj->get_n1() << " / " << obj->get_n2() <<
            " = " << divide(obj->get_n1(), obj->get_n2()) << endl;
    return;
}

void performMod(NumberInput * obj) {
    obj->set_n1();
    obj->set_n2();
    cout << static_cast<int>(obj->get_n1()) << " % " << static_cast<int>(obj->get_n2()) <<
            " = " << mod(static_cast<int>(obj->get_n1()), static_cast<int>(obj->get_n2())) << endl;
    return;
}
