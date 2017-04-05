#ifndef ETASK_H_
#define ETASK_H_
#include "Task.h"

class ETask : public Task {
 public:
  ETask();
  ETask(std::string s, DueDate d);
  ~ETask();

  void print(bool);
  std::string location;
  std::string time;
};

#endif