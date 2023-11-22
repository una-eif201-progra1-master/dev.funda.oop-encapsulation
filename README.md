# Encapsulation

https://mikeguzman.dev/software-development/programming-fundations/object-oriented-programming/

```c++
// Example of Encapsulation
class BankAccount {
  private:
    double balance;

  public:
    void setBalance(double b) {
        if(b >= 0) balance = b;
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount account;
    account.setBalance(1000.0);
    cout << "Balance: $" << account.getBalance();  // Output: Balance: $1000.0
    return 0;
}

```

Here, the `balance` attribute is made private, and it is accessed through public methods `setBalance()` and `getBalance()`, demonstrating encapsulation.
