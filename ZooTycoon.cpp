#include <iostream>
#include <memory>
#include "CAnimal.h"
#include "CEnclosure.h"
#include "CPanda.h"
#include "CPenguin.h" // Include CPenguin header

int main() {
    // Create some animals
    std::shared_ptr<CAnimal> panda1 = std::make_shared<CPanda>(5, "Panda 1");
    std::shared_ptr<CAnimal> panda2 = std::make_shared<CPanda>(3, "Panda 2");
    std::shared_ptr<CAnimal> penguin1 = std::make_shared<CPenguin>(2, "Penguin 1"); // Create a Penguin

    // Create an enclosure
    CEnclosure enclosure;

    // Add animals to the enclosure
    enclosure.AddAnimal(panda1);
    enclosure.AddAnimal(panda2);
    enclosure.AddAnimal(penguin1); // Add a Penguin to the enclosure

    // Print the contents of the enclosure
    enclosure.Print();

    // The animals will be automatically destroyed when they go out of scope
    // and their destructors will be called, demonstrating polymorphic behavior

    return 0;
}
