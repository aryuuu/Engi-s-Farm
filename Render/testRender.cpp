#include "Render.hpp"
#include <iostream>
using namespace std;

// g++ Cell.cpp Facility.cpp Land.cpp Facility/Mixer.cpp Facility/Truck.cpp Facility/Well.cpp Render.cpp testRender.cpp -o nama_file

int main() {
  Render map("testfile.txt");
  cout << "Read done" << endl;
  string target = map.getLegendCell(0, 0) -> getKategori();
  cout << "Target = " << target;
  map.printAll();
  return 0;
}