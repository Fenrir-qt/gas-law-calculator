#include <iostream>
#include <string>
#include <iomanip>
#include <conio.h>
#include <windows.h>
#include "formula.h"

using namespace std;

void charles1(double* v2, double* t1, double* t2) {
    double v1;

    cout << endl << endl;
    cout << setw(82) << "Formula for finding the initial volume (v1): " << endl << endl;
    cout << setw(68) << "v1 = (v2 / t2) * t1" << endl << endl;
    cout << setw(79) << "Note: Temperature must be in Kelvin Unit." << endl << endl << endl;
    cout << setw(79) << "Note: Volume must be in cubic meters." << endl << endl << endl;

    // Prompts the user to input needed values
    cout << setw(65) << "Enter the Value of v2 (Final Volume): ";
    cin >> *v2;

    cout << endl << endl;

    cout << setw(65) << "Enter the Value of t2 (Final Temperature): ";
    cin >> *t2;

    cout << endl << endl;

    cout << setw(65) << "Enter the Value of t1 (Initial Temperature): ";
    cin >> *t1;

    // Calculate v1
    v1 = (*v2 / *t2) * *t1;

    system("CLS");
    cout << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << setw(66) << "v1 = (v2 / t2) * " << *t1 << endl << endl;
    cout << setw(55) << "v1 = (" << *v2 << " / t2) * " << *t1 << endl << endl;
    cout << setw(55) << "v1 = (" << *v2 << " / " << *t2 << ") * " << *t1 << endl << endl;
    cout << setw(52) << v1 << " = (" << *v2 << " / " << *t2 << ") * " << *t1 << endl << endl;
    cout << setw(55) << "v1 = " << v1 << " " << units[0][0] << endl << endl << endl;
    SetConsoleTextAttribute(color, 11);
    cout << setw(80) << "Therefore the value of the initial volume (v1) is " << v1 << " " << units[0][0];
    SetConsoleTextAttribute(color, 15);
}

void charles2(double* v1, double* t1, double* t2) {
    double v2;

    cout << endl << endl;
    cout << setw(82) << "Formula for finding the final volume (v2): " << endl << endl;
    cout << setw(68) << "v2 = (v1 / t1) * t2" << endl << endl;
    cout << setw(79) << "Note: Temperature must be in Kelvin Unit." << endl << endl << endl;
    cout << setw(79) << "Note: Volume must be in cubic meters." << endl << endl << endl;

    // Prompts the user to input needed values
    cout << setw(65) << "Enter the Value of v1 (Initial Volume): ";
    cin >> *v1;

    cout << endl << endl;

    cout << setw(65) << "Enter the Value of t1 (Initial Temperature): ";
    cin >> *t1;

    cout << endl << endl;

    cout << setw(65) << "Enter the Value of t2 (Final Temperature): ";
    cin >> *t2;

    // Calculate v2
    v2 = (*v1 / *t1) * *t2;

    system("CLS");
    cout << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << setw(66) << "v2 = (v1 / t1) * " << *t2 << endl << endl;
    cout << setw(55) << "v2 = (" << *v1 << " / t1) * " << *t2 << endl << endl;
    cout << setw(55) << "v2 = (" << *v1 << " / " << *t1 << ") * " << *t2 << endl << endl;
    cout << setw(52) << v2 << " = (" << *v1 << " / " << *t1 << ") * " << *t2 << endl << endl;
    cout << setw(55) << "v2 = " << v2 << " " << units[0][0] << endl << endl << endl;
    SetConsoleTextAttribute(color, 11);
    cout << setw(80) << "Therefore the value of the final volume (v2) is " << v2 << " " << units[0][0];
    SetConsoleTextAttribute(color, 15);
}

