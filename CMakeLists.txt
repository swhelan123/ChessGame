cmake_minimum_required(VERSION 3.16)
project(ChessGame)
set(CMAKE_CXX_STANDARD 20)

# Enable Qt's automatic processing
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# Point to your Qt install
set(CMAKE_PREFIX_PATH "C:/Qt/6.10.0/mingw_64")

find_package(Qt6 COMPONENTS Widgets REQUIRED)

# Include your headers
include_directories(include)

# Explicitly add all sources and headers
file(GLOB SRC_FILES src/*.cpp include/*.h)

qt_add_resources(RESOURCES resources.qrc)

add_executable(ChessGame ${SRC_FILES} ${RESOURCES})

target_link_libraries(ChessGame Qt6::Widgets)
