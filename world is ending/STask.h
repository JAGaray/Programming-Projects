#ifndef STASK_H_
#define STASK_H_

#include <vector>
#include "Task.h"

/*This class is gonna be inheriting from the generic Task class.
We create a vector of strings to hold the shopping list items.*/

class STask : public Task {
 public:
  STask();
  STask(std::string s, DueDate d);
  ~STask();

  std::vector<std::string> mItems;
  void AddItems(std::string);
  void print(bool);
};

#endif