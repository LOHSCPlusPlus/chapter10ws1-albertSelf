#include "Rectangle.h"
#include <iostream>

using namespace std;

int main() {

  Point P1(2.4, 5.2);
  Point P2(2.4, 8.9);
  Line one(P1, P2);
  Point P3(7.3, -4.1);
  Point P4(0.1, -4.1);
  Line two(P3, P4);
  Rectangle rectangle(one, two);
  cout << rectangle.CalcArea();
  cout << endl;
    return 0;
}
