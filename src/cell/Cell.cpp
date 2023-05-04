#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#include "Cell.h"

Cell::Cell(short setValue, short xPosition, short yPosition) {
    value = setValue;
    x = xPosition;
    y = yPosition;
};

short Cell::getValue() {
    return value;
}

short Cell::getPositionX() {
    return x;
}

short Cell::getPositionY() {
    return y;
}

void Cell::setValue(short setValue) {
    value = setValue;
}