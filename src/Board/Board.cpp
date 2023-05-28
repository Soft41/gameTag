#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include "Board.h"

using namespace std;

Board::Board(short x, short y) {
    width = x;
    height = y;

    int numbers[height*width-1];

    for (int i = 0; i < height * width; i++) {
        numbers[i] = i;
    }

    srand(unsigned(std::time(0)));
    random_shuffle(numbers, numbers + height * width - 1);

    short index = 0;
    for (short i = 0; i < height; i++) {
        for (short j = 0; j < width; j++) {
            if (numbers[index] == 0) {
                emptyX = i;
                emptyY = j;
            }
            cells[i][j] = Cell(i,j,numbers[index]);
            index++;
        }
    }
}

void Board::display() {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
//            if (cells[i][j].getValue() == 0) {
//                 cout << " ";
//            } else {
//                cout << cells[i][j].getValue() << "\t";
//            }
            cout << cells[i][j].getValue() << "\t";
        }
        cout << endl;
    }
}

bool Board::isSolved() {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (i == height - 1 && j == width - 1) {
                if (cells[i][j].getValue() != 0) {
                    return false;
                }
            } else if (cells[i][j].getValue() != i * width + j + 1) {
                return false;
            }
        }
    }
    cout << "Solved \n";
    return true;
}

bool Board::moveEmptyCell(short xDiff, short yDiff) {
    short newEmptyX = emptyX + xDiff;
    short newEmptyY = emptyY + yDiff;

    if (newEmptyX < 0 || newEmptyX >= height || newEmptyY < 0 || newEmptyY >= width) {
        return false;
    }

    Cell &newEmptyCell = cells[newEmptyX][newEmptyY];

    short tempValue = newEmptyCell.getValue();

    cells[emptyX][emptyY].setValue(tempValue);

    newEmptyCell.setValue(0);

    cells[newEmptyX][newEmptyY].setPositionY(emptyY);
    cells[newEmptyX][newEmptyY].setPositionX(emptyX);

    emptyX = newEmptyX;
    emptyY = newEmptyY;

    newEmptyCell.setPositionX(emptyX);
    newEmptyCell.setPositionY(emptyY);
}
