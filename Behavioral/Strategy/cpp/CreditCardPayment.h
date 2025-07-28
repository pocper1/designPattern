#ifndef CREDIT_CARD_PAYMENT_H
#define CREDIT_CARD_PAYMENT_H

#include "PaymentStrategy.h"
#include <string>

/**
 * 信用卡支付策略
 * 具體策略實作：使用信用卡進行支付
 */
class CreditCardPayment : public PaymentStrategy {
private:
    std::string cardNumber;
    std::string cvv;

public:
    CreditCardPayment(const std::string& cardNumber, const std::string& cvv);
    void pay(double amount) override;
};

#endif // CREDIT_CARD_PAYMENT_H 