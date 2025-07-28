package com.designpatterns.strategy;

import java.util.ArrayList;
import java.util.List;

/**
 * 購物車類別
 * 上下文類別：維護對策略物件的參考
 */
public class ShoppingCart {
    private PaymentStrategy paymentStrategy;
    private final List<Double> items = new ArrayList<>();

    /**
     * 添加商品到購物車
     * @param price 商品價格
     */
    public void addItem(double price) {
        items.add(price);
        System.out.println("添加商品，價格: $" + price);
    }

    /**
     * 設置支付策略
     * @param paymentStrategy 支付策略
     */
    public void setPaymentStrategy(PaymentStrategy paymentStrategy) {
        this.paymentStrategy = paymentStrategy;
    }

    /**
     * 結帳
     */
    public void checkout() {
        double total = 0;
        for (Double item : items) {
            total += item;
        }

        System.out.println("\n總計: $" + total);
        
        if (paymentStrategy == null) {
            System.out.println("請先選擇支付方式！");
            return;
        }

        paymentStrategy.pay(total);
        items.clear();
    }

    /**
     * 顯示購物車內容
     */
    public void showItems() {
        System.out.println("\n購物車內容:");
        for (int i = 0; i < items.size(); i++) {
            System.out.println("商品 " + (i + 1) + ": $" + items.get(i));
        }
    }
} 