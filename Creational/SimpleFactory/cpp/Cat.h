#ifndef CAT_H
#define CAT_H

#include "Animal.h"

/**
 * 貓類別
 * 具體產品：實作動物介面
 */
class Cat : public Animal {
public:
    void makeSound() override;
    void move() override;
};

#endif // CAT_H 