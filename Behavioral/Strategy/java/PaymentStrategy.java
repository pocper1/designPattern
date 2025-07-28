package com.designpatterns.strategy;

/**
 * 支付策略介面
 * 定義所有支付策略的共同介面
 */
public interface PaymentStrategy {
    /**
     * 執行支付
     * @param amount 支付金額
     */
    void pay(double amount);
} 