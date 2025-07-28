#ifndef ANIMAL_H
#define ANIMAL_H

/**
 * 動物介面
 * 定義動物的共同行為
 */
class Animal {
public:
    virtual ~Animal() = default;
    
    /**
     * 發出聲音
     */
    virtual void makeSound() = 0;
    
    /**
     * 移動
     */
    virtual void move() = 0;
};

#endif // ANIMAL_H 