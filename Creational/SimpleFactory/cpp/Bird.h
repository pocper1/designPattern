#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"

/**
 * 鳥類別
 * 具體產品：實作動物介面
 */
class Bird : public Animal {
public:
    void makeSound() override;
    void move() override;
};

#endif // BIRD_H 