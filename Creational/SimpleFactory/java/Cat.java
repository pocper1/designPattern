package com.designpatterns.simplefactory;

/**
 * 貓類別
 * 具體產品：實作動物介面
 */
public class Cat implements Animal {
    
    @Override
    public void makeSound() {
        System.out.println("喵喵喵！");
    }
    
    @Override
    public void move() {
        System.out.println("貓咪優雅地走著");
    }
} 