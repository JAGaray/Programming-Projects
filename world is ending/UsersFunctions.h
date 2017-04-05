#ifndef USERSFUNCTIONS_H_
#define USERSFUNCTIONS_H_
#include <iostream>
#include "LinkList.h"

void toLower(std::string& s);

std::string lowCopy(std::string s);

void baseInput(std::string&, std::string&, DueDate&);

bool checkInput(std::string s, LinkedList* list);

bool validDate(int month, int day, int year);

void add(LinkedList* list);

void remove(LinkedList* list);

void print(LinkedList* list, bool bDetailed);

void complete(LinkedList* list);

void completed(LinkedList* list);

void Save(LinkedList *list);

void Load(LinkedList* list);

#endif