// class for individual activities/events

#include "activity.h"

// constructor implementation
activity::activity(string title, string date, string description, int priority, bool recurring, int num)
    : title(title), date(date), description(description), priority(priority), recurring(recurring), num(num) {}