#include "linklist.h"

LinkedList::LinkedList(Node* next = NULL) {}

LinkedList::~LinkedList() {}

Task::Task(std::type) {}

Task::~Task() {}
Task::bool completed(std::type, std::date, std::description) {

}

TaskLinkedList::TaskLinkedList() {}

TaskLinkedList::~TaskLinkedList() {}

TaskLinkedList::void insertNode(Node* head, Node* current) {
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

TaskLinkedList::void removeNode(Node* head, Node* current) {
	Node* prev = new Node;
	if (head == NULL) {
		cout << "Error. List is empty. " << endl;
	} 
	if (head->date == current->date) {
		prev = head->next;
		
		head = prev->next;
	} else {
		prev = head;
		while(prev->next != NULL && prev->date )
	}


	}

	}

}