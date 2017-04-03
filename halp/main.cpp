#include <iostream>
#include <string>
#include "linklist.h"

using namespace std;

int main() {
    LinkedList links;
    links.addtoTail("4");
    links.addtoTail("3");
    links.printList();
   /* links.addtoTail("2");
    //links.printList();
    links.addtoTail("1");
    links.printList();
	links.removeNode(2);*/
	//links.addtoTail("3");
	
    return 0;
}
