//
// Created by Maikol Guzman on 21/11/23.
//

#include "BankAccount.h"
#include <iostream>

using namespace std;


int main() {
    BankAccount account{};
    account.setBalance(1000.0);
    cout << "Balance: $" << account.getBalance();  // Output: Balance: $1000.0
    return 0;
}