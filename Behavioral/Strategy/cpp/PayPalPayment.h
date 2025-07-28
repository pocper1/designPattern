#ifndef PAYPAL_PAYMENT_H
#define PAYPAL_PAYMENT_H

#include "PaymentStrategy.h"
#include <string>

/**
 * PayPal支付策略
 * 具體策略實作：使用PayPal進行支付
 */
class PayPalPayment : public PaymentStrategy {
private:
    std::string email;

public:
    PayPalPayment(const std::string& email);
    void pay(double amount) override;
};

#endif // PAYPAL_PAYMENT_H 