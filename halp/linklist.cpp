#include "linklist.h"
#include <string>
#include <iostream>

Node::Node(std::string taskType) {
    this->taskType = taskType;
	this->next = NULL;
}

//std::string Node::getTaskType() {
//    std::cin >> taskType;
  //  return taskType;
//}

LinkedList::LinkedList():head(NULL) {}

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

void LinkedList::addtoTail(std::string taskType) {
	if (head == NULL) {
		Node* newHead = new Node(taskType);
		this->head = newHead;
		//newHead->taskType = taskType;
	}
	else {
		Node* local = head;
		Node* prev = NULL;
		while (local != NULL) {
			//prev = local;
			if (taskType.compare(local->taskType) <= 0) {
				Node* newNode = new Node(taskType);
				//if (prev != NULL) {
				//	newNode->next = prev;
				//}
				//prev->next = newNode
				prev = local;
				local = newNode;
				local->next = prev;
				break;
			}
			else if (local->next == NULL) {
				Node* newNode = new Node(taskType);
				local->next = newNode;
				break;
			}
			else {
				local = local->next;
			}
			//prev = local;
			//local = local->next;
			//Node* newNode = new Node(taskType);
			//local->next = newNode;
		}
	}
}

void LinkedList::printList() {
    Node* local = head;
    while(local != NULL) {
        std::cout << local->taskType << std::endl;
        local = local->next;
    }
}

