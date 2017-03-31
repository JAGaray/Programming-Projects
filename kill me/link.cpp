#include "Link.h"
#include <iostream>

Node::Node(std::string name, Node* next):name(name), next(next) {

}

Node::~Node(){}
