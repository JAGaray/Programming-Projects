#include <iostream>
#include "todo.h"

LinkedList::LinkedList() {
	head = NULL;
	tail = NULL;
}

LinkedList::~LinkedList() {}

void LinkedList::printTasks() {
	Node *p;
	p = head;
	while(p->next != NULL) {
		std::cout << p << std::endl;
		p = p->next;
	}
}

void LinkedList::addTask() {
	Node* temp;
	temp = new Node;

	std::cout << "What type of task would you like to add? (G/S/E/H) " << std::endl;
	std::cin >> TaskList.head->TaskType;
	TaskList.TaskErrorCheck(TaskList.head->TaskType);
	if (Node.TaskType = 'G') {
		std::cout << "What year is the task due? Please enter a number." << std::endl;
		std::cin >> TaskList.head->year;
	}
		TaskList.YearErrorCheck(TaskList.head->year);
		std::cout << "What month is the task due? " << std::endl;
		std::cin >> TaskList.head->month;
		TaskList.MonthErrorCheck(TaskList.head->month);
		std::cout << "What day is the task due? " << std::endl;
		std::cin >> TaskList.head->day;
		TaskList.DaysInMonthErrorCheck(TaskList.head->day, TaskList.head->month);
}
/*
void LinkedList::TaskErrorCheck(const char) {
  while (TaskType != 'G' || 'H' || 'S' || 'E') {
		std::cout << "Error: Invalid entry. Please try again. " << std::endl;
		std::cin >> p->TaskType;
	}
}

void LinkedList::YearErrorCheck(const int p->year) {
	while (p->year = 0) {
		std::cout << "Please enter in a valid number. " << std::endl;
		std::cin >> p-year;
	}
}

void LinkedList::MonthErrorCheck(const int p->month) {
  while (p->month < 1 ||  p->month > 12) {
	std::cout << "Please enter in a valid number. " << std::endl;
	std::cin >> p->month;
	}
}

void LinkedList::DaysInMonthErrorCheck(const int p->days, const int p->month) {
  while (p->month == 4 || 6 || 9 || 11 && p->day < 1 || p->day > 30) {
    std::cout << "Please enter in a valid number. " << std::endl;
	  std::cin >> p->day;
  }
  while (p->month == 1 || 3 || 5 || 7 || 8 || 10 || 12
				 && p->day < 1 || p->day > 31) {
	  std::cout << "Please enter in a valid number. " << std::endl;
	  std::cin >> p->day;
	}
	while (p->month == 2 && p->day < 1 || p->day > 28) {
	  std::cout << "Please enter in a valid number. " << std::endl;
	  std::cin >> p->day;
	}
}
*/
