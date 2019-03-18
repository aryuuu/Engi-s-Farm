#include "MeatProducingAnimal.hpp"
#include "MilkProducingAnimal.hpp"

#ifndef _COW_HPP
#define _COW_HPP

// Class chicken mendefinisikan tipe sapi
// Memiliki habitat di Barn
// Jika di-interact : menghasilkan CowMilk
// Jika di-kill : menghasilkan CowMeat
class Cow: public MeatProducingAnimal, public MilkProducingAnimal
{
private:
  const std::string name = "Cow";     // mendefinsiikan tipe sapi
  const std::string habitat = "Barn"; // mendefinisikan tempat hidup sapi

public:
  Cow(Position p);                            // Konstruktor tipe khusus animal ini

  bool canMoveTo(Position, Farm) const;   // mengembalikan true jika cow bisa move ke position di dalam Farm

  std::string getHabitat() const;         // mengembalikan habitat dari sapi (Barn)
  std::string animalType() const;         // mengembalikan tipe animal (Cow)
  std::string sound() const;              // menentukan suara dari animal ini
  std::string interactProduct() const;    // menentukan produk interaksi
  std::string killProduct() const;        // menentukan produk hasil kill
};

#endif
