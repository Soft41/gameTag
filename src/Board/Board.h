//
// Created by Ярослав on 04.05.2023.
//

#ifndef GAMETAG_BOARD_H
#define GAMETAG_BOARD_H
#include "./../Cell/Cell.h"

const int MAX_HEIGHT = 4;
const int MAX_WIDTH = 4;

class Board {
private:
    short height;
    short width;
    short emptyX;
    short emptyY;
    Cell cells[MAX_HEIGHT][MAX_WIDTH];
public:
    Board(int x, int y);
    void display();
};


#endif //GAMETAG_BOARD_H
