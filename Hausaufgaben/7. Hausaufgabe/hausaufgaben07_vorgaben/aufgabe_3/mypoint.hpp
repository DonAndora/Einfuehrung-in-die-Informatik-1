/*
 * Diese Klasse repraesentiert einen Punkt
 */

class MyPoint
{
private:
  int x;
  int y;
  int z;
public:
  MyPoint(int x, int y, int z);

  // Ihr Code hier

  double dist(MyPoint *q)
  {
    return sqrt(pow((q->x - x), 2) + pow((q->y - y), 2) + pow((q->z - z), 2));
  };



  void show();
};
