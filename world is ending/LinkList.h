#ifndef LINKLIST_H_
#define LINKLIST_H_
#include <iostream>
#include "Task.h"

struct node {
  Task* mTask;
  node* next;
  node(Task* t);
  ~node();
};

class LinkedList {
 public:
  LinkedList();
  ~LinkedList();
  void addToHead(Task* t);
  void addToTail(Task* t);
  void add(Task* t);
  void removeHead();
  void removeTail();
  void removeNode(unsigned int n);
  Task* operator[](unsigned int i);
  unsigned int GetLength();
  unsigned int listLength = 0;

 private:
  node* head;
};

#endif