package com.designpatterns.observer;

/**
 * 產品介面
 * 定義產品的共同行為
 */
public interface Product {
    /**
     * 執行操作
     */
    void operation();
}

/**
 * 具體產品 A
 * 實作產品介面
 */
class ConcreteProductA implements Product {
    @Override
    public void operation() {
        System.out.println("ConcreteProductA 執行操作");
    }
}

/**
 * 具體產品 B
 * 實作產品介面
 */
class ConcreteProductB implements Product {
    @Override
    public void operation() {
        System.out.println("ConcreteProductB 執行操作");
    }
}

/**
 * 工廠類別
 * 負責創建產品
 */
class Factory {
    /**
     * 創建產品
     * @param type 產品類型
     * @return 產品實例
     * @throws IllegalArgumentException 當產品類型未知時拋出
     */
    public static Product createProduct(String type) {
        switch (type.toLowerCase()) {
            case "a":
                return new ConcreteProductA();
            case "b":
                return new ConcreteProductB();
            default:
                throw new IllegalArgumentException("未知的產品類型: " + type);
        }
    }
}

/**
 * 客戶端類別
 * 使用工廠創建產品
 */
class Client {
    public void useProduct(String type) {
        try {
            System.out.println("創建 " + type + " 產品...");
            Product product = Factory.createProduct(type);
            product.operation();
        } catch (IllegalArgumentException ex) {
            System.out.println("錯誤: " + ex.getMessage());
        }
    }
}

/**
 * Observer Pattern 主程式
 * 演示觀察者模式的使用
 */
public class Main {
    public static void main(String[] args) {
        System.out.println("=== Observer Pattern 範例 ===\n");

        Client client = new Client();

        // 測試不同的產品類型
        System.out.println("=== 測試不同產品類型 ===");
        client.useProduct("a");
        client.useProduct("b");

        // 測試無效類型
        System.out.println("\n=== 測試無效類型 ===");
        client.useProduct("c");
    }
}