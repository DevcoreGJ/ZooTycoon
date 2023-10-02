#include <string>
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
