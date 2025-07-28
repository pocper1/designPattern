package com.designpatterns.simplefactory;

/**
 * 動物工廠
 * 簡單工廠模式：根據類型創建不同動物
 */
public class AnimalFactory {
    
    /**
     * 創建動物
     * @param animalType 動物類型
     * @return 動物實例
     * @throws IllegalArgumentException 當動物類型未知時拋出
     */
    public static Animal createAnimal(String animalType) {
        switch (animalType.toLowerCase()) {
            case "cat":
                return new Cat();
            case "dog":
                return new Dog();
            case "bird":
                return new Bird();
            default:
                throw new IllegalArgumentException("未知的動物類型: " + animalType);
        }
    }
} 