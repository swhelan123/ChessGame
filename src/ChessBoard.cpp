#include "ChessBoard.h"
#include <QPainter>
#include <QPixmap>

ChessBoard::ChessBoard(Game* game, QWidget* parent)
    : QWidget(parent), game(game) {}

void ChessBoard::paintEvent(QPaintEvent*) {
    QPainter painter(this);
    int squareSize = width() / 8;

    for (int row = 0; row < 8; ++row) {
        for (int col = 0; col < 8; ++col) {
            QColor color = ((row + col) % 2 == 0) ? QColor(240, 217, 181) : QColor(181, 136, 99);
            painter.fillRect(col * squareSize, row * squareSize, squareSize, squareSize, color);

            Piece piece = game->board[row][col];
            if (piece.type != PieceType::None) {
                QString path = QStringLiteral(":/resources/") + QString(piece.color == Color::White ? "white_" : "black_");

                switch (piece.type) {
                    case PieceType::King: path += "king.png"; break;
                    case PieceType::Queen: path += "queen.png"; break;
                    case PieceType::Rook: path += "rook.png"; break;
                    case PieceType::Bishop: path += "bishop.png"; break;
                    case PieceType::Knight: path += "knight.png"; break;
                    case PieceType::Pawn: path += "pawn.png"; break;
                    default: break;
                }

                QPixmap img(path);
                painter.drawPixmap(col * squareSize, row * squareSize, squareSize, squareSize, img);

            }
        }
    }
}
