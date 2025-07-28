package com.designpatterns.simplefactory;

/**
 * 狗類別
 * 具體產品：實作動物介面
 */
public class Dog implements Animal {
    
    @Override
    public void makeSound() {
        System.out.println("汪汪汪！");
    }
    
    @Override
    public void move() {
        System.out.println("狗狗快樂地跑著");
    }
} 