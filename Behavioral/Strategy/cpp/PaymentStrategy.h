#ifndef PAYMENT_STRATEGY_H
#define PAYMENT_STRATEGY_H

#include <string>

/**
 * 支付策略介面
 * 定義所有支付策略的共同介面
 */
class PaymentStrategy {
public:
    virtual ~PaymentStrategy() = default;
    
    /**
     * 執行支付
     * @param amount 支付金額
     */
    virtual void pay(double amount) = 0;
};

#endif // PAYMENT_STRATEGY_H 