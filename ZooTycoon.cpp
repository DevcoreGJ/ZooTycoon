#include <iostream>
#include <memory>
#include "CPanda.h"
#include "CPenguin.h"
#include "CEnclosure.h"

int main() {
    std::shared_ptr<CPanda> panda1 = std::make_shared<CPanda>(5, "Panda1");
    std::shared_ptr<CPanda> panda2 = std::make_shared<CPanda>(4, "Panda2");
    std::shared_ptr<CPenguin> penguin1 = std::make_shared<CPenguin>(3, "Penguin1");
    std::shared_ptr<CPenguin> penguin2 = std::make_shared<CPenguin>(2, "Penguin2");

    CEnclosure pandaEnclosure;
    CEnclosure penguinEnclosure;
    CEnclosure mixedEnclosure;

    pandaEnclosure.AddAnimal(panda1);
    pandaEnclosure.AddAnimal(panda2);

    penguinEnclosure.AddAnimal(penguin1);
    penguinEnclosure.AddAnimal(penguin2);

    mixedEnclosure.AddAnimal(panda1);
    mixedEnclosure.AddAnimal(penguin2);

    int choice;
    bool continueRunning = true;

    while (continueRunning) {
        std::cout << "Choose an enclosure to view (1 for Pandas, 2 for Penguins, 3 for Mixed, 0 to quit): ";
        std::cin >> choice;

        switch (choice) {
        case 0:
            continueRunning = false;
            break;
        case 1:
            std::cout << "Panda Enclosure:" << std::endl;
            pandaEnclosure.Print();
            break;
        case 2:
            std::cout << "Penguin Enclosure:" << std::endl;
            penguinEnclosure.Print();
            break;
        case 3:
            std::cout << "Mixed Enclosure:" << std::endl;
            mixedEnclosure.Print();
            break;
        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
            break;
        }
    }

    return 0;
}
