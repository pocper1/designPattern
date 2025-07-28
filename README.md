# 🎯 Design Patterns Complete Guide / 設計模式完整指南

A comprehensive collection of 23 classic design patterns implemented in C++ and Java. This project serves as a complete reference for learning and understanding design patterns with practical examples.

23 種經典設計模式的完整實作集合，支援 C++ 和 Java 兩種程式語言。本專案提供完整的設計模式學習參考，包含實用範例。

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![Language](https://img.shields.io/badge/language-C++%20%7C%20Java-blue.svg)](https://github.com/pocper1/DesignPattern)
[![Design Patterns](https://img.shields.io/badge/patterns-23%20patterns-green.svg)](https://github.com/pocper1/DesignPattern)

## 📋 Table of Contents / 目錄

-   [Overview / 概述](#overview--概述)
-   [Project Structure / 專案結構](#project-structure--專案結構)
-   [Design Pattern Categories / 設計模式分類](#design-pattern-categories--設計模式分類)
-   [Quick Start / 快速開始](#quick-start--快速開始)
-   [Learning Path / 學習路徑](#learning-path--學習路徑)
-   [Contributing / 貢獻指南](#contributing--貢獻指南)
-   [License / 授權](#license--授權)

## 🎯 Overview / 概述

This project provides complete implementations of all 23 classic design patterns from the Gang of Four (GoF) book, with examples in two popular programming languages:

本專案提供 Gang of Four (GoF) 書中所有 23 種經典設計模式的完整實作，支援兩種熱門程式語言：

-   **C++** (C++17+)
-   **Java** (Java 11+)

Each pattern includes:
每個模式包含：

-   📖 Detailed theoretical explanation / 詳細的理論說明
-   🏗️ UML diagrams using Mermaid / 使用 Mermaid 的 UML 圖表
-   💻 Complete working code examples / 完整的可執行程式碼範例
-   🎯 Real-world use cases / 實際應用場景
-   ⚠️ Best practices and common pitfalls / 最佳實踐和常見陷阱

## 📁 Project Structure / 專案結構

```
DesignPattern/
├── Behavioral/                    # Behavioral Patterns (10 patterns) / 行為型模式 (10種)
│   ├── ChainOfResponsibility/    # Chain of Responsibility Pattern / 責任鏈模式
│   ├── Command/                  # Command Pattern / 命令模式
│   ├── Iterator/                 # Iterator Pattern / 迭代器模式
│   ├── Mediator/                 # Mediator Pattern / 中介者模式
│   ├── Memento/                  # Memento Pattern / 備忘錄模式
│   ├── Observer/                 # Observer Pattern / 觀察者模式
│   ├── State/                    # State Pattern / 狀態模式
│   ├── Strategy/                 # Strategy Pattern / 策略模式
│   ├── TemplateMethod/           # Template Method Pattern / 範本方法模式
│   └── Visitor/                  # Visitor Pattern / 訪問者模式
├── Creational/                   # Creational Patterns (6 patterns) / 創建型模式 (6種)
│   ├── AbstractFactory/          # Abstract Factory Pattern / 抽象工廠模式
│   ├── Builder/                  # Builder Pattern / 建造者模式
│   ├── FactoryMethod/            # Factory Method Pattern / 工廠方法模式
│   ├── Prototype/                # Prototype Pattern / 原型模式
│   ├── SimpleFactory/            # Simple Factory Pattern / 簡單工廠模式
│   └── Singleton/                # Singleton Pattern / 獨體模式
├── Structural/                   # Structural Patterns (7 patterns) / 結構型模式 (7種)
│   ├── Adapter/                  # Adapter Pattern / 適配器模式
│   ├── Bridge/                   # Bridge Pattern / 橋接模式
│   ├── Composite/                # Composite Pattern / 組合模式
│   ├── Decorator/                # Decorator Pattern / 裝飾者模式
│   ├── Facade/                   # Facade Pattern / 外觀模式
│   ├── Flyweight/                # Flyweight Pattern / 享元模式
│   └── Proxy/                    # Proxy Pattern / 代理模式
└── README.md                     # This file / 本檔案
```

## 🎨 Design Pattern Categories / 設計模式分類

### 🏗️ Creational Patterns / 創建型模式 (6 patterns / 6 種)

Focus on object creation mechanisms, providing flexible ways to create objects.
專注於物件創建機制，提供靈活的物件創建方式。

| Pattern / 模式                  | Purpose / 目的                                               | Use Case / 適用場景                                                 | Example / 範例                     |
| ------------------------------- | ------------------------------------------------------------ | ------------------------------------------------------------------- | ---------------------------------- |
| **Simple Factory** / 簡單工廠   | Encapsulate object creation logic / 封裝物件創建邏輯         | Create different objects based on conditions / 根據條件創建不同物件 | Animal factory / 動物工廠          |
| **Factory Method** / 工廠方法   | Let subclasses decide object creation / 讓子類別決定創建物件 | Don't know what object to create / 不知道具體創建什麼物件           | Document creators / 文件創建器     |
| **Abstract Factory** / 抽象工廠 | Create families of related objects / 創建相關物件族          | Need to create related object families / 需要創建相關物件族         | UI component factory / UI 元件工廠 |
| **Builder** / 建造者            | Separate complex object construction / 分離複雜物件構建      | Create complex objects / 創建複雜物件                               | Computer assembly / 電腦組裝       |
| **Prototype** / 原型            | Create objects by copying / 通過複製創建物件                 | Expensive object creation / 創建成本高的物件                        | Document copying / 文件複製        |
| **Singleton** / 獨體            | Ensure single instance / 確保唯一實例                        | Need global unique instance / 需要全域唯一實例                      | Database connection / 資料庫連接   |

### 🏛️ Structural Patterns / 結構型模式 (7 patterns / 7 種)

Focus on object composition and structure, providing flexible ways to compose objects.
專注於物件組合和結構，提供靈活的物件組合方式。

| Pattern / 模式         | Purpose / 目的                                                | Use Case / 適用場景                                                        | Example / 範例                     |
| ---------------------- | ------------------------------------------------------------- | -------------------------------------------------------------------------- | ---------------------------------- |
| **Adapter** / 適配器   | Make incompatible interfaces work / 讓不相容介面工作          | Use existing classes with incompatible interfaces / 使用現有類別但介面不符 | Media player / 媒體播放器          |
| **Bridge** / 橋接      | Separate abstraction from implementation / 分離抽象與實作     | Both abstraction and implementation may vary / 抽象和實作都可能變化        | Drawing system / 繪圖系統          |
| **Composite** / 組合   | Treat individual and composite uniformly / 統一處理個別和組合 | Represent part-whole hierarchies / 表示部分-整體層次結構                   | File system / 檔案系統             |
| **Decorator** / 裝飾者 | Add responsibilities dynamically / 動態添加職責               | Need dynamic functionality extension / 需要動態擴展功能                    | Coffee flavoring / 咖啡調味        |
| **Facade** / 外觀      | Simplify subsystem usage / 簡化子系統使用                     | Simplify complex subsystems / 簡化複雜子系統                               | Home theater system / 家庭劇院系統 |
| **Flyweight** / 享元   | Share fine-grained objects / 共享細粒度物件                   | Need many similar objects / 需要大量相似物件                               | Text editor / 文字編輯器           |
| **Proxy** / 代理       | Control object access / 控制物件存取                          | Control object access / 控制物件存取                                       | Image proxy / 圖片代理             |

### 🎭 Behavioral Patterns / 行為型模式 (10 patterns / 10 種)

Focus on object communication and responsibility assignment, providing flexible ways to interact between objects.
專注於物件間通信和職責分配，提供靈活的物件互動方式。

| Pattern / 模式                       | Purpose / 目的                                                     | Use Case / 適用場景                                                | Example / 範例                  |
| ------------------------------------ | ------------------------------------------------------------------ | ------------------------------------------------------------------ | ------------------------------- |
| **Chain of Responsibility** / 責任鏈 | Avoid coupling sender and receiver / 避免發送者和接收者耦合        | Multiple objects can handle requests / 多個物件可處理請求          | Log processors / 日誌處理器     |
| **Command** / 命令                   | Encapsulate requests as objects / 封裝請求為物件                   | Need undo/redo support / 需要撤銷重做支援                          | Remote control / 遙控器         |
| **Iterator** / 迭代器                | Access aggregate structures uniformly / 統一存取聚合結構           | Need uniform access to different aggregates / 需要統一存取不同聚合 | Collection traversal / 集合遍歷 |
| **Mediator** / 中介者                | Encapsulate object interactions / 封裝物件間互動                   | Complex object interactions / 物件間互動複雜                       | Chat room / 聊天室              |
| **Memento** / 備忘錄                 | Save and restore object state / 保存和恢復狀態                     | Need state management / 需要狀態管理                               | Editor undo / 編輯器撤銷        |
| **Observer** / 觀察者                | One-to-many dependency notification / 一對多依賴通知               | Notify state changes / 通知狀態變化                                | News publishing / 新聞發布      |
| **State** / 狀態                     | Change behavior based on state / 狀態改變行為                      | Object behavior depends on state / 物件行為依賴狀態                | Vending machine / 自動販賣機    |
| **Strategy** / 策略                  | Encapsulate interchangeable algorithms / 封裝可替換演算法          | Need dynamic algorithm selection / 需要動態選擇演算法              | Payment strategies / 支付策略   |
| **Template Method** / 範本方法       | Define algorithm skeleton / 定義演算法骨架                         | Fixed algorithm structure / 固定演算法結構                         | Beverage making / 飲料製作      |
| **Visitor** / 訪問者                 | Add operations without changing structure / 在不改變結構下新增操作 | Add operations to object structure / 對結構新增操作                | Document visitors / 文件訪問    |

## 🚀 Quick Start / 快速開始

### Prerequisites / 前置需求

-   **C++**: GCC 7+ or Clang 5+ with C++17 support / GCC 7+ 或 Clang 5+ 支援 C++17
-   **Java**: JDK 11+ / JDK 11+

### Running Examples / 執行範例

#### C++ Examples / C++ 範例

```bash
# Navigate to a pattern directory / 導航到模式目錄
cd Behavioral/Strategy/cpp

# Compile and run / 編譯並執行
make
./main
```

#### Java Examples / Java 範例

```bash
# Navigate to a pattern directory / 導航到模式目錄
cd Behavioral/Strategy/java

# Compile and run / 編譯並執行
javac *.java
java Main
```

### Example: Strategy Pattern / 範例：策略模式

Here's a quick example of the Strategy pattern in C++:
以下是 C++ 中策略模式的快速範例：

```cpp
// PaymentStrategy.h
class PaymentStrategy {
public:
    virtual void pay(double amount) = 0;
    virtual ~PaymentStrategy() = default;
};

// CreditCardPayment.h
class CreditCardPayment : public PaymentStrategy {
public:
    void pay(double amount) override {
        std::cout << "Paid $" << amount << " using Credit Card" << std::endl;
    }
};

// ShoppingCart.h
class ShoppingCart {
private:
    PaymentStrategy* paymentStrategy;
public:
    void setPaymentStrategy(PaymentStrategy* strategy) {
        paymentStrategy = strategy;
    }
    void checkout(double amount) {
        paymentStrategy->pay(amount);
    }
};
```

## 📚 Learning Path / 學習路徑

### 🎯 Beginner Path / 初學者路徑

1. **Simple Factory** → Learn basic creation encapsulation / 學習基本創建封裝
2. **Strategy** → Understand algorithm encapsulation / 理解演算法封裝
3. **Observer** → Learn object communication / 學習物件通信
4. **Singleton** → Master global instance management / 掌握全域實例管理

### 🔧 Intermediate Path / 中級路徑

1. **Factory Method** → Learn polymorphic creation / 學習多態創建
2. **Abstract Factory** → Understand product family creation / 理解產品族創建
3. **Decorator** → Master dynamic extension / 掌握動態擴展
4. **Command** → Learn command encapsulation / 學習命令封裝

### 🚀 Advanced Path / 進階路徑

1. **Visitor** → Understand double dispatch / 理解雙重分發
2. **Bridge** → Master abstraction-implementation separation / 掌握抽象實作分離
3. **Mediator** → Learn complex object coordination / 學習複雜物件協調
4. **Template Method** → Understand algorithm skeletons / 理解演算法骨架

## 🛠️ Features / 特色功能

### ✨ Key Features / 主要特色

-   **Complete Coverage** / 完整覆蓋: All 23 GoF design patterns / 所有 23 種 GoF 設計模式
-   **Multi-language Support** / 多語言支援: C++ and Java implementations / C++ 和 Java 實作
-   **Visual Diagrams** / 視覺圖表: Mermaid UML diagrams for each pattern / 每個模式的 Mermaid UML 圖表
-   **Real-world Examples** / 實際範例: Practical use cases and scenarios / 實用場景和案例
-   **Best Practices** / 最佳實踐: Common pitfalls and testing strategies / 常見陷阱和測試策略
-   **GitHub Ready** / GitHub 就緒: All diagrams render natively on GitHub / 所有圖表在 GitHub 上原生渲染

### 📊 Project Statistics / 專案統計

-   **Total Patterns** / 總模式數: 23 design patterns / 23 種設計模式
-   **Language Support** / 語言支援: 2 programming languages / 2 種程式語言
-   **Code Examples** / 程式碼範例: 46 complete implementations / 46 個完整實作
-   **Documentation** / 文檔: 23 detailed README files / 23 個詳細 README 檔案
-   **Diagrams** / 圖表: 23 Mermaid architecture diagrams / 23 個 Mermaid 架構圖

## 📄 License / 授權

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
本專案採用 MIT 授權條款 - 詳見 [LICENSE](LICENSE) 檔案。

## 🙏 Acknowledgments / 致謝

-   Inspired by the Gang of Four (GoF) design patterns book / 受 Gang of Four (GoF) 設計模式書籍啟發
-   Thanks to all contributors and the design patterns community / 感謝所有貢獻者和設計模式社群
-   Special thanks to the open-source community for inspiration / 特別感謝開源社群的啟發

## 📞 Contact / 聯絡方式

-   **GitHub Issues** / GitHub 問題: [Report bugs or request features](https://github.com/pocper1/DesignPattern/issues) / [回報錯誤或請求功能](https://github.com/pocper1/DesignPattern/issues)

---

⭐ **Star this repository if you find it helpful!** / **如果覺得有幫助，請給這個專案一個星標！**

---

**Note** / **注意**: This project is continuously being improved. Feel free to suggest improvements and contribute code! / 本專案持續改進中。歡迎提出改進建議並貢獻程式碼！
