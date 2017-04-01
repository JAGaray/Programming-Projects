#ifndef LINK_H_
#define LINK_H_

#include <iostream>

class Node {
 public:
  Node(std::string, Node* next = NULL);
  ~Node();
  std::string name;
  Node* next;
 private:
};

#endif

