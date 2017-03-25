#ifndef ACCOUNTS_H_
#define ACCOUNTS_H_

#include <iostream>

class BankAccount {
 public:
   BankAccount(); //construct a bank account with 0 balance
   BankAccount(double initial_balance); //construct a bank account with a balance

   void deposit(double amount); //deposit an amount of money into a bank account
   void withdraw(double amount); //withdraw an amount of money from a bank account
   void addInterest(double rate); //apply interest to value of bank account at end of month
   double get_balance() const;


 private:
   double balance;
};

BankAccount::BankAccount() {
  balance = 0;
}

BankAccount::BankAccount(double initial_amount) {
	balance = initial_amount;
}

double BankAccount::get_balance() const {
  return balance;
}

void BankAccount::deposit(double amount) {
  balance = get_balance();
  balance = balance + deposit;
}

void BankAccount::withdraw(double amount) {
	balance = get_balance();
	balance = balance - amount;
}

void addInterest(double rate) {
  balance = get_balance();
  double amount = (balance*rate)/100
  deposit(amount);
}



#endif
