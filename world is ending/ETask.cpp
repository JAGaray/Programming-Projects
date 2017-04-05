#include <iostream>
#include <string>
#include "ETask.h"

using namespace std;

ETask::ETask() {
  mType = 'e';
}

ETask::ETask(string s, DueDate d) : Task(s, d) {
  mType = 'e';
}

ETask::~ETask() {}

void ETask::print(bool detailed) {
  this->Task::print(detailed);
  if (detailed) {
    cout << location << "|" << time << endl;
  }
}