#include <iostream>
#include "LinkList.h"
#include "UsersFunctions.h"

using namespace std;

int main() {
  string userInput;
  LinkedList Tasks;

  while (true) {
    cout << "Welcome to Your Task Manager!\n" << 
    "Please enter one of the below commands.\n" <<
    "[ADD] a Task to your list.\n" <<
    "[REMOVE] a Task from your list.\n" <<
    "[PRINT] a list of your Tasks.\n" <<
    "[DETAILED] show a detailed list of your Tasks.\n" <<
    "[COMPLETE] mark a Task as completed.\n" <<
    "[COMPLETED] show a list of all your completed tasks.\n" <<
    "[SAVE] your Tasks to a file.\n" <<
    "[LOAD] your Tasks from a file.\n" <<
    "[EXIT] the program.\n";

    getline(cin, userInput);

    toLower(userInput);

    if (!checkInput(userInput, &Tasks))
      break;
    }
    cout << "Thank you for using Task Manager!\n";
    return 0;
}