void charles3(double* v1, double* v2, double* t2) {
    double t1;

    cout << endl << endl;
    cout << setw(82) << "Formula for finding the Initial Temperature (t1): " << endl << endl;
    cout << setw(68) << "t1 = v1 / (v2 / t2)" << endl << endl;
    cout << setw(79) << "Note: Temperature must be in Kelvin Unit." << endl << endl << endl;
    cout << setw(79) << "Note: Volume must be in cubic meters." << endl << endl << endl;

    // Prompts the user to input needed values
    cout << setw(65) << "Enter the Value of v1 (Initial Volume): ";
    cin >> *v1;

    cout << endl << endl;

    cout << setw(65) << "Enter the Value of v2 (Final Volume): ";
    cin >> *v2;

    cout << endl << endl;

    cout << setw(65) << "Enter the Value of t2 (Final Temperature): ";
    cin >> *t2;

    // Calculate t1
    t1 = *v1 / (*v2 / *t2);

    system("CLS");
    cout << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << setw(55) << "t1 = " << *v1 << " / (v2 / t2)" << endl << endl;
    cout << setw(55) << "t1 = " << *v1 << " / (" << *v2 << " / t2)" << endl << endl;
    cout << setw(55) << "t1 = " << *v1 << " / (" << *v2 << " / " << *t2 << ")" << endl << endl;
    cout << setw(52) << t1 << " = " << *v1 << " / (" << *v2 << " / " << *t2 << ")" << endl << endl;
    cout << setw(55) << "t1 = " << t1 << " " << units[0][1] << endl << endl << endl;
    SetConsoleTextAttribute(color, 11);
    cout << setw(80) << "Therefore the value of the initial temperature (t1) is " << t1 << " " << units[0][1];
    SetConsoleTextAttribute(color, 15);
}

void charles4(double* v1, double* v2, double* t1) {
    double t2;

    cout << endl << endl;
    cout << setw(82) << "Formula for finding the Final Temperature (t2): " << endl << endl;
    cout << setw(68) << "t2 = v2 / (v1 / t1)" << endl << endl;
    cout << setw(79) << "Note: Temperature must be in Kelvin Unit." << endl << endl << endl;
    cout << setw(79) << "Note: Volume must be in cubic meters." << endl << endl << endl;

    // Prompts the user to input needed values
    cout << setw(65) << "Enter the Value of v2 (Final Volume): ";
    cin >> *v2;

    cout << endl << endl;

    cout << setw(65) << "Enter the Value of v1 (Initial Volume): ";
    cin >> *v1;

    cout << endl << endl;

    cout << setw(65) << "Enter the Value of t1 (Initial Temperature): ";
    cin >> *t1;

    // Calculate t2
    t2 = *v2 / (*v1 / *t1);

    system("CLS");
    cout << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << setw(55) << "t2 = " << *v2 << " / (v1 / t1)" << endl << endl;
    cout << setw(55) << "t2 = " << *v2 << " / (" << *v1 << " / t1)" << endl << endl;
    cout << setw(55) << "t2 = " << *v2 << " / (" << *v1 << " / " << *t1 << ")" << endl << endl;
    cout << setw(52) << t2 << " = " << *v2 << " / (" << *v1 << " / " << *t1 << ")" << endl << endl;
    cout << setw(55) << "t2 = " << t2 << " " << units[0][1] << endl << endl << endl;
    SetConsoleTextAttribute(color, 11);
    cout << setw(80) << "Therefore the value of the final temperature (t2) is " << t2 << " " << units[0][1];
    SetConsoleTextAttribute(color, 15);
}

void boyle1(double* p2, double* v1, double* v2) {
    double p1;

    cout << endl << endl;
    cout << setw(82) << "Formula for finding the initial pressure (p1): " << endl << endl;
    cout << setw(68) << "p1 = (p2 * v2) / v1" << endl << endl;
    cout << setw(79) << "Note: Pressure must be in Pascals." << endl << endl << endl;
    cout << setw(79) << "Note: Volume must be in cubic meters." << endl << endl << endl;

    // Prompts the user to input needed values
    cout << setw(65) << "Enter the Value of p2 (Final Pressure): ";
    cin >> *p2;

    cout << endl << endl;

    cout << setw(65) << "Enter the Value of v2 (Final Volume): ";
    cin >> *v2;

    cout << endl << endl;

    cout << setw(65) << "Enter the Value of v1 (Initial Volume): ";
    cin >> *v1;

    // Calculate p1
    p1 = (*p2 * *v2) / *v1;

    system("CLS");
    cout << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << setw(66) << "p1 = (p2 * v2) / " << *v1 << endl << endl;
    cout << setw(55) << "p1 = (" << *p2 << " * " << *v2 << ") / " << *v1 << endl << endl;
    cout << setw(55) << "p1 = " << p1 << " " << units[1][0] << endl << endl << endl;
    SetConsoleTextAttribute(color, 11);
    cout << setw(80) << "Therefore the value of the initial pressure (p1) is " << p1 << " " << units[1][0];
    SetConsoleTextAttribute(color, 15);
}

