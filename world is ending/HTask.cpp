#include <iostream>
#include <string>
#include "HTask.h"

HTask::HTask() {
  mType = 'h';
}

HTask::HTask(std::string s, DueDate d) :Task(s, d) {
  mType = 'h';
}

HTask::~HTask() {}

void HTask::print(bool detailed) {
  this->Task::print(detailed);
  if (detailed) {
  std::cout << subject;
  }
}