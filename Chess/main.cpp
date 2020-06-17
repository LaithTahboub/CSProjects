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

piece Wpawn1({{0, 1}, {0, 2}}, 'P', {0, 1});
piece Wpawn2({{1, 1}, {1, 1}}, 'P', {1, 1});
piece Wpawn3({{2, 1}, {2, 2}}, 'P', {2, 1});
piece Wpawn4({{3, 1}, {3, 2}}, 'P', {3, 1});
piece Wpawn5({{4, 1}, {4, 2}}, 'P', {4, 1});
piece Wpawn6({{5, 1}, {5, 2}}, 'P', {5, 1});
piece Wpawn7({{6, 1}, {6, 1}}, 'P', {6, 1});
piece Wpawn8({{7, 1}, {7, 1}}, 'P', {7, 1});
piece Wbishop1({}, 'B', {3, 0});
piece Wbishop2({}, 'B');
piece WKnight1;
piece WKnight

void draw() {

}

void input() {

}

void logic() {
}

int main() {
    while (!gameover) {
        draw();
        logic();
    }
    return 0;
}
