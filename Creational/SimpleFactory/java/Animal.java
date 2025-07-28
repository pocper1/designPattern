package com.designpatterns.simplefactory;

/**
 * 動物介面
 * 定義動物的共同行為
 */
public interface Animal {
    /**
     * 發出聲音
     */
    void makeSound();
    
    /**
     * 移動
     */
    void move();
} 