void boyle2(double* p1, double* v1, double* v2) {
    double p2;

    cout << endl << endl;
    cout << setw(82) << "Formula for finding the final pressure (p2): " << endl << endl;
    cout << setw(68) << "p2 = (p1 * v1) / v2" << endl << endl;
    cout << setw(79) << "Note: Pressure must be in Pascals." << endl << endl << endl;
    cout << setw(79) << "Note: Volume must be in cubic meters." << endl << endl << endl;

    // Prompts the user to input needed values
    cout << setw(65) << "Enter the Value of p1 (Initial Pressure): ";
    cin >> *p1;

    cout << endl << endl;

    cout << setw(65) << "Enter the Value of v1 (Initial Volume): ";
    cin >> *v1;

    cout << endl << endl;

    cout << setw(65) << "Enter the Value of v2 (Final Volume): ";
    cin >> *v2;

    // Calculate p2
    p2 = (*p1 * *v1) / *v2;

    system("CLS");
    cout << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << setw(66) << "p2 = (p1 * v1) / " << *v2 << endl << endl;
    cout << setw(55) << "p2 = (" << *p1 << " * " << *v1 << ") / " << *v2 << endl << endl;
    cout << setw(55) << "p2 = " << p2 << " " << units[1][0] << endl << endl << endl;
    SetConsoleTextAttribute(color, 11);
    cout << setw(80) << "Therefore the value of the final pressure (p2) is " << p2 << " " << units[1][0];
    SetConsoleTextAttribute(color, 15);
}

void boyle3(double* p2, double* v2, double* p1) {
    double v1;

    cout << endl << endl;
    cout << setw(82) << "Formula for finding the initial volume (v1): " << endl << endl;
    cout << setw(68) << "v1 = (p2 * v2) / p1" << endl << endl;
    cout << setw(79) << "Note: Pressure must be in Pascals." << endl << endl << endl;
    cout << setw(79) << "Note: Volume must be in cubic meters." << endl << endl << endl;

    // Prompts the user to input needed values
    cout << setw(65) << "Enter the Value of p2 (Final Pressure): ";
    cin >> *p2;

    cout << endl << endl;

    cout << setw(65) << "Enter the Value of v2 (Final Volume): ";
    cin >> *v2;

    cout << endl << endl;

    cout << setw(65) << "Enter the Value of p1 (Initial Pressure): ";
    cin >> *p1;

    // Calculate v1
    v1 = (*p2 * *v2) / *p1;

    system("CLS");
    cout << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << setw(66) << "v1 = (p2 * v2) / " << *p1 << endl << endl;
    cout << setw(55) << "v1 = (" << *p2 << " * " << *v2 << ") / " << *p1 << endl << endl;
    cout << setw(55) << "v1 = " << v1 << " " << units[0][0] << endl << endl << endl;
    SetConsoleTextAttribute(color, 11);
    cout << setw(80) << "Therefore the value of the initial volume (v1) is " << v1 << " " << units[0][0];
    SetConsoleTextAttribute(color, 15);
}

void boyle4(double* p1, double* v1, double* p2) {
    double v2;

    cout << endl << endl;
    cout << setw(82) << "Formula for finding the final volume (v2): " << endl << endl;
    cout << setw(68) << "v2 = (p1 * v1) / p2" << endl << endl;
    cout << setw(79) << "Note: Pressure must be in Pascals." << endl << endl << endl;
    cout << setw(79) << "Note: Volume must be in cubic meters." << endl << endl << endl;

    // Prompts the user to input needed values
    cout << setw(65) << "Enter the Value of p1 (Initial Pressure): ";
    cin >> *p1;

    cout << endl << endl;

    cout << setw(65) << "Enter the Value of v1 (Initial Volume): ";
    cin >> *v1;

    cout << endl << endl;

    cout << setw(65) << "Enter the Value of p2 (Final Pressure): ";
    cin >> *p2;

    // Calculate v2
    v2 = (*p1 * *v1) / *p2;

    system("CLS");
    cout << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << setw(66) << "v2 = (p1 * v1) / " << *p2 << endl << endl;
    cout << setw(55) << "v2 = (" << *p1 << " * " << *v1 << ") / " << *p2 << endl << endl;
    cout << setw(55) << "v2 = " << v2 << " " << units[0][0] << endl << endl << endl;
    SetConsoleTextAttribute(color, 11);
    cout << setw(80) << "Therefore the value of the final volume (v2) is " << v2 << " " << units[0][0];
    SetConsoleTextAttribute(color, 15);
}

