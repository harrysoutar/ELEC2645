//
// Created by Harry Soutar on 18/10/2024.
//

#include "Square.h"

Square::Square(const float x, const float y) : _x{x}, _y{y} {}

float Square::get_perimeter(){
    _perimeter = (2*_x)+(2*_y);
    return _perimeter;
}

float Square::get_area() {
    _area = _x*_y;
    return _area;
}