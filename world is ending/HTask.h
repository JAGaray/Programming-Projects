#ifndef HTASK_H_
#define HTASK_H_
#include "Task.h"

class HTask : public Task {
 public:
  HTask();
  HTask(std::string s, DueDate d);
  ~HTask();

  void print(bool);
  std::string subject;
};

#endif