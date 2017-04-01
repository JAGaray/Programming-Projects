#ifndef LINK_H_
#define LINK_H_

#include <iostream>

class Node {
 public:
  Node(std::string name = "", Node* next = NULL);
  ~Node();

 private:
  std::string name;
  Node* next = NULL;
};

#endif

