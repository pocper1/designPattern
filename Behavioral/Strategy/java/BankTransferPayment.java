package com.designpatterns.strategy;

/**
 * 銀行轉帳支付策略
 * 具體策略實作：使用銀行轉帳進行支付
 */
public class BankTransferPayment implements PaymentStrategy {
    private final String accountNumber;

    public BankTransferPayment(String accountNumber) {
        this.accountNumber = accountNumber;
    }

    @Override
    public void pay(double amount) {
        System.out.println("使用銀行轉帳支付 $" + amount);
        System.out.println("帳號: " + accountNumber);
        System.out.println("轉帳成功！");
    }
} 