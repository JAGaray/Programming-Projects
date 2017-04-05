#include <string>
#include <iostream>
#include "Task.h"

Task::Task():mType('g'), mIsCompleted(false) {}

Task::Task(std::string s, DueDate d) : mDescription(s), mDate(d), mType('g'), mIsCompleted(false) {}

Task::~Task() {}

bool Task::operator<(Task t) {
  if(this->mDate < t.mDate) {
    return true;
  } 
  else if (this->mDate == t.mDate && (this->mDescription.compare(t.mDescription) < 0)) {
    return true;
  }
  else {
    return false;
  }
}

void Task::addInfo(std::string s, DueDate d) {
  mDescription = s;
  mDate = d;
}

std::string Task::getDate(void) {
  std::string month, day;
  if (this->mDate.mMonth>9)
    month = std::to_string(this->mDate.mMonth);
  else
    month = "0" + std::to_string(this->mDate.mMonth);
  if (this->mDate.mDay>9)
    day = std::to_string(this->mDate.mDay);
  else
    day = "0" + std::to_string(this->mDate.mDay);
  return month + "/" + day + "/" + std::to_string(this->mDate.mYear);
}

void Task::print(bool isDetailed) {
  std::cout << this->getDate() << " - ";
  switch (this->mType)
  {
  case 'e':
    std::cout << "[Event] ";
    break;
  case 'h':
    std::cout << "[Homework] ";
    break;
  case 's':
    std::cout << "[Shopping] ";
    break;
  default:
    break;
  }
  std::cout << this->mDescription << std::endl;
}