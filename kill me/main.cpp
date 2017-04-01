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
  Node* d = new Node("kuday");

  b->next->next = c;
  Node* temp;
  temp = b->next->next;
  b->next->next = d;
  d->next = temp;

  temp = b->next;
  delete b->next;
  b->next = b->next->next;

  cout << b->name << " " << b->next->name << " " << b->next->next->name
  	   << " " /*<< b->next->next->name*/ << endl;


  return 0;
}
