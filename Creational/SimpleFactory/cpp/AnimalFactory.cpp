#include "AnimalFactory.h"
#include "Cat.h"
#include "Dog.h"
#include "Bird.h"
#include <stdexcept>

std::unique_ptr<Animal> AnimalFactory::createAnimal(const std::string& animalType) {
    if (animalType == "cat") {
        return std::make_unique<Cat>();
    } else if (animalType == "dog") {
        return std::make_unique<Dog>();
    } else if (animalType == "bird") {
        return std::make_unique<Bird>();
    } else {
        throw std::invalid_argument("未知的動物類型: " + animalType);
    }
} 