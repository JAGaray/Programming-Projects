#include "linklist.h"

LinkedList::LinkedList(std::string name, Node* head = NULL) {}

LinkedList::~LinkedList() {}

Task::Task(std::string type) {}

Task::~Task() {}
bool Task::completed() {

}

TaskLinkedList::TaskLinkedList() {}

TaskLinkedList::~TaskLinkedList() {}

void LinkedList::insertNode(Node* head, Node* next) {
  Node* prev = new Node;
  if(head == NULL) {
  	next->next = head;
  	head = next;
  } else {
  	  prev = head;
      while(prev->next != NULL) {
  	    prev = prev->next;
  		}
  		next->next = prev->next;
			prev->next = next;
	}
}

void LinkedList::removeNode(unsigned int n) {
	Node* prev = new Node();
	Node* curr = new Node();
	curr = head;
	if (head == NULL) {
		std::cout << "Error. List is empty. " << std::endl;
	}
	for (int i = 0; i < (n-1); ++i) {
    prev = curr;
    curr = curr->next;
	}
	prev->next = curr->next;
	delete curr->next;
	delete curr;
}

