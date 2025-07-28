#include "BankTransferPayment.h"
#include <iostream>

BankTransferPayment::BankTransferPayment(const std::string& accountNumber)
    : accountNumber(accountNumber) {
}

void BankTransferPayment::pay(double amount) {
    std::cout << "使用銀行轉帳支付 $" << amount << std::endl;
    std::cout << "帳號: " << accountNumber << std::endl;
    std::cout << "轉帳成功！" << std::endl;
} 