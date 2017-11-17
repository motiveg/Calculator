#include "numberinput.h"

#ifndef basicoperations_h
#define basicoperations_h

double add     (double, double);
double subtract(double, double);
double multiply(double, double);
double divide  (double, double);
int    mod     (int   , int   );

void performAdd     (NumberInput*);
void performSubtract(NumberInput*);
void performMultiply(NumberInput*);
void performDivide  (NumberInput*);
void performMod     (NumberInput*);

#endif /* basicoperations_h */
