#include "linklist.h"

Node::Node(Task* tool);

LinkedList::LinkedList(Node* head = NULL) {}

LinkedList::~LinkedList() {}

void LinkedList::insertNode(Node* userNode) {
 /* Node* prev = NULL;
  if(head == NULL) {
  	next->next = head;
  	head = next;
  } else {
  	  prev = head;
      while(prev->next != NULL) {
  	    prev = prev->next;
  		}
  		next->next = prev->next;
			prev->next = next;*/
}

void LinkedList::removeNode(unsigned int n) {
	Node* prev = NULL;
	Node* curr = NULL;
	curr = head;
	if (head == NULL) {
		std::cout << "Error. List is empty. " << std::endl;
	}
	for (int i = 0; i < (n-1); ++i) {
    prev = curr;
    curr = curr->next;
	}
	prev->next = curr->next;
	delete curr;
}

