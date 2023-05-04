#include <iostream>
#include "src/Board/Board.cpp"
#include "src/Cell/Cell.cpp"
using namespace std;

int main() {
    Board board(3,3);
    board.display();

    char input;

    cout << "Enter the side of the movement (left/right/up/down) \n";

    while(!board.isSolved()) {
        cin >> input;
        switch (input) {
            case 'w':
                board.moveEmptyCell(-1, 0);
                break;
            case 'a':
                board.moveEmptyCell(0, -1);
                break;
            case 's':
                board.moveEmptyCell(1, 0);
                break;
            case 'd':
                board.moveEmptyCell(0, 1);
                break;
            default:
                cout << "Enter the side of the movement (left/right/up/down) \n";
                break;
        }
        board.display();
    }
    return 0;
}