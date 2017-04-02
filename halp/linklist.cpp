#include "linklist.h"

LinkedList::LinkedList(Node* next = NULL) {}

LinkedList::~LinkedList() {}

Task::Task(std::string type) {}

Task::~Task() {}
bool Task::completed() {

}

TaskLinkedList::TaskLinkedList() {}

TaskLinkedList::~TaskLinkedList() {}

void TaskLinkedList::insertNode(Node* head) {
  Node* prev = new Node;
  if(head == NULL || head->date >= current->date) {
  	current->next = head;
  	head = current;
  } else {
  	  prev = head;
      while(prev->next != NULL && prev->next->data < current->data) {
  	    prev = prev->next;
  		}
  		current->next = prev->next;
			prev->next = current;
	}
}

TaskLinkedList::void removeNode(unsigned int n) {
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
	delete curr->date;
	delete curr;
	}

}
