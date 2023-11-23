//
// Created by Maikol Guzman on 21/11/23.
//

#ifndef MAIN_BANKACCOUNT_H
#define MAIN_BANKACCOUNT_H

/*!
 * \class BankAccount
 * \brief The class BankAccount is the base class
 * \file BankAccount.h
 * \brief The file BankAccount.h is the header file of the class BankAccount
 */
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
