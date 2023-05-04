//
// Created by Ярослав on 04.05.2023.
//

#ifndef GAMETAG_CELL_H
#define GAMETAG_CELL_H


class Cell {
private:
    short value;
    short x;
    short y;
public:
    Cell(short setValue, short xPosition, short yPosition);
    short getValue();
    short getPositionX();
    short getPositionY();
    void setValue(short setValue);
};


#endif //GAMETAG_CELL_H