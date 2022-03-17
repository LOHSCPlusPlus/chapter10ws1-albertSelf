#include "Rectangle.h"
#include <iostream>

using namespace std; 

Rectangle::Rectangle(Line h, Line w) {
height = h;
width = w;
}             

void Rectangle::PrintRectangle(){
  cout << "Height";
  height.PrintLine();
  cout << "Width";
  width.PrintLine();
  cout << endl;
};

double Rectangle::CalcArea(){
  return(width.lineLength() * height.lineLength());
}