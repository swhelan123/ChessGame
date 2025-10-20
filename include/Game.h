#ifndef GAME_H
#define GAME_H

#include "Piece.h"

class Game {
public:
    Game();
    Piece board[8][8];
    void setupBoard();
};

#endif
