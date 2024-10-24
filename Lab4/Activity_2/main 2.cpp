//ELEC/XJEL2645 - Complex 
// Create a new project and write a program that:
// Prompts the user to enter a frequency (in Hertz) and a capacitor value (in Farads)



#include <iostream>
#include <complex>

using namespace std;

float pi = 3.14159;
float capacitance;
std::string unit;
float frequency;
float impedance;
std::complex<double> j(0, 1);
int main(){
    cout << "Please enter the capacitance: ";
    cin >> capacitance;
    cout << "Please enter 'milli', 'micro', 'nano', or 'pico'";
    cin >> unit;
    cout << "Please enter the frequency of the input signal: ";
    cin >> frequency;
    if(unit == "milli") {
        capacitance = capacitance/(10^3);
    }
    if(unit == "micro") {
        capacitance = capacitance/(10^6);
    }
    if(unit == "nano") {
        capacitance = capacitance/(10^9);
    }
    if(unit == "pico") {
        capacitance = capacitance/(10^12);
    }
    cout << capacitance << endl;
    impedance = 1 / (2 * pi * frequency * capacitance * j.imag());
    cout << "The impedance is: " << impedance;
}
