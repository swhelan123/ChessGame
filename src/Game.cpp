#include "Game.h"

Game::Game() {
    setupBoard();
}

void Game::setupBoard() {
    // Empty board
    for (int row = 0; row < 8; ++row)
        for (int col = 0; col < 8; ++col)
            board[row][col] = {PieceType::None, Color::None};

    // Pawns
    for (int i = 0; i < 8; ++i) {
        board[1][i] = {PieceType::Pawn, Color::Black};
        board[6][i] = {PieceType::Pawn, Color::White};
    }

    // Rooks
    board[0][0] = board[0][7] = {PieceType::Rook, Color::Black};
    board[7][0] = board[7][7] = {PieceType::Rook, Color::White};

    // Knights
    board[0][1] = board[0][6] = {PieceType::Knight, Color::Black};
    board[7][1] = board[7][6] = {PieceType::Knight, Color::White};

    // Bishops
    board[0][2] = board[0][5] = {PieceType::Bishop, Color::Black};
    board[7][2] = board[7][5] = {PieceType::Bishop, Color::White};

    // Queens and Kings
    board[0][3] = {PieceType::Queen, Color::Black};
    board[0][4] = {PieceType::King, Color::Black};
    board[7][3] = {PieceType::Queen, Color::White};
    board[7][4] = {PieceType::King, Color::White};
}
