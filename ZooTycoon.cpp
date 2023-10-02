#include <string>
#include <vector>
#include <memory>
#include <iostream>

class CAnimal {
public:
    // Constructor
    CAnimal(int age, std::string name) {
        this->age = age;
        this->name = name;
    }

    // Pure virtual function to get the species name
    virtual std::string GetSpeciesName() const = 0;

    // Accessor function to get the name
    std::string GetName() const {
        return name;
    }

    // Accessor function to get the age
    int GetAge() const {
        return age;
    }

    // Virtual destructor
    virtual ~CAnimal() {
        std::cout << "Destroying " << GetSpeciesName() << " named " << name << std::endl;
    }

private:
    // Member variables
    int age;
    std::string name;
};

class CPenguin : public CAnimal {
public:
    CPenguin(int age, std::string name) : CAnimal(age, name) {}

    std::string GetSpeciesName() const override {
        return "Penguin";
    }
};

class CPanda : public CAnimal {
public:
    CPanda(int age, std::string name) : CAnimal(age, name) {}

    std::string GetSpeciesName() const override {
        return "Panda";
    }
};

class CEnclosure {
public:
    // A public function to add an animal to the enclosure.
    void AddAnimal(std::shared_ptr<CAnimal> animal) {
        inhabitants.push_back(animal);
    }

    // A public function to print information about the animals in the enclosure.
    void Print() {
        std::cout << "Animals in the enclosure:" << std::endl;
        for (size_t i = 0; i < inhabitants.size(); i++) {
            std::shared_ptr<CAnimal> animal = inhabitants[i];
            std::string name = animal->GetName();
            std::string species = animal->GetSpeciesName();
            std::cout << "Animal " << (i + 1) << ":" << std::endl;
            std::cout << "Name: " << name << std::endl;
            std::cout << "Species: " << species << std::endl;
        }
    }

private:
    // A private data member to store animals using shared pointers.
    std::vector<std::shared_ptr<CAnimal>> inhabitants;
};

int main() {
    std::shared_ptr<CAnimal> penguin = std::shared_ptr<CAnimal>(new CPenguin(5, "Pingu"));
    std::shared_ptr<CAnimal> panda = std::shared_ptr<CAnimal>(new CPanda(3, "Po"));

    CEnclosure enclosure;
    enclosure.AddAnimal(penguin);
    enclosure.AddAnimal(panda);

    enclosure.Print();

    return 0;
}