void lussac1(double* p2, double* t2, double* t1) {
    double p1;

    cout << endl << endl;
    cout << setw(82) << "Formula for finding the initial pressure (p1): " << endl << endl;
    cout << setw(68) << "p1 = (p2 / t2) * t1" << endl << endl;
    cout << setw(79) << "Note: Temperature must be in Kelvin Unit." << endl << endl << endl;
    cout << setw(79) << "Note: Pressure must be in Pascals." << endl << endl << endl;

    // Prompts the user to input needed values
    cout << setw(65) << "Enter the Value of p2 (Final Pressure): ";
    cin >> *p2;

    cout << endl << endl;

    cout << setw(65) << "Enter the Value of t2 (Final Temperature): ";
    cin >> *t2;

    cout << endl << endl;

    cout << setw(65) << "Enter the Value of t1 (Initial Temperature): ";
    cin >> *t1;

    // Calculate p1
    p1 = (*p2 / *t2) * *t1;

    system("CLS");
    cout << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << setw(66) << "p1 = (p2 / t2) * " << *t1 << endl << endl;
    cout << setw(55) << "p1 = (" << *p2 << " / t2) * " << *t1 << endl << endl;
    cout << setw(55) << "p1 = (" << *p2 << " / " << *t2 << ") * " << *t1 << endl << endl;
    cout << setw(52) << p1 << " = (" << *p2 << " / " << *t2 << ") * " << *t1 << endl << endl;
    cout << setw(55) << "p1 = " << p1 << " " << units[1][0] << endl << endl << endl;
    SetConsoleTextAttribute(color, 11);
    cout << setw(80) << "Therefore the value of the initial pressure (p1) is " << p1 << " " << units[1][0];
    SetConsoleTextAttribute(color, 15);
}

void lussac2(double* p1, double* t1, double* t2) {
    double p2;

    cout << endl << endl;
    cout << setw(82) << "Formula for finding the final pressure (p2): " << endl << endl;
    cout << setw(68) << "p2 = (p1 / t1) * t2" << endl << endl;
    cout << setw(79) << "Note: Temperature must be in Kelvin Unit." << endl << endl << endl;
    cout << setw(79) << "Note: Pressure must be in Pascals." << endl << endl << endl;

    // Prompts the user to input needed values
    cout << setw(65) << "Enter the Value of p1 (Initial Pressure): ";
    cin >> *p1;

    cout << endl << endl;

    cout << setw(65) << "Enter the Value of t1 (Initial Temperature): ";
    cin >> *t1;

    cout << endl << endl;

    cout << setw(65) << "Enter the Value of t2 (Final Temperature): ";
    cin >> *t2;

    // Calculate p2
    p2 = (*p1 / *t1) * *t2;

    system("CLS");
    cout << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << setw(66) << "p2 = (p1 / t1) * " << *t2 << endl << endl;
    cout << setw(55) << "p2 = (" << *p1 << " / t1) * " << *t2 << endl << endl;
    cout << setw(55) << "p2 = (" << *p1 << " / " << *t1 << ") * " << *t2 << endl << endl;
    cout << setw(52) << p2 << " = (" << *p1 << " / " << *t1 << ") * " << *t2 << endl << endl;
    cout << setw(55) << "p2 = " << p2 << " " << units[1][0] << endl << endl << endl;
    SetConsoleTextAttribute(color, 11);
    cout << setw(80) << "Therefore the value of the final pressure (p2) is " << p2 << " " << units[1][0];
    SetConsoleTextAttribute(color, 15);
}

