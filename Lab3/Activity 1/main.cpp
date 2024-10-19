//ELEC/XJEL2645
// Dr Craig A. Evans and Dr Tim J. Amsdon

#include <cmath>
#include <iostream>

const double PI = 3.14159265359;

// function protoype/declaration needs to come before it is used in main()
void circular(double radius, double &area, double &volume);

void currency(double GBP, double &USD, double &Euro, double &Yuan, double &Naira, double &Ruble);

int main() {
  double area, volume, USD, Euro, Yuan, Naira, Ruble;
  circular(1.0, area, volume);
  currency(10, USD, Euro, Yuan, Naira, Ruble);
  std::cout << "USD = " << USD << ", Euro = " << Euro << ", Yuan = " << Yuan
  << ", Naira = " << Naira << ", Ruble = " << Ruble << std::endl;
  std::cout << "Area = " << area << ", Volume = " << volume << std::endl;
}

// function definition (i.e. the actual code to do the calculations)
void circular(double radius, double &area, double &volume) {
  area = PI * pow(radius, 2.0);
  volume = (4.0 / 3.0) * PI * pow(radius, 3.0);
}

void currency(double GBP, double &USD, double &Euro, double &Yuan, double &Naira, double &Ruble) {
  Euro = 1.2 * GBP;
  Naira = 2133.27 * GBP;
  USD = 1.3 * GBP;
  Ruble = 125 * GBP;
  Yuan = 9.27 * GBP;
}
