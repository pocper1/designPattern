#ifndef ANIMAL_FACTORY_H
#define ANIMAL_FACTORY_H

#include "Animal.h"
#include <string>
#include <memory>

/**
 * 動物工廠
 * 簡單工廠模式：根據類型創建不同動物
 */
class AnimalFactory {
public:
    /**
     * 創建動物
     * @param animalType 動物類型
     * @return 動物實例
     * @throws std::invalid_argument 當動物類型未知時拋出
     */
    static std::unique_ptr<Animal> createAnimal(const std::string& animalType);
};

#endif // ANIMAL_FACTORY_H 