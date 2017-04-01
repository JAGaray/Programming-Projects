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
  cout << b->name << endl;
  b->name = a->name;
  cout << b->name << endl;

  return 0;
}
