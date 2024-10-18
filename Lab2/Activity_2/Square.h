//
// Created by Harry Soutar on 18/10/2024.
//

#ifndef SQUARE_H
#define SQUARE_H



class Square {
public:
    Square(float x, float y);
    float get_area();
    float get_perimeter();

private:
    float _x;
    float _y;
    float _perimeter;
    float _area;
};





#endif //SQUARE_H
