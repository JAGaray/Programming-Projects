#ifndef LIST_H_
#define LIST_H_
#include <iostream>

const int MAX_LIST_SIZE = 10;

class List {
 public:
 	 List();
 	 ~List();

   bool isEmpty() const;
   int length() const;
   void insert(int new_pos, int new_item, bool& success);
   void delete(int pos, bool& success);
   void retrieve(int pos, int& data, bool& success) const;

 private:
   int items[MAX_LIST_SIZE];
   int size;
}

//Constructor
List::List() {
	size = 0;
}

//Destructor
List::~List() {
	size = 0;
}

bool List::isEmpty() const {
	return (0 == size);
}

void List::retrieve(int pos, int& data, bool& success) const {
  success = (1 <= pos && pos <= size);
  if (success) {
  	data = items[pos-1];
  }
}

void List::insert(int new_pos, int new_item, bool& success) {
	if (N ==size)
		success = false; //array is full
	else if(new_pos < 1 || new_pos > size + 1)
		success = false; //bad value
	else {
		for (int k = size-1; k >= new_pos-1; --k)
			items[k+1] = Items[k];
		items[new_pos-1] = new_item;
		++size;
		success = true;
	}
}

void List::delete(int pos, bool& success) {
	if (0 == size)
		success = false;
	else if (pos < 1 || pos > size)
		success = false;
	else {
		for (int k = pos-1; k <= size-2; k++)
			items[k] = items[k+1]
		--size;
		success = true;
	}
}
#endif