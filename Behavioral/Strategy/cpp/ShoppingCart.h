#ifndef SHOPPING_CART_H
#define SHOPPING_CART_H

#include "PaymentStrategy.h"
#include <vector>
#include <memory>

/**
 * 購物車類別
 * 上下文類別：維護對策略物件的參考
 */
class ShoppingCart {
private:
    std::unique_ptr<PaymentStrategy> paymentStrategy;
    std::vector<double> items;

public:
    /**
     * 添加商品到購物車
     * @param price 商品價格
     */
    void addItem(double price);
    
    /**
     * 設置支付策略
     * @param strategy 支付策略
     */
    void setPaymentStrategy(std::unique_ptr<PaymentStrategy> strategy);
    
    /**
     * 結帳
     */
    void checkout();
    
    /**
     * 顯示購物車內容
     */
    void showItems();
};

#endif // SHOPPING_CART_H 