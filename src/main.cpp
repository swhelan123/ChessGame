#include <QApplication>
#include "ChessBoard.h"
#include "Game.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    Game game;
    ChessBoard board(&game);
    board.resize(480, 480);
    board.setWindowTitle("Chess");
    board.show();
    return app.exec();
}
