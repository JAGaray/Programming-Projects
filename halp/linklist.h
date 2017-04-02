#ifndef LINKLIST_H_
#define LINKLIST_H_
#include <iostream>

struct Node {
  Node* next;
  std::string taskType;
  Node(std::string taskType);
};

class LinkedList {
 public:
 	LinkedList(Node* head);
 	~LinkedList();
    void insertNode(Node* userNode);
 	void removeNode(unsigned int n);
 	void addtoTail(std::string);
 	void printList();
 	Node* head;
};

#endif
