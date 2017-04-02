#include <iostream>
#include "linklist.h"
#include "linklist.cpp"

using namespace std;

int main() {
  Node* head = new Node;
  LinkedList("yo", head);
  cout << head->name << endl;
  Node *next = new Node;
  insertNode(head, next);

}
