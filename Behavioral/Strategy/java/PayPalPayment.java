package com.designpatterns.strategy;

/**
 * PayPal支付策略
 * 具體策略實作：使用PayPal進行支付
 */
public class PayPalPayment implements PaymentStrategy {
    private final String email;

    public PayPalPayment(String email) {
        this.email = email;
    }

    @Override
    public void pay(double amount) {
        System.out.println("使用PayPal支付 $" + amount);
        System.out.println("PayPal帳號: " + email);
        System.out.println("支付成功！");
    }
} 