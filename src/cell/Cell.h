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
    Cell(short xPosition, short yPosition, short setValue);
    Cell();
    short getValue();
    short getPositionX();
    short getPositionY();
    void setPositionY(short yPosition);
    void setPositionX(short xPosition);
    void setValue(short setValue);
};


#endif //GAMETAG_CELL_H
