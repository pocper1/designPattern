package com.designpatterns.strategy;

/**
 * 信用卡支付策略
 * 具體策略實作：使用信用卡進行支付
 */
public class CreditCardPayment implements PaymentStrategy {
    private final String cardNumber;
    private final String cvv;

    public CreditCardPayment(String cardNumber, String cvv) {
        this.cardNumber = cardNumber;
        this.cvv = cvv;
    }

    @Override
    public void pay(double amount) {
        System.out.println("使用信用卡支付 $" + amount);
        System.out.println("卡號: " + cardNumber);
        System.out.println("CVV: " + cvv);
        System.out.println("支付成功！");
    }
} 