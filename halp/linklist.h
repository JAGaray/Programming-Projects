#ifndef LINKLIST_H_
#define LINKLIST_H_
#include <iostream>

struct Node {
  Node* next;
};

class LinkedList {
 public:
 	LinkedList(Node* head);
 	~LinkedList();
    void insertNode(Node* userNode);
 	void removeNode(unsigned int n);
 	Node* head;
};

#endif
