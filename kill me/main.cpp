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

    //new node to end
  Node* e = new Node("fuego");
  b->next->next->next = e;
//new node F
  Node* f = new Node("pescado");
  b->next->next->next->next = f;

  //node G
  Node* g = new Node("no homo");
  b->next->next->next->next->next = g;
  //node H
  Node* h = new Node("fuck dominos");
  b->next->next->next->next->next->next = h;

  cout << b->name << " " << b->next->name << " " << b->next->next->name
  	   << " " << b->next->next->next->name << " " <<
  	   b->next->next->next->next->name << " " <<
  	   b->next->next->next->next->next->name <<
  	   " " << b->next->next->next->next->next->next->name << endl;
  
  return 0;
}
