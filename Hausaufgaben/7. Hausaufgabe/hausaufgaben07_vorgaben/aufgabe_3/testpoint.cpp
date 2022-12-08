#include <iostream>
#include "mypoint.hpp"

/*
 * Programm zum testen von MyPoint.cpp
 */
int main()
{
  MyPoint* p = new MyPoint(1, -3, 2);
  MyPoint* q = new MyPoint(4, 8, 2);
        
  p->show();
  q->show();
  std::cout << "Abstand: " << p->dist(q) << std::endl;

  delete p;
  delete q;
}
