//
// Created by Maikol Guzman on 21/11/23.
//

#ifndef MAIN_BANKACCOUNT_H
#define MAIN_BANKACCOUNT_H

class BankAccount {
private:
    double balance;

public:
    void setBalance(double b) {
        if (b >= 0) balance = b;
    }

    double getBalance() const {
        return balance;
    }
};

#endif //MAIN_BANKACCOUNT_H
