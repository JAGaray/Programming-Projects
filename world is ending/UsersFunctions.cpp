#include <iostream>
#include <string>
#include "UsersFunctions.h"
#include "LinkList.h"
#include "STask.h"
#include "ETask.h"
#include "HTask.h"

using namespace std;

/*The following function is designed to take a string, run through a for loop
 and then call the tolower function at each index.
Making each part of the string a single case (lower) for our purposes.*/

void toLower(string &s) {
  int len = s.length();
  for (int i = 0; i < len; i++) {
    s[i] = tolower(s[i]);
  }
}

/*This function is designed to create the copy of lowercase string. It calls
the toLower function which will loop through and lowercase each of the input.*/

std::string lowCopy(string s) {
  std::string copy = s;
  for (int i = 0; i < s.length(); i++) {
    copy[i] = tolower(s[i]);
  }
  return copy;
}

/*This is our input function where we'll get info re: the date and description 
of each task from the user. We're passing in the DateInput string, Description 
string, and DueDate string - each by reference so they can be modified by 
the function. We'll create 3 strings, initialized to 2 places each, except 
for year which is intiialized to 4 places. We getline the user's input, 
and we're expecting something along the lines of "00/00/0000". We will
then run an error check on the input. If its length is > 10, we reject it and
ask for a reinput. We reserve the 3rd and 6th indices for "/" characters
and if it isn't a "/" we reject it. We then will run for loops on each
portion of the string, putting it into smaller strings of (M/D/Y).
We then store those strings in the date instance of the DueDate class.
Then we run an error check by calling validDate. Then we'll get a description 
from the user. */

void baseInput(std::string& DateInput, std::string& Description, 
               DueDate& date) 
{
  string month = "00", day = "00", year = "0000";
  cout << "When is this task due? (Please use MM/DD/YYYY format) " << endl;
  while (true)
  {
    getline(cin, DateInput);
    if (DateInput.length() != 10 || DateInput[2] != '/' || DateInput[5] != '/')
      cout << "Please enter a valid date\n";
    else
    {
      for (int i = 0; i < 2; i++)
        month[i] = DateInput[i];
      for (int i = 0; i < 2; i++)
        day[i] = DateInput[i + 3];
      for (int i = 0; i < 4; i++)
        year[i] = DateInput[i + 6];
      date.mMonth = stoi(month);
      date.mDay = stoi(day);
      date.mYear = stoi(year);
      if (validDate(date.mMonth, date.mDay, date.mYear))
        break;
      else
        cout << "Please enter a valid date\n";
    }
  }
  cout << "Please enter a description for this task. " << endl;
  getline(cin, Description);
}

void timeInput(std::string time) {
  string hours = "00", minutes = "00", timeOfDay = "00";
  cout << "When is your event?\n" << "Please use 00:00 AM/PM format.\n";
  while (true) {
    getline(cin, time);
    if(time.length() > 8 || time[2] != ':' || time[6] != 'a' || 'A' || 'P' || 'p' || time[7] != 'm') {
      cout << "Please enter a valid time.\n";
    } else {
    for(int i = 0; i < 2; i++)
      hours[i] = time[i];;
    for(int i = 0; i < 2; i++)
      minutes[i] = time[i + 3];
    for(int i = 0; i < 2; i++)
      timeOfDay[i] = time[i + 6];
    }
  }
}

/*This function is going to check the User's Input for 
Add/Print/Remove/Print/Complete/Completed/Save/Load/Exit. 
We'll pass the string s, which is our user input, into the function.
We run compare between our string s, and "add", "print", etc.
If they're equivalent, we'll call the corresponding function. We have two 
print calls because we're going to use a bool to keep track of if the user
wants the detailed print or a regular print. To start, we create a bool
that's true until the user inputs exit. So the function will continue until 
the user is done.*/

bool checkInput(std::string s, LinkedList* list) {
  bool keepGoing = true;
  if (s.compare("add") == 0)
  {
    add(list);
  }
  else if (s.compare("print") == 0)
  {
    print(list, false);
  }
  else if (s.compare("detailed") == 0)
  {
    print(list, true);
  }
  else if (s.compare("remove") == 0)
  {
    remove(list);
  }
  else if (s.compare("complete") == 0)
  {
    complete(list);
  }
  else if (s.compare("completed") == 0)
  {
    completed(list);
  }
  else if (s.compare("save") == 0)
  {

  }
  else if (s.compare("load") == 0)
  {

  }
  else if (s.compare("exit") == 0)
    keepGoing = false;
  return keepGoing;
}

/*This function is going to ensure the user enters a valid date. Error checking
to make sure month is between 1 and 12. Make sure year is at least 2017 because
we can't go back in time. We also want our day value to never go over 31 or 
under 1. Then we check to make sure April/June/September/November don't
contain values over 30 (only 30 days in the month.) The rest of the code
checks days in the months to ensure good inputs. It'll return a bool if
we need a new input from the user it'll send false, otherwise true.*/

bool validDate(int month, int day, int year) {
  if (month < 1 || month > 12 || year < 2017 || day > 31 || day < 1)
    return false;
  else if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
    return false;
  else if (month == 2 && (year % 4) == 0 && day > 29)
    return false;
  else if (month == 2 && (year % 4) != 0 && day > 28)
    return false;
  else
    return true;
}

