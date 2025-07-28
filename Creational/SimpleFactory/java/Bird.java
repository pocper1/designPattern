package com.designpatterns.simplefactory;

/**
 * 鳥類別
 * 具體產品：實作動物介面
 */
public class Bird implements Animal {
    
    @Override
    public void makeSound() {
        System.out.println("啾啾啾！");
    }
    
    @Override
    public void move() {
        System.out.println("小鳥自由地飛翔");
    }
} 