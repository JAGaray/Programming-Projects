#include "STask.h"
#include <iostream>

/*when constructing the STask the type MUST be s.*/
STask::STask() : Task() {
  mType = 's';
}

STask::STask(std::string s, DueDate d) : Task(s, d) {
  mType = 's';
}

STask::~STask() {}
/*we push back the items added for the shopping list using the vector
pushback method.*/
void STask::AddItems(std::string s) {
  this->mItems.push_back(s);
}
/*go through the vector and print out the items inside*/
void STask::print(bool detailed) {
  this->Task::print(detailed);
  if (detailed) {
    for (int i = 0; i < this->mItems.size(); i++) {
      std::cout << this->mItems[i] << std::endl;
    }
  }
}