/*This is our add function. We're gonna pass a LinkedList pointer to show it 
where to go. We're going to use Switch to choose between G/S/E/H and will be
checking inputs. We run toLower on the input for case-variation. For each case
we take the BaseInput function, and get our date and description. For special
cases we'll get additional info (S/H/E) from the user and store it in its
respective class. */
void add(LinkedList* list)  {
  string input, DateInput, Description;
  string time;
  string location;
  string subject;
  DueDate date;
  STask* shopping = NULL;
  ETask* eve = NULL;
  HTask* homework = NULL;

  while (true)
  {
    cout << "What type of task is this? [G:Generic, S : Shopping, E : Event, H : Homework]" << endl;
    getline(cin, input);
    if (input.length() != 1)
    {
      cout << "I'm sorry, that command was invalid. Please try again.\n";
      continue;
    }
    input[0] = tolower(input[0]);
    switch (input[0])
    {
    case 'g':
      baseInput(DateInput, Description, date);
      list->add(new Task(Description, date));
      cout << "Task added successfully.\n";
      return;
    case 's':
      baseInput(DateInput, Description, date);
      shopping = new STask(Description, date);
      cout << "What is on your shopping list?? [Type your item and press ENTER to " <<
               "add another item. Type DONE to complete the list.]\n";
      while (true)
      {
        getline(cin, input);
        if (lowCopy(input).compare("done") == 0)
          break;
        shopping->AddItems(input);
      }
      list->add(shopping);
      cout << "Task added successfully.\n";
      return;
    case 'e':
      baseInput(DateInput, Description, date);
      eve = new ETask(Description, date);
      cout << "Where is your event?\n";
      getline(cin, location);
      timeInput(time);
      list->add(eve);
      return;
    case 'h':
      baseInput(DateInput, Description, date);
      cout << "What's the subject?\n";
      getline(cin, subject);
      homework = new HTask(Description, date);
      list->add(homework);
      return;
    default:
      cout << "I'm sorry, that command was invalid. Please try again.\n";
      input[0] = 0;
      break;
    }
  }
}

/*if the user wants to remove a Task, this function will be called. We'll pass
the LinkedList pointer list to point the way. We create an input string
and an unsigned int named Uinput (because the print function will show
tasks as a numbered list and the user will choose a number to remove).
First we check that there IS a list using the list's getlength function.
Use getline to take user's input, then stoi to take the part before a
whitespace. check the number against the list's length, if greater then invalid.
Else we remove by calling removeNode sending Uinput to the function. */

void remove(LinkedList* list) {
  string input;
  unsigned int Uinput;
  if (!list->GetLength())
  {
    cout << "You have no outstanding tasks!\n";
    return;
  }
  cout << "Which task would you like to remove?\n";
  getline(cin, input);
  Uinput = stoi(input);
  if (Uinput > list->GetLength())
  {
    cout << "Invalid selection.\n";
    return;
  }
  list->removeNode(Uinput);
  cout << "Task removed successfully.\n";
}
/*for this function, instead of having two separate print functions 
I decided to have one print that will contain a bool that will check if
the user wants the detailed print. So we pass the bool and the list pointer
to the function. error check the user input to ensure there's a list. 
then we loop through the list starting at i=1 until i = length.
We check the list and if the task HASN'T been marked as completed
we print it out.*/

void print(LinkedList* list, bool bDetailed) {
  unsigned int length = list->GetLength();
  if (length == 0)
  {
    std::cout << "You have no outstanding tasks!\n";
    return;
  }
  for (unsigned int i = 1; i <= length; i++)
  {
    if (!(*list)[i]->mIsCompleted)
    {
      cout << i << ". ";
      (*list)[i]->print(bDetailed);
    }
  }
}


/*this is for when a user wants to mark a Task as completed. It's very similar
to our remove function. Except instead we're just changing the mIsCompleted
bool to true for the requested task. Then, later, if the user calls the 
completed function then it'll only print those with the mIsCompleted
bool marked as true.*/

void complete(LinkedList* list) {
  string input;
  unsigned int Uinput;
  if (!list->GetLength())
  {
    cout << "You have no outstanding tasks!\n";
    return;
  }
  cout << "Which task would you like to complete?\n";
  getline(cin, input);
  Uinput = stoi(input);
  if (Uinput > list->GetLength())
  {
    cout << "Invalid input. " << endl;
    return;
  }
  (*list)[Uinput]->mIsCompleted = true;
  cout << "Task marked completed successfully. " << endl;
}

/*This is our completed print. Just like our other prints except we pass
false to the "bDetailed" bool check because we don't want a detailed list
for our completed. When we loop through we're just checking to make sure
the mIsCompleted is true. It'll then print any of those along the way.*/

void completed(LinkedList* list) {
  unsigned int length = list->GetLength();
  if (length == 0)
  {
    std::cout << "You have no outstanding tasks!\n";
    return;
  }
  for (unsigned int i = 1; i <= length; i++)
  {
    if ((*list)[i]->mIsCompleted)
    {
      cout << i << ". ";
      (*list)[i]->print(false);
    }
  }
}

void Save(LinkedList *list);

void Load(LinkedList* list);