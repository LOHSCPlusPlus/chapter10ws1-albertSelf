#include "Line.h"
#include <iostream>

using namespace std;

int main() {

  Point P1(2.4, 5.2);
  Point P2(5.3, 8.9);
  Line one(P1, P2);
  one.PrintLine();
  cout << one.lineLength();
    return 0;
}