void lussac3(double* p1, double* p2, double* t2) {
    double t1;

    cout << endl << endl;
    cout << setw(82) << "Formula for finding the initial temperature (t1): " << endl << endl;
    cout << setw(68) << "t1 = p1 / (p2 / t2)" << endl << endl;
    cout << setw(79) << "Note: Temperature must be in Kelvin Unit." << endl << endl << endl;
    cout << setw(79) << "Note: Pressure must be in Pascals." << endl << endl << endl;

    // Prompts the user to input needed values
    cout << setw(65) << "Enter the Value of p1 (Initial Pressure): ";
    cin >> *p1;

    cout << endl << endl;

    cout << setw(65) << "Enter the Value of p2 (Final Pressure): ";
    cin >> *p2;

    cout << endl << endl;

    cout << setw(65) << "Enter the Value of t2 (Final Temperature): ";
    cin >> *t2;

    // Calculate t1
    t1 = *p1 / (*p2 / *t2);

    system("CLS");
    cout << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << setw(55) << "t1 = " << *p1 << " / (p2 / t2)" << endl << endl;
    cout << setw(55) << "t1 = " << *p1 << " / (" << *p2 << " / t2)" << endl << endl;
    cout << setw(55) << "t1 = " << *p1 << " / (" << *p2 << " / " << *t2 << ")" << endl << endl;
    cout << setw(52) << t1 << " = " << *p1 << " / (" << *p2 << " / " << *t2 << ")" << endl << endl;
    cout << setw(55) << "t1 = " << t1 << " " << units[0][1] << endl << endl << endl;
    SetConsoleTextAttribute(color, 11);
    cout << setw(80) << "Therefore the value of the initial temperature (t1) is " << t1 << " " << units[0][1];
    SetConsoleTextAttribute(color, 15);
}

void lussac4(double* p1, double* p2, double* t1) {
    double t2;

    cout << endl << endl;
    cout << setw(82) << "Formula for finding the final temperature (t2): " << endl << endl;
    cout << setw(68) << "t2 = p2 / (p1 / t1)" << endl << endl;
    cout << setw(79) << "Note: Temperature must be in Kelvin Unit." << endl << endl << endl;
    cout << setw(79) << "Note: Pressure must be in Pascals." << endl << endl << endl;

    // Prompts the user to input needed values
    cout << setw(65) << "Enter the Value of p2 (Final Pressure): ";
    cin >> *p2;

    cout << endl << endl;

    cout << setw(65) << "Enter the Value of p1 (Initial Pressure): ";
    cin >> *p1;

    cout << endl << endl;

    cout << setw(65) << "Enter the Value of t1 (Initial Temperature): ";
    cin >> *t1;

    // Calculate t2
    t2 = *p2 / (*p1 / *t1);

    system("CLS");
    cout << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << setw(55) << "t2 = " << *p2 << " / (p1 / t1)" << endl << endl;
    cout << setw(55) << "t2 = " << *p2 << " / (" << *p1 << " / t1)" << endl << endl;
    cout << setw(55) << "t2 = " << *p2 << " / (" << *p1 << " / " << *t1 << ")" << endl << endl;
    cout << setw(52) << t2 << " = " << *p2 << " / (" << *p1 << " / " << *t1 << ")" << endl << endl;
    cout << setw(55) << "t2 = " << t2 << " " << units[0][1] << endl << endl << endl;
    SetConsoleTextAttribute(color, 11);
    cout << setw(80) << "Therefore the value of the final temperature (t2) is " << t2 << " " << units[0][1];
    SetConsoleTextAttribute(color, 15);
}

