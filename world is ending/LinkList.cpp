#include "LinkList.h"
#include <iostream>
#include <string>

node::node(Task* t):mTask(t), next(NULL) {}
node::~node() {}
LinkedList::LinkedList():head(head), listLength(0) {}

LinkedList::~LinkedList() {
  node* temp = NULL;
  for (unsigned int i = 0; i < this->listLength; ++i) {
    temp = this->head;
    this->head = this->head->next;
    delete temp->mTask;
    delete temp;
  }
}

void LinkedList::addToHead(Task* t) {
  node* head = new node(t);
  ++listLength;
}

void LinkedList::addToTail(Task* t) {
  if (head == NULL) {
    addToHead(t);
  }
  else {
    node* newNode = new node(t);
    node* local = head;
    while (local->next != NULL) {
      local = local->next;
    }
    local->next = newNode;
    ++listLength;
  }
}

void LinkedList::removeHead() {
  if (head == NULL)
    return;
  node* old = head;
  head = head->next;
  delete old;
  --listLength;
}

void LinkedList::removeTail() {
  if (head == NULL)
    return;
  if (head->next == NULL)
    return removeHead();

  node* old;
  node* local = head;
  while (local != NULL) {
    if (local->next != NULL && local->next->next == NULL) {
      old = local->next;
      local->next = NULL;
      delete old;
      --listLength;
      return;
    }
    local = local->next;
  }
}

void LinkedList::removeNode(unsigned int n) {
  if (head == NULL || n > listLength)
    return;
  if (head->next == NULL)
    return removeHead();
  if (n >= listLength)
    return;
  if (n == listLength - 1)
    return removeTail();
  unsigned count = 0;
  node* local = head;
  while (local != NULL) {
    if (count == n - 1) {
      node* temp = local->next;
      local->next = temp->next;
      delete temp;
      --listLength;
      return;
    }
    local = local->next;
    ++count;
  }

}

void LinkedList::add(Task * t)
{
  if (this->head == NULL)
  {
    this->head = new node(t);
    this->listLength++;
  }
  else
  {
    node * temp = head, *temp2 = NULL;
    while (temp)
    {
      if ((*t) < *(temp->mTask))
      {
        node * newNode = new node(t);
        if (this->head == temp)
          head = newNode;
        if (temp2)
          temp2->next = newNode;
        newNode->next = temp;
        this->listLength++;
        break;
      }
      else if (!temp->next)
      {
        temp->next = new node(t);
        this->listLength++;
        break;
      }
      else
      {
        temp2 = temp;
        temp = temp->next;
      }
    }
  }
}


Task* LinkedList::operator[](unsigned int n)
{
  if (!this->head)
    return NULL;
  node *temp = this->head;
  for (unsigned int i = 0; i < (n - 1); i++)
  {
    temp = temp->next;
  }
  return temp->mTask;
}

unsigned int LinkedList::GetLength() {
  return listLength;
}