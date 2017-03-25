#ifndef CONTACT_H_
#define CONTACT_H_

#include <iostream>
#include <string>

class Contact {
	friend std::ostream& operator<<(std::ostream&, const Contact&);

public:
	Contact(std::string name = "null");

private:
	std::string name;
	Contact* next;
};

#endif