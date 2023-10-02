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
