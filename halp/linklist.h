#ifndef LINKLIST_H_
#define LINKLIST_H_
#include <iostream>

struct Node {
  Node* next;
  task;
};

class LinkedList {
 public:
 	LinkedList(Node* next);
 	~LinkedList();
 	Node* head;
};

class Task {
 public:
 	Task(std::type);
 	~Task();
 	std::type;
	std::string date;
	std::string description;
	bool completed();
}task;

class TaskLinkedList {
 public:
 	TaskLinkedList();
 	~TaskLinkedList();
 	void insertNode();
 	void removeNode();
};

#endif