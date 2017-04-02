#include <iostream>
#include "linklist.h"
#include "linklist.cpp"

using namespace std;

int main() {
    LinkedList links;
    //links.printList();
    links.addtoTail("Generic");
    links.printList();

    return 0;
}
