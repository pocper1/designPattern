#include <iostream>
#include <string>
#include <memory>

/**
 * 產品介面
 * 定義產品的共同行為
 */
class Product {
public:
    virtual ~Product() = default;
    
    /**
     * 執行操作
     */
    virtual void operation() = 0;
};

/**
 * 具體產品 A
 * 實作產品介面
 */
class ConcreteProductA : public Product {
public:
    void operation() override {
        std::cout << "ConcreteProductA 執行操作" << std::endl;
    }
};

/**
 * 具體產品 B
 * 實作產品介面
 */
class ConcreteProductB : public Product {
public:
    void operation() override {
        std::cout << "ConcreteProductB 執行操作" << std::endl;
    }
};

/**
 * 工廠類別
 * 負責創建產品
 */
class Factory {
public:
    /**
     * 創建產品
     * @param type 產品類型
     * @return 產品實例
     * @throws std::invalid_argument 當產品類型未知時拋出
     */
    static std::unique_ptr<Product> createProduct(const std::string& type) {
        if (type == "a") {
            return std::make_unique<ConcreteProductA>();
        } else if (type == "b") {
            return std::make_unique<ConcreteProductB>();
        } else {
            throw std::invalid_argument("未知的產品類型: " + type);
        }
    }
};

/**
 * 客戶端類別
 * 使用工廠創建產品
 */
class Client {
public:
    void useProduct(const std::string& type) {
        try {
            std::cout << "創建 " << type << " 產品..." << std::endl;
            auto product = Factory::createProduct(type);
            product->operation();
        } catch (const std::invalid_argument& ex) {
            std::cout << "錯誤: " << ex.what() << std::endl;
        }
    }
};

/**
 * Observer Pattern 主程式
 * 演示觀察者模式的使用
 */
int main() {
    std::cout << "=== Observer Pattern 範例 ===" << std::endl << std::endl;

    Client client;

    // 測試不同的產品類型
    std::cout << "=== 測試不同產品類型 ===" << std::endl;
    client.useProduct("a");
    client.useProduct("b");

    // 測試無效類型
    std::cout << "\n=== 測試無效類型 ===" << std::endl;
    client.useProduct("c");

    return 0;
}