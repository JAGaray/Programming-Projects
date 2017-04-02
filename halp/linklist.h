#ifndef LINKLIST_H_
#define LINKLIST_H_
#include <iostream>

struct Node {
  Node* next;
  Task task;
};

class LinkedList {
 public:
 	LinkedList(Node* next);
 	~LinkedList();
 	Node* head;
};

class Task {
 public:
 	Task(std::string type);
 	~Task();
 	std::string type;
	std::string date;
	std::string description;
	bool completed();
};

class TaskLinkedList {
 public:
 	TaskLinkedList();
 	~TaskLinkedList();
 	void insertNode(Node* head);
 	void removeNode(unsigned int n);
};

#endif
