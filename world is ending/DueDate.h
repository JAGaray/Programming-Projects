#ifndef DUEDATE_H_
#define DUEDATE_H_

struct DueDate {
  DueDate();
  DueDate(int, int, int);
  ~DueDate();
  bool operator<(DueDate n);
  bool operator==(DueDate n);
  void operator=(DueDate n);

  int mMonth;
  int mDay;
  int mYear;
};

#endif