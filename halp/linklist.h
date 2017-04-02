#ifndef LINKLIST_H_
#define LINKLIST_H_
#include <iostream>

struct Node {
  Node* next;
  Task* tool;
};

class LinkedList {
 public:
 	LinkedList(Node* head);
 	~LinkedList();
    void insertNode(Node* head, Node* next);
 	void removeNode(unsigned int n);
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
}tool;

class TaskLinkedList {
 public:
 	TaskLinkedList();
 	~TaskLinkedList();
};

#endif
