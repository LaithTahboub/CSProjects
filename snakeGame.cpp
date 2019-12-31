#include <iostream>
#include <conio.h>

using namespace std;
bool gameover;
const int width = 40;
const int height = 20;
int x, y, FruitX, FruitY, Score;
int tailX[1000], tailY[1000];
int tailL = 0;
enum eDirection {
  STOP = 0, LEFT, RIGHT, UP, DOWN
};
eDirection dir;
void Setup() {
  gameover = false;
  dir = STOP;
  x = width / 2;
  y = height / 2;
  FruitX = rand() % width;
  FruitY = rand() % height;
  Score = 0;
}

void UI() {
  int n;
  cout << "1. Play " << endl << endl << "2. Quit" << endl << endl << "(Input 1 or 2)" << endl;
  cin >> n;
  if (n == 1) return;
  if (n == 2) exit(0);
}

void Draw() {
  system("cls");
  for (int i = 0; i < width + 2; i++) cout << "-";
  cout << endl;
  for (int i = 0; i < height; i++) {
    for (int j = 0; j < width; j++) {
      if (j == 0)
        cout << "l";
      if (i == y && j == x)
        cout << "O";
      else if (i == FruitY && j == FruitX)
        cout << "o";
      else {
        bool print = false;
        for (int k = 0; k < tailL; k++) {
          if (tailX[k] == j && tailY[k] == i) {
            cout << "o";
            print = true;
          }
        }
        if (!print)
          cout << " ";
      }
      if (j == width - 1)
        cout << "l";
    }
    cout << endl;
  }

  for (int i = 0; i < width + 2; i++)
    cout << "-";
  cout << endl;
  cout << "Score: " << Score;
}

void Input() {
  if (_kbhit()) {
    switch (_getch()) {
    case 'a':
      dir = LEFT;
      break;
    case 'd':
      dir = RIGHT;
      break;
    case 'w':
      dir = UP;
      break;
    case 's':
      dir = DOWN;
      break;
    case 'x':
      gameover = true;
      break;
    }
  }
}
void Logic() {
  int prevX = tailX[0];
  int prevY = tailY[0];
  int prevX2, prevY2;
  tailX[0] = x;
  tailY[0] = y;
  for (int i = 1; i < tailL; i++) {
    prevX2 = tailX[i];
    prevY2 = tailY[i];
    tailX[i] = prevX;
    tailY[i] = prevY;
    prevX = prevX2;
    prevY = prevY2;
  }
  switch (dir) {
  case LEFT:
    x--;
    break;
  case RIGHT:
    x++;
    break;
  case UP:
    y--;
    break;
  case DOWN:
    y++;
    break;
  default:
    break;
  }
  if (x > width || x < 0 || y > height || y < 0) gameover = true;
  for (int i = 0; i < tailL; i++)
    if (tailX[i] == x && tailY[i] == y)
      gameover = true;

  if (x == FruitX && y == FruitY) {
    tailL++;
    Score += 10;
    FruitX = rand() % width;
    FruitY = rand() % height;
  }
}
int main() {
  Setup();
  UI();
  while (gameover != true) {
    Draw();
    Input();
    Logic();
  }
  return 0;
}
