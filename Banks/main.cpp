#include <iostream>
#include "accounts.h"

using namespace std;

int main {
  BankAccount julians_Account(500); //initialize account with 500
  julians_account.deposit(200); //account now has 700
  julians_account.withdraw(300); //accouint now has 400
  julians_account.addInterest(3);
  cout << fixed << setprecision(2) << julians_account.get_balance() << endl;

  return 0;
}
