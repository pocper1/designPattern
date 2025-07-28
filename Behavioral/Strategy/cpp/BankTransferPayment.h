#ifndef BANK_TRANSFER_PAYMENT_H
#define BANK_TRANSFER_PAYMENT_H

#include "PaymentStrategy.h"
#include <string>

/**
 * 銀行轉帳支付策略
 * 具體策略實作：使用銀行轉帳進行支付
 */
class BankTransferPayment : public PaymentStrategy {
private:
    std::string accountNumber;

public:
    BankTransferPayment(const std::string& accountNumber);
    void pay(double amount) override;
};

#endif // BANK_TRANSFER_PAYMENT_H 