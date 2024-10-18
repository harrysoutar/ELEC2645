
#include <iostream>
using namespace std;
#include "Square.h"

int main() {
    Square square(4, 8);
    float perimeter = square.get_perimeter();
    float area = square.get_area();
    cout << "The perimeter of the square is: " << perimeter << endl;
    cout << "The area of the square is: " << area << endl;
    return 0;
}
