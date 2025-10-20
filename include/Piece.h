#ifndef PIECE_H
#define PIECE_H

enum class PieceType { King, Queen, Rook, Bishop, Knight, Pawn, None };
enum class Color { White, Black, None };

struct Piece {
    PieceType type;
    Color color;
};

#endif
