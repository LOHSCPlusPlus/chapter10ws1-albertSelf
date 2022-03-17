#include "Line.h"

class Rectangle{
  public:
    Rectangle();
    Rectangle(Line h, Line w);
    void PrintRectangle();
    double CalcArea();
  private:
  Line height;
  Line width;
};