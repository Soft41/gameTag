#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#include "Cell.h"

Cell::Cell() {
    value = 0;
    x = 0;
    y = 0;
}

Cell::Cell(short xPosition, short yPosition,short setValue) {
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

void Cell::setPositionY(short yPosition) {
    y = yPosition;
};

void Cell::setPositionX(short xPosition) {
    x = xPosition;
}

void Cell::setValue(short setValue) {
    value = setValue;
}