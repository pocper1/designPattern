#include "CreditCardPayment.h"
#include <iostream>

CreditCardPayment::CreditCardPayment(const std::string& cardNumber, const std::string& cvv)
    : cardNumber(cardNumber), cvv(cvv) {
}

void CreditCardPayment::pay(double amount) {
    std::cout << "使用信用卡支付 $" << amount << std::endl;
    std::cout << "卡號: " << cardNumber << std::endl;
    std::cout << "CVV: " << cvv << std::endl;
    std::cout << "支付成功！" << std::endl;
} 