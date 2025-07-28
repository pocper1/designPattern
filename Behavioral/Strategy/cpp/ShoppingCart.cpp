#include "ShoppingCart.h"
#include <iostream>

void ShoppingCart::addItem(double price) {
    items.push_back(price);
    std::cout << "添加商品，價格: $" << price << std::endl;
}

void ShoppingCart::setPaymentStrategy(std::unique_ptr<PaymentStrategy> strategy) {
    paymentStrategy = std::move(strategy);
}

void ShoppingCart::checkout() {
    double total = 0;
    for (double item : items) {
        total += item;
    }

    std::cout << "\n總計: $" << total << std::endl;
    
    if (!paymentStrategy) {
        std::cout << "請先選擇支付方式！" << std::endl;
        return;
    }

    paymentStrategy->pay(total);
    items.clear();
}

void ShoppingCart::showItems() {
    std::cout << "\n購物車內容:" << std::endl;
    for (size_t i = 0; i < items.size(); i++) {
        std::cout << "商品 " << (i + 1) << ": $" << items[i] << std::endl;
    }
} 