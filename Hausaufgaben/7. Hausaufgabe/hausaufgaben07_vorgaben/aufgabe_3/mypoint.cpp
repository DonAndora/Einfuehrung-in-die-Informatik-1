#include <iostream>
#include <cmath>
#include "mypoint.hpp"

// Konstruktor
MyPoint::MyPoint(int x, int y, int z)
  : x(x), y(y), z(z)
{
}

// Ihr Code hier

// Methode, die die Attribute des Punktes auf die Konsole schreibt
void MyPoint::show()
{
  std::cout << "(x,y,z)  =  (" << x << "," << y << "," << z << ")" << std::endl;
}