void avogadro1(double* v2, double* n1, double* n2) {
    double v1;

    cout << endl << endl;
    cout << setw(82) << "Formula for finding the initial volume (v1): " << endl << endl;
    cout << setw(68) << "v1 = (v2 / n2) * n1" << endl << endl;
    cout << setw(79) << "Note: Volume must be in cubic meters." << endl << endl << endl;
    cout << setw(79) << "Note: Number of moles must be in mol." << endl << endl << endl;

    // Prompts the user to input needed values
    cout << setw(65) << "Enter the Value of v2 (Final Volume): ";
    cin >> *v2;

    cout << endl << endl;

    cout << setw(65) << "Enter the Value of n2 (Final Moles): ";
    cin >> *n2;

    cout << endl << endl;

    cout << setw(65) << "Enter the Value of n1 (Initial Moles): ";
    cin >> *n1;

    // Calculate v1
    v1 = (*v2 / *n2) * *n1;

    system("CLS");
    cout << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << setw(66) << "v1 = (v2 / n2) * " << *n1 << endl << endl;
    cout << setw(55) << "v1 = (" << *v2 << " / n2) * " << *n1 << endl << endl;
    cout << setw(55) << "v1 = (" << *v2 << " / " << *n2 << ") * " << *n1 << endl << endl;
    cout << setw(52) << v1 << " = (" << *v2 << " / " << *n2 << ") * " << *n1 << endl << endl;
    cout << setw(55) << "v1 = " << v1 << " " << units[0][0] << endl << endl << endl;
    SetConsoleTextAttribute(color, 11);
    cout << setw(80) << "Therefore the value of the initial volume (v1) is " << v1 << " " << units[0][0];
    SetConsoleTextAttribute(color, 15);
}

void avogadro2(double* v1, double* n1, double* n2) {
    double v2;

    cout << endl << endl;
    cout << setw(82) << "Formula for finding the final volume (v2): " << endl << endl;
    cout << setw(68) << "v2 = (v1 / n1) * n2" << endl << endl;
    cout << setw(79) << "Note: Volume must be in cubic meters." << endl << endl << endl;
    cout << setw(79) << "Note: Number of moles must be in mol." << endl << endl << endl;

    // Prompts the user to input needed values
    cout << setw(65) << "Enter the Value of v1 (Initial Volume): ";
    cin >> *v1;

    cout << endl << endl;

    cout << setw(65) << "Enter the Value of n1 (Initial Moles): ";
    cin >> *n1;

    cout << endl << endl;

    cout << setw(65) << "Enter the Value of n2 (Final Moles): ";
    cin >> *n2;

    // Calculate v2
    v2 = (*v1 / *n1) * *n2;

    system("CLS");
    cout << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << setw(66) << "v2 = (v1 / n1) * " << *n2 << endl << endl;
    cout << setw(55) << "v2 = (" << *v1 << " / n1) * " << *n2 << endl << endl;
    cout << setw(55) << "v2 = (" << *v1 << " / " << *n1 << ") * " << *n2 << endl << endl;
    cout << setw(52) << v2 << " = (" << *v1 << " / " << *n1 << ") * " << *n2 << endl << endl;
    cout << setw(55) << "v2 = " << v2 << " " << units[0][0] << endl << endl << endl;
    SetConsoleTextAttribute(color, 11);
    cout << setw(80) << "Therefore the value of the final volume (v2) is " << v2 << " " << units[0][0];
    SetConsoleTextAttribute(color, 15);
}

void avogadro3(double* v1, double* v2, double* n2) {
    double n1;

    cout << endl << endl;
    cout << setw(82) << "Formula for finding the initial moles (n1): " << endl << endl;
    cout << setw(68) << "n1 = v1 / (v2 / n2)" << endl << endl;
    cout << setw(79) << "Note: Volume must be in cubic meters." << endl << endl << endl;
    cout << setw(79) << "Note: Number of moles must be in mol." << endl << endl << endl;

    // Prompts the user to input needed values
    cout << setw(65) << "Enter the Value of v1 (Initial Volume): ";
    cin >> *v1;

    cout << endl << endl;

    cout << setw(65) << "Enter the Value of v2 (Final Volume): ";
    cin >> *v2;

    cout << endl << endl;

    cout << setw(65) << "Enter the Value of n2 (Final Moles): ";
    cin >> *n2;

    // Calculate n1
    n1 = *v1 / (*v2 / *n2);

    system("CLS");
    cout << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << setw(55) << "n1 = " << *v1 << " / (v2 / n2)" << endl << endl;
    cout << setw(55) << "n1 = " << *v1 << " / (" << *v2 << " / n2)" << endl << endl;
    cout << setw(55) << "n1 = " << *v1 << " / (" << *v2 << " / " << *n2 << ")" << endl << endl;
    cout << setw(52) << n1 << " = " << *v1 << " / (" << *v2 << " / " << *n2 << ")" << endl << endl;
    cout << setw(55) << "n1 = " << n1 << " " << units[1][1] << endl << endl << endl;
    SetConsoleTextAttribute(color, 11);
    cout << setw(80) << "Therefore the value of the initial moles (n1) is " << n1 << " " << units[1][1];
    SetConsoleTextAttribute(color, 15);
}

