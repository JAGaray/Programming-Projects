#include "Contact.h"
#include <iostream>
#include <string>

using namespace std;

Contact::Contact(string n):name(n), next(NULL) {}

ostream& operator<<(ostream& os, const Contact& c) {
	return os << "Name: " << c.name;
}