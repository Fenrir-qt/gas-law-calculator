#include <iostream>
#include <string>
#include <iomanip>
#include <conio.h>
#include <windows.h>
#include "formula.h" 
using namespace std;

//colors of console//

HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

//units//
string meters = "m^3";
string kelvin = "k";
string pascals = "Pa";
string mole = "mol";
string units[2][2] = {{meters,kelvin},{pascals, mole}};

int main() {
    int select, choice;
    double charlesLaw, boylesLaw, avogadrosLaw, gaylussacLaw, idealgasLaw;
    double result;
    double v1, v2; 
    double t1, t2; 
    double p1, p2; 
    double n1, n2; 
    char go;

    cout << endl << endl << endl << endl << endl << endl << endl;
    SetConsoleTextAttribute(color, 11);
    cout << "         00000000000    00000000000    0000000000000         0000              000000000000   0000    0000    0000" << endl;
    cout << "        0000000000000  0000000000000  00000     00000        0000             00000000000000  0000    0000    0000" << endl;
    cout << "       0000      0000  0000     0000  0000       0000        0000             0000      0000  0000    0000    0000" << endl;
    SetConsoleTextAttribute(color, 3);
    cout << "       0000            0000     0000  0000                   0000             0000      0000  0000    0000    0000" << endl;
    cout << "       0000            0000     0000  0000                   0000             0000      0000  0000    0000    0000" << endl;
    cout << "       0000    000000  0000     0000  0000000000000          0000             0000      0000  0000    0000    0000" << endl;
    cout << "       0000    000000  0000000000000   0000000000000         0000             00000000000000  0000    0000    0000" << endl;
    SetConsoleTextAttribute(color, 9);
    cout << "       0000       000  0000     0000             0000        0000          0  0000      0000  0000    0000    0000" << endl;
    cout << "       0000       000  0000     0000  0000       0000        0000         00  0000      0000  0000    0000    0000" << endl;
    cout << "        000000000000   0000     0000  00000     00000        00000       000  0000      0000   0000  000000  0000" << endl;
    cout << "         0000000000    0000     0000   0000000000000         000000000000000  0000      0000    0000000  0000000" << endl << endl << endl;
    SetConsoleTextAttribute(color, 15);

    cout << setw(75) << "Press any key to continue . . . . .";
    getch();

    do {
        system("CLS");
        cout << endl << endl << endl << endl << endl << endl;
        SetConsoleTextAttribute(color, 11);
        cout << setw(80) << "========== GAS LAW CALCULATOR ==========" << endl << endl;
        SetConsoleTextAttribute(color, 15);
        cout << setw(92) << "--------------- Our Calculator covers 5 Gas Laws. ---------------" << endl << endl;
        cout << setw(78) << "----- The following gas laws are: -----" << endl << endl;
        cout << setw(54) << "----- Charles' Law -----" << "          " << "----- Boyle's Law -----" << endl << endl;
        cout << setw(54) << "----- Gay - Lussac Law -----" << "          " << "----- Avogadro's Law -----" << endl << endl;
        cout << setw(70) << "----- Ideal Gas Law -----" << endl << endl << endl;
        cout << setw(75) << "Press any key to continue . . . . .";
        getch();

        system("CLS");
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << setw(85) << "Which of the following laws would you like to select?" << endl << endl << endl;
        cout << setw(54) << "[Enter 1 for Charles' Law]" << "          " << "[Enter 2 for Boyle's Law]" << endl << endl << endl;
        cout << setw(54) << "[Enter 3 for Gay - Lussac Law]" << "          " << "[Enter 4 for Avogadro's Law]" << endl << endl << endl;
        cout << setw(54) << "[Enter 5 for Ideal Gas Law]" << "          " << "[6.Exit Program]" << endl << endl << endl;

        cout << setw(65) << "Enter Number Of Choice: ";
        cin >> select;

        if (select == 1) {
            system("CLS");
            cout << endl << endl << endl << endl << endl << endl << endl << endl;
            SetConsoleTextAttribute(color, 11);
            cout << setw(78) << "=============== Charles' Law ===============" << endl << endl;
            SetConsoleTextAttribute(color, 15);
            cout << setw(76) << "Charles' Law Equation = (v1/t1) = (v2/t2)" << endl << endl << endl;
            cout << setw(88) << "Which variable is missing and would like to get the value of?" << endl << endl << endl;
            cout << setw(54) << "[Enter 1 for v1 (Initial Volume)]" << "     " << "[Enter 2 for v2 (Final Volume)]" << endl << endl;
            cout << setw(54) << "[Enter 3 for t1 (Initial Temperature)]" << "     " << "[Enter 4 for t2 (Final Temperature)]" << endl << endl << endl;
            cout << setw(63) << "Enter Number of Choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    system("CLS");
                    charles1(&v2, &t1, &t2);
                    break;

                case 2:
                    system("CLS");
                    charles2(&v1, &t1, &t2);
                    break;

                case 3:
                    system("CLS");
                    charles3(&v1, &v2, &t2);
                    break;

                case 4:
                    system("CLS");
                    charles4(&v1, &v2, &t1);
                    break;

                default:
                    system("CLS");
                    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
                    cout << setw(75) << "Invalid Choice. Please Try Again" << endl;
            }
        } else if (select == 2) {
            system("CLS");
            cout << endl << endl << endl << endl << endl << endl << endl << endl;
            SetConsoleTextAttribute(color, 11);
            cout << setw(78) << "=============== Boyle's Law ===============" << endl << endl;
            SetConsoleTextAttribute(color, 15);
            cout << setw(76) << "Boyle's Law Equation: (p1v1) = (p2v2)" << endl << endl << endl;
            cout << setw(88) << "Which variable is missing and would like to get the value of?" << endl << endl << endl;
            cout << setw(54) << "[Enter 1 for P1 (Initial Pressure)]" << "     " << "[Enter 2 for P2 (Final Pressure)]" << endl << endl;
            cout << setw(54) << "[Enter 3 for V1 (Initial Volume)]" << "     " << "[Enter 4 for V2 (Final Volume)]" << endl << endl << endl;
            cout << setw(63) << "Enter Number of Choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    system("CLS");
                    boyle1(&p2, &v1, &v2);
                    break;

                case 2:
                    system("CLS");
                    boyle2(&p1, &v1, &v2);
                    break;

                case 3:
                    system("CLS");
                    boyle3(&p2, &v2, &p1);
                    break;

                case 4:
                    system("CLS");
                    boyle4(&p1, &v1, &p2);
                    break;

                default:
                    system("CLS");
                    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
                    cout << setw(75) << "Invalid Choice. Please Try Again" << endl;
            }
        } else if (select == 3) {
            system("CLS");
            cout << endl << endl << endl << endl << endl << endl << endl << endl;
            SetConsoleTextAttribute(color, 11);
            cout << setw(83) << "=============== Gay - Lussac's Law ===============" << endl << endl;
            SetConsoleTextAttribute(color, 15);
            cout << setw(79) << "Gay Lussac's Law Equation: (P1/T1)=(P2/T2)" << endl << endl << endl;
            cout << setw(88) << "Which variable is missing and would like to get the value of?" << endl << endl << endl;
            cout << setw(54) << "[Enter 1 for p1 (Initial Pressure)]" << "     " << "[Enter 2 for p2 (Final Pressure)]" << endl << endl;
            cout << setw(54) << "[Enter 3 for t1 (Initial Temperature)]" << "     " << "[Enter 4 for t2 (Final Temperature)]" << endl << endl << endl;
            cout << setw(63) << "Enter Number of Choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    system("CLS");
                    lussac1(&p2, &t2, &t1);
                    break;

                case 2:
                    system("CLS");
                    lussac2(&p1, &t1, &t2);
                    break;

                case 3:
                    system("CLS");
                    lussac3(&p1, &p2, &t2);
                    break;

                case 4:
                    system("CLS");
                    lussac4(&p2, &p1, &t1);
                    break;

                default:
                    system("CLS");
                    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
                    cout << setw(75) << "Invalid Choice. Please Try Again" << endl;
            }
        } else if (select == 4) {
            system("CLS");
            cout << endl << endl << endl << endl << endl << endl << endl << endl;
            SetConsoleTextAttribute(color, 11);
            cout << setw(78) << "=============== Avogadro's Law ===============" << endl << endl;
            SetConsoleTextAttribute(color, 15);
            cout << setw(76) << "Avogadro's Law Equation: (v1/n1) = (v2/n2)" << endl << endl << endl;
            cout << setw(88) << "Which variable is missing and would like to get the value of?" << endl << endl << endl;
            cout << setw(54) << "[Enter 1 for v1 (Initial Volume)]" << "     " << "[Enter 2 for v2 (Final Volume)]" << endl << endl;
            cout << setw(54) << "[Enter 3 for N1 (Initial Amount of Gas)]" << "     " << "[Enter 4 for N2 (Final Amount of Gas)]" << endl << endl << endl;
            cout << setw(63) << "Enter Number of Choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    system("CLS");
                    avogadro1(&v2, &n1, &n2);
                    break;

                case 2:
                    system("CLS");
                    avogadro2(&v1, &n1, &n2);
                    break;

                case 3:
                    system("CLS");
                    avogadro3(&v1, &v2, &n2);
                    break;

                case 4:
                    system("CLS");
                    avogadro4(&v1, &v2, &n1);
                    break;

                default:
                    system("CLS");
                    cout << endl << endl << endl << endl << endl << endl << endl << endl;
                    cout << setw(80) << "Invalid Choice. Please Try Again" << endl;
            }
        } else if (select == 5) {
            system("CLS");
            cout << endl << endl << endl << endl << endl << endl << endl << endl;
            SetConsoleTextAttribute(color, 11);
            cout << setw(79) << "=============== Ideal Gas Law ===============" << endl << endl;
            SetConsoleTextAttribute(color, 15);
            cout << setw(74) << "Ideal Gas Law Equation: PV = nRT" << endl << endl << endl;
            cout << setw(88) << "Which variable is missing and would like to get the value of?" << endl << endl << endl;
            cout << setw(54) << "[Enter 1 for P (Pressure)]" << "     " << "[Enter 2 for V (Volume)]" << endl << endl;
            cout << setw(54) << "[Enter 3 for n (Substance)]" << "     " << "[Enter 4 for T (Temperature)]" << endl << endl << endl;
            cout << setw(63) << "Enter Number of Choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    system("CLS");
                    idealgas1(&n1, &v1, &t1);
                    break;

                case 2:
                    system("CLS");
                    idealgas2(&n1, &t1, &p1);
                    break;

                case 3:
                    system("CLS");
                    idealgas3(&p1, &v1, &t1);
                    break;

                case 4:
                    system("CLS");
                    idealgas4(&p1, &v1, &n1);
                    break;

                default:
                    system("CLS");
                    cout << endl << endl << endl << endl << endl << endl << endl << endl;
                    cout << setw(75) << "Invalid Choice. Please Try Again" << endl;
            }
        } else if (select == 6) {
            return 0;
        } else {
            cout << setw(80) << "Invalid Input. Please Try Again";
        }

        cout << endl << endl;
        cout << setw(72) << "Clear result and Try Again?[Y/N]: ";
        cin >> go;

    } while (go == 'Y' || go == 'y');
    return 0;
}