void avogadro4(double* v1, double* v2, double* n1) {
    double n2;

    cout << endl << endl;
    cout << setw(82) << "Formula for finding the final moles (n2): " << endl << endl;
    cout << setw(68) << "n2 = v2 / (v1 / n1)" << endl << endl;
    cout << setw(79) << "Note: Volume must be in cubic meters." << endl << endl << endl;
    cout << setw(79) << "Note: Number of moles must be in mol." << endl << endl << endl;

    // Prompts the user to input needed values
    cout << setw(65) << "Enter the Value of v2 (Final Volume): ";
    cin >> *v2;

    cout << endl << endl;

    cout << setw(65) << "Enter the Value of v1 (Initial Volume): ";
    cin >> *v1;

    cout << endl << endl;

    cout << setw(65) << "Enter the Value of n1 (Initial Moles): ";
    cin >> *n1;

    // Calculate n2
    n2 = *v2 / (*v1 / *n1);

    system("CLS");
    cout << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << setw(55) << "n2 = " << *v2 << " / (v1 / n1)" << endl << endl;
    cout << setw(55) << "n2 = " << *v2 << " / (" << *v1 << " / n1)" << endl << endl;
    cout << setw(55) << "n2 = " << *v2 << " / (" << *v1 << " / " << *n1 << ")" << endl << endl;
    cout << setw(52) << n2 << " = " << *v2 << " / (" << *v1 << " / " << *n1 << ")" << endl << endl;
    cout << setw(55) << "n2 = " << n2 << " " << units[1][1] << endl << endl << endl;
    SetConsoleTextAttribute(color, 11);
    cout << setw(80) << "Therefore the value of the final moles (n2) is " << n2 << " " << units[1][1];
    SetConsoleTextAttribute(color, 15);
}

void idealgas1(double* n, double* v, double* t) {
    double p; // Pressure

    cout << endl << endl;
    cout << setw(82) << "Formula for finding the pressure (p): " << endl << endl;
    cout << setw(68) << "p = (n * R * t) / v" << endl << endl;
    cout << setw(79) << "Note: Pressure must be in Pascals." << endl << endl << endl;
    cout << setw(79) << "Note: Volume must be in cubic meters." << endl << endl << endl;
    cout << setw(79) << "Note: Temperature must be in Kelvin Unit." << endl << endl << endl;

    // Prompts the user to input needed values
    cout << setw(65) << "Enter the Value of n (Number of Moles): ";
    cin >> *n;

    cout << endl << endl;

    cout << setw(65) << "Enter the Value of v (Volume): ";
    cin >> *v;

    cout << endl << endl;

    cout << setw(65) << "Enter the Value of t (Temperature): ";
    cin >> *t;

    // Calculate p
    const double R = 8.314; // Ideal gas constant in J/(mol·K)
    p = (*n * R * *t) / *v;

    system("CLS");
    cout << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << setw(66) << "p = (n * R * t) / v" << endl << endl;
    cout << setw(55) << "p = (" << *n << " * " << R << " * " << *t << ") / " << *v << endl << endl;
    cout << setw(55) << "p = " << p << " " << units[1][0] << endl << endl << endl;
    SetConsoleTextAttribute(color, 11);
    cout << setw(80) << "Therefore the value of the pressure (p) is " << p << " " << units[1][0];
    SetConsoleTextAttribute(color, 15);
}

