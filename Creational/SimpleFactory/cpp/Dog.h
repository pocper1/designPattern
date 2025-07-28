#ifndef DOG_H
#define DOG_H

#include "Animal.h"

/**
 * 狗類別
 * 具體產品：實作動物介面
 */
class Dog : public Animal {
public:
    void makeSound() override;
    void move() override;
};

#endif // DOG_H 