#ifndef SCHEDULE_H
#define SCHEDULE_H

#include "activity.cpp"
#include "getDate.cpp"
#include "dateToInt.cpp"

#include <iostream>
#include <queue>
#include <map>
using namespace std;

class schedule{
    private:
        string today;
        // list and priority queue of events for the day
        vector<shared_ptr<activity>> todaysEvents;
        //priority_queue<shared_ptr<activity>> eventsToday;
        // all events (multimap allows multiple variables to have the same key)
        multimap<string, shared_ptr<activity>> allEvents;
    public:
        schedule();
        void addActivity();
        void displayFromMap();
        void displayPrioQ();
        void testInitialization();
};

#endif