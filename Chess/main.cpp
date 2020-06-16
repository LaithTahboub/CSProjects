#include <iostream>
#include <utility>
#include <vector>
using namespace std;

bool gameover = false;
char board[8][8];

// Main piece class

class piece {
public:
    vector<pair<int, int>> possibleMoves;
    char name;
    pair<int, int> location;
    piece(vector<pair<int, int>> x, char y, pair<int, int> z);
};

// Piece constructor

piece::piece(vector<pair<int, int>> x, char y, pair<int, int> z) {
    possibleMoves = x;
    name = y;
    location = z;
}

void draw() {

}

void logic() {
    piece Knight1();
}

int main() {
    while (!gameover) {
        draw();
        logic();
    }
    return 0;
}