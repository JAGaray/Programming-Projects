#ifndef TODO_H_
#define TODO_H_

#include <iostream>

class Node {
 public:
   	char TaskType;
   	int month;
   	int day;
   	int year;
   	std::string description;
   	std::string location;
   	int time;
   	std::string TimeofDay;
   	std::string shoppingItems;
   	std::string Subject;

   	Node *next, *prev;
};

class LinkedList {
 public:
   LinkedList();
   ~LinkedList();
   void addTask();
   void removeTask();
   void completeTask();
   void printTasks();
   void printDetailed();
   void printCompleted();
   void sortList();
   void TaskErrorCheck(const char);
   void YearErrorCheck(const int);
   void MonthErrorCheck(const int);
   void DaysInMonthErrorCheck(const int, const int);


 private:
   Node *head, *tail; //Node pointers to Head and Tail

} TaskList;

#endif
