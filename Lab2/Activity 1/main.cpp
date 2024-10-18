//ELEC/XJEL2645
// Dr Craig A. Evans and Dr Tim J. Amsdon

#include <iostream>
#include "Circle.h"

int main() {
    Circle circle(1.0);
    float area = circle.get_area();
    float circumference = circle.get_circumference();
    std::cout << "The circle has an area of " << area << " m^2.\n";
    std::cout << "The circle has a circumference of " << circumference << " m\n";
    return 0;
}
