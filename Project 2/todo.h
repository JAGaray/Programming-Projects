#ifndef TODO_H_
#define TODO_H_

#include <iostream>

class Node {
 public:
   	std::string TaskType;
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
}Link;

class LinkedList {
 public:
   LinkedList();
   ~LinkedList();
   void addTask();
   void removeTask();
   void completeTask();

 private:
   Node *head, *tail; //Node pointers to Head and Tail

} TaskList;

#endif

