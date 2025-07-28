#include "PayPalPayment.h"
#include <iostream>

PayPalPayment::PayPalPayment(const std::string& email)
    : email(email) {
}

void PayPalPayment::pay(double amount) {
    std::cout << "使用PayPal支付 $" << amount << std::endl;
    std::cout << "PayPal帳號: " << email << std::endl;
    std::cout << "支付成功！" << std::endl;
} 