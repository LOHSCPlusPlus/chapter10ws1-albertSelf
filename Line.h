#include "Point.h"

class Line {
  public:
    Line();
    Line(Point s, Point e);
    void PrintLine();
    double lineLength();

  private:
  Point start;
    Point end;
}; 