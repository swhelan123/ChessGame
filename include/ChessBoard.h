#ifndef CHESSBOARD_H
#define CHESSBOARD_H

#include <QWidget>
#include "Game.h"

class ChessBoard : public QWidget {
    Q_OBJECT

public:
    explicit ChessBoard(Game* game, QWidget* parent = nullptr);

protected:
    void paintEvent(QPaintEvent*) override;

private:
    Game* game;
};

#endif
