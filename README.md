# Chess Game

A graphical chess game application built with C++ and Qt6. This project provides a visual chessboard interface with standard chess pieces and a clean, intuitive design.

## Features

- **Visual Chessboard**: An 8x8 chessboard with alternating light and dark squares
- **Chess Pieces**: All standard chess pieces (King, Queen, Rook, Bishop, Knight, Pawn) for both White and Black
- **Graphical Interface**: Built with Qt6 Widgets for a modern GUI experience
- **PNG Resources**: High-quality chess piece images embedded in the application

## Project Structure

```
ChessGame/
├── include/              # Header files
│   ├── ChessBoard.h     # ChessBoard widget class
│   ├── Game.h           # Game logic and board state
│   └── Piece.h          # Piece types and colors
├── src/                 # Source files
│   ├── main.cpp         # Application entry point
│   ├── ChessBoard.cpp   # ChessBoard implementation
│   ├── Game.cpp         # Game logic implementation
│   └── Piece.cpp        # Piece implementation
├── resources/           # Chess piece PNG images
│   ├── white_*.png      # White piece images
│   └── black_*.png      # Black piece images
├── resources.qrc        # Qt resource file
└── CMakeLists.txt       # CMake build configuration
```

## Requirements

- **C++ Compiler**: Supporting C++20 standard
- **CMake**: Version 3.16 or higher
- **Qt6**: Qt 6.x with Widgets module
  - Tested with Qt 6.10.0

## Building the Project

### Prerequisites

1. Install Qt6 SDK from [Qt's official website](https://www.qt.io/download)
2. Install CMake (version 3.16+)
3. Ensure you have a C++20 compatible compiler (GCC, Clang, or MSVC)

### Build Steps

1. **Clone the repository**:
   ```bash
   git clone https://github.com/swhelan123/ChessGame.git
   cd ChessGame
   ```

2. **Update Qt path** (if needed):
   Edit `CMakeLists.txt` and update the `CMAKE_PREFIX_PATH` to point to your Qt installation:
   ```cmake
   set(CMAKE_PREFIX_PATH "/path/to/your/Qt/6.x.x/compiler")
   ```

3. **Build the project**:
   ```bash
   mkdir build
   cd build
   cmake ..
   cmake --build .
   ```

4. **Run the application**:
   ```bash
   ./ChessGame
   ```

## Usage

Launch the application to display the chess game window. The application currently displays a standard chess board with pieces in their starting positions.

## Technical Details

### Core Classes

- **Game**: Manages the game state and board setup
  - Maintains an 8x8 array of chess pieces
  - Initializes pieces in standard chess starting positions

- **ChessBoard**: Qt widget that renders the visual chessboard
  - Inherits from `QWidget`
  - Handles painting and display of the board and pieces

- **Piece**: Data structure for chess pieces
  - `PieceType`: King, Queen, Rook, Bishop, Knight, Pawn, None
  - `Color`: White, Black, None

### Dependencies

- Qt6::Widgets - GUI framework

## Future Enhancements

Potential features for future development:
- Piece movement and drag-and-drop functionality
- Move validation based on chess rules
- Turn-based gameplay (White/Black alternating)
- Check and checkmate detection
- Move history tracking
- Game save/load functionality
- AI opponent

## License

This project is provided as-is for educational purposes.

## Author

Created by [swhelan123](https://github.com/swhelan123)
