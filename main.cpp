#include <iostream>
#include "src/Board/Board.cpp"
#include "src/Cell/Cell.cpp"
using namespace std;

int main() {
    Board board(3,7);
    board.display();

    char input;

    cout << "Enter the side of the movement (w/s/a/d) \n";

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
                cout << "Enter the side of the movement (w/s/a/d) \n";
                break;
        }
        board.display();
    }
    return 0;
}