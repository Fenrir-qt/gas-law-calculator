#ifndef FORMULA_H
#define FORMULA_H

using namespace std;

extern HANDLE color;
extern string meters;
extern string kelvin;
extern string pascals;
extern string mole;
extern string units[2][2];

// Charles' Law
void charles1(double* v2, double* t1, double* t2);
void charles2(double* v1, double* t1, double* t2);
void charles3(double* v1, double* v2, double* t2);
void charles4(double* v1, double* v2, double* t1);

// Boyle's Law
void boyle1(double* p2, double* v1, double* v2);
void boyle2(double* p1, double* v1, double* v2);
void boyle3(double* p2, double* v2, double* p1);
void boyle4(double* p1, double* v1, double* p2);

// Gay-Lussac's Law
void lussac1(double* p2, double* t2, double* t1);
void lussac2(double* p1, double* t1, double* t2);
void lussac3(double* p1, double* p2, double* t2);
void lussac4(double* p2, double* p1, double* t1);

// Avogadro's Law
void avogadro1(double* v2, double* n1, double* n2);
void avogadro2(double* v1, double* n1, double* n2);
void avogadro3(double* v1, double* v2, double* n2);
void avogadro4(double* v1, double* v2, double* n1);

// Ideal Gas Law
void idealgas1(double* n, double* v, double* t);
void idealgas2(double* n, double* t, double* p);
void idealgas3(double* p, double* v, double* t);
void idealgas4(double* p, double* v, double* n);

#endif
