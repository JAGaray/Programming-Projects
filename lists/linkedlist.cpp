#include <iostream>

using namespace std;

typedef node* link;

struct node {
	int data;
	link next;
};

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
 	 link head;
 	 unsigned int size;
};

List::List() {
	head = NULL;
	size = 0;
}

int List::length() const {
	return size;
}

link List::get_ptr_to(int pos) const {
	if((pos <1) || (pos > size))
		return NULL;
	else {
		link current = head;
		for (int i = 1; i < pos; ++i)
			current = current->next;
		return current;
	}
}

void List::insert(int new_pos, int new_item, bool& success) {
	link prev_ptr, new_node_ptr;

	int new_size = size + 1;
	success = (new_pos >= 1) && (new_pos <= new_size);
	if (success) {
		new_node_ptr = new node;
		success = (NULL != new_node_ptr);
		if (success) {
			size = new_size;
			new_node_ptr ->data = new_item;
			if (1 == new_pos) {
				new_node_ptr->next = head;
				head = new_node_ptr;
			} else {
					prev_ptr = get_ptr_to(new_pos - 1);
					new_node_ptr->next = prev_ptr->next;
					prev_ptr->next = new_node_ptr;
			}		
		}
	}
}

void retrieve(int pos, int& data, bool& success) {
	link current;
	success = (pos >= 1) && (pos <= size)
	if (success) {
		current = get_ptr_to(pos);
		data = current->data;
	}
}

bool List:isEmpty() const {
	return size > 0 ? false : true;
}

void delete(int pos, bool& success) {
	link node_to_delete, temp_ptr;
	success = (pos >= 1) && (pos <= size)
	if (success) {
		--size;
		if (1 == pos) {
			node_to_delete = head;
			head = head->next;
		}
		else {
			temp_ptr = get_ptr_to(pos-1)
			node_to_delete = temp_ptr->next;
			temp_ptr->next = node_to_delete->next;
		}
		node_to_delete->next = NULL;
		delete node_to_delete;
		node_to_delete = NULL;
	}
}

List::~List() {
	bool success;
	while (size > 0)
		delete(1, success)
;}