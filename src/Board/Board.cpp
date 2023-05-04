#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Board.h"

using namespace std;

Board::Board(int x, int y) {
    width = x;
    height = y;
    emptyX = 0;
    emptyY = 0;
    //Seed for srand
    srand(time(NULL));

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            int value = i * width * j + 1;
            if (value == width * height) {
                value = 0;
                emptyY = i;
                emptyY = j;
            }
            cells[i][j] = Cell(i,j,value);
        }
    }
}

void Board::display() {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (cells[i][j].getValue == 0) {
                 cout << " ";
            } else {
                cout << cells[i][j].getValue << " ";
            }
        }
        cout << endl;
    }
}

