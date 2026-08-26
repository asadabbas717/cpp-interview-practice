#include <iostream>
#include <string>
using namespace std;
class BankAccount { string owner; double balance = 0; public: BankAccount(string name, double opening) : owner(move(name)), balance(opening) {} void deposit(double amount) { if (amount > 0) balance += amount; } double getBalance() const { return balance; } };
int main() { BankAccount account("Ayesha", 100); account.deposit(50); cout << account.getBalance() << '\n'; }
