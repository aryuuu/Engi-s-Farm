#include "../ChickenEgg.hpp"
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	ChickenEgg ce;

	cout << "nama " << ce.getNama() << endl;
	cout << "harga " <<  ce.getHarga() << endl;

	return 0;
}