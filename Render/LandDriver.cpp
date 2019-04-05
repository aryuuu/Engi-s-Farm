#include "Land.hpp"
#include <iostream>
using namespace std;

int main()
{
  Land a(false, 3, 3, "Coop");
  Land* b = new Land(true, 2, 3, "Barn");
  Cell* c = new Land(false, 3, 4, "Grassland");

  Cell*** mat = new Cell**[2];
  for (int i = 0 ; i < 2; i++)
  {
    mat[i] = new Cell*[2];
  }
  mat[0][0] = new Land(false, 0, 0, "Coop");
  mat[0][1] = new Land(false, 0, 1, "Coop");
  mat[1][0] = new Land(false, 1, 0, "Coop");
  mat[1][1] = new Land(false, 1, 1, "Coop");

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      mat[i][j]->print();
    }
  }
  a.print();
  b->print();
  c->print();

  delete b;
  delete c;
}
