#ifndef TASK_H_
#define TASK_H_
#include <string>
#include "DueDate.h"

/*This is our generic class, as well as what our other classes will be 
inheriting from. We create the virtual print so that our child classes'
prints will take precedence over the parent class. We are also includ-
ing an isCompleted bool which we'll be using during our check for
completed tasks*/

class Task {
 public:
  Task();
  Task(std::string s, DueDate d);
  ~Task();
  bool operator<(Task t);
  void addInfo(std::string s, DueDate d);
  std::string getDate(void);
  virtual void print(bool);

  std::string mDescription;
  DueDate mDate;
  char mType;
  bool mIsCompleted;
};

#endif