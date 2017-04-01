#include <iostream>
#include "link.h"
#include "link.cpp"

using namespace std;

int main() {
  string name;
  cout << "Enter a name. " << endl;
  cin >> name;
  Node* a = new Node(name);
  Node* b = new Node("Ayo", a);
  Node* c = new Node("sup");

  b->next->next = c;

  return 0;
}
