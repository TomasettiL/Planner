#ifndef ACTIVITY_H
#define ACTIVITY_H

#include <iostream>
using namespace std;

struct activity{
    string title;
    string date;
    string description;
    int priority;
    bool recurring;
    int num;
    // add time of event and duration
    activity(string title, string date, string description, int priority, bool recurring = false, int num = 0);
};

#endif