void idealgas2(double* n, double* t, double* p) {
    double v; // Volume

    cout << endl << endl;
    cout << setw(82) << "Formula for finding the volume (v): " << endl << endl;
    cout << setw(68) << "v = (n * R * t) / p" << endl << endl;
    cout << setw(79) << "Note: Volume must be in cubic meters." << endl << endl << endl;
    cout << setw(79) << "Note: Temperature must be in Kelvin Unit." << endl << endl << endl;

    // Prompts the user to input needed values
    cout << setw(65) << "Enter the Value of n (Number of Moles): ";
    cin >> *n;

    cout << endl << endl;

    cout << setw(65) << "Enter the Value of t (Temperature): ";
    cin >> *t;

    cout << endl << endl;

    cout << setw(65) << "Enter the Value of p (Pressure): ";
    cin >> *p;

    // Calculate v
    const double R = 8.314; // Ideal gas constant in J/(mol·K)
    v = (*n * R * *t) / *p;

    system("CLS");
    cout << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << setw(66) << "v = (n * R * t) / p" << endl << endl;
    cout << setw(55) << "v = (" << *n << " * " << R << " * " << *t << ") / " << *p << endl << endl;
    cout << setw(55) << "v = " << v << " " << units[0][0] << endl << endl << endl;
    SetConsoleTextAttribute(color, 11);
    cout << setw(80) << "Therefore the value of the volume (v) is " << v << " " << units[0][0];
    SetConsoleTextAttribute(color, 15);
}

void idealgas3(double* p, double* v, double* t) {
    double n; // Number of moles

    cout << endl << endl;
    cout << setw(82) << "Formula for finding the number of moles (n): " << endl << endl;
    cout << setw(68) << "n = (p * v) / (R * t)" << endl << endl;
    cout << setw(79) << "Note: Volume must be in cubic meters." << endl << endl << endl;
    cout << setw(79) << "Note: Temperature must be in Kelvin Unit." << endl << endl << endl;

    // Prompts the user to input needed values
    cout << setw(65) << "Enter the Value of p (Pressure): ";
    cin >> *p;

    cout << endl << endl;

    cout << setw(65) << "Enter the Value of v (Volume): ";
    cin >> *v;

    cout << endl << endl;

    cout << setw(65) << "Enter the Value of t (Temperature): ";
    cin >> *t;

    // Calculate n
    const double R = 8.314; // Ideal gas constant in J/(mol·K)
    n = (*p * *v) / (R * *t);

    system("CLS");
    cout << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << setw(66) << "n = (p * v) / (R * t)" << endl << endl;
    cout << setw(55) << "n = (" << *p << " * " << *v << ") / (" << R << " * " << *t << ")" << endl << endl;
    cout << setw(55) << "n = " << n << " " << units[1][1] << endl << endl << endl;
    SetConsoleTextAttribute(color, 11);
    cout << setw(80) << "Therefore the value of the number of moles (n) is " << n << " " << units[1][1];
    SetConsoleTextAttribute(color, 15);
}

void idealgas4(double* p, double* v, double* n) {
    double t; // Temperature

    cout << endl << endl;
    cout << setw(82) << "Formula for finding the temperature (t): " << endl << endl;
    cout << setw(68) << "t = (p * v) / (n * R)" << endl << endl;
    cout << setw(79) << "Note: Volume must be in cubic meters." << endl << endl << endl;
    cout << setw(79) << "Note: Pressure must be in Pascals." << endl << endl << endl;

    // Prompts the user to input needed values
    cout << setw(65) << "Enter the Value of p (Pressure): ";
    cin >> *p;

    cout << endl << endl;

    cout << setw(65) << "Enter the Value of v (Volume): ";
    cin >> *v;

    cout << endl << endl;

    cout << setw(65) << "Enter the Value of n (Number of Moles): ";
    cin >> *n;

    // Calculate t
    const double R = 8.314; // Ideal gas constant in J/(mol·K)
    t = (*p * *v) / (*n * R);

    system("CLS");
    cout << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << setw(66) << "t = (p * v) / (n * R)" << endl << endl;
    cout << setw(55) << "t = (" << *p << " * " << *v << ") / (" << *n << " * " << R << ")" << endl << endl;
    cout << setw(55) << "t = " << t << " " << units[0][1] << endl << endl << endl;
    SetConsoleTextAttribute(color, 11);
    cout << setw(80) << "Therefore the value of the temperature (t) is " << t << " " << units[0][1];
    SetConsoleTextAttribute(color, 15);
}