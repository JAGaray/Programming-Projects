#include <iostream>
#include "todo.h"
#include "todo.cpp"

using namespace std;

int main() {

    string option;

	cout << "Please choose an option. " << endl;
	cout << "[ADD] a Task. " << endl;
	cout << "[REMOVE] a Task. " << endl;
	cout << "[PRINT] a list of your Tasks. " << endl;
	cout << "[DETAIL] print a detailed list of your Tasks. " << endl;
	cout << "[COMPLETE] mark a Task as completed. " << endl;
	cout << "[COMPLETED] print a list of completed Tasks. " << endl;
	cout << "[SAVE] your list of Tasks to a file. " << endl;
	cout << "[LOAD] a list of Tasks from a file. " << endl;
    cout << "" << endl;
	cin >> option;

	if (option == "ADD" || "add") {
        TaskList.addTask();
	}
	else return 0;
}
