// class for the schedule, stores and organizes activity objects

#include "schedule.h"

// constructor implementation
schedule::schedule(){
    today = getDate();
}
// add activity implementation
void schedule::addActivity(){
    string t;
    string d;
    string desc;
    int prio = 1;
    bool rec;
    int n;
    cout << "Enter the title of the activity: ";
    cin >> t;
    cout << "Enter the date of the activity ('MM-DD-YYYY/0'): ";
    cin >> d;
    cout << "Enter a description for the activity: ";
    cin >> desc;
    //cout << "Enter the priority of the activity: ";
    //cin >> prio;
    //cout << "If this activity is recurring enter '1': ";
    //cin >> rec;
    n = dateToInt(d);
    // create new activity using shared_ptr
    auto newAct = make_shared<activity>(t, d, desc, prio, rec, n);
    allEvents.insert({d, newAct});
    if (d == today){
        todaysEvents.push_back(newAct);
    }
}
// display all
void schedule::displayFromMap(){
    string d;
    
    // Clear input buffer to avoid leftover data affecting `cin`
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    
    cout << "Enter the date you would like to display the activities for ('MM-DD-YYYY/0'): ";
    cin >> d;
    // get all activities for given date
    auto range = allEvents.equal_range(d);

    cout << "Activities on " << d << ":" << endl;
    for (auto it = range.first; it != range.second; ++it){
        const auto& activity = it->second; // shared pointer to activity
        cout << activity->title << "\n"
                << activity->date << "\n"
                << activity->description << "\n";
    }
}

void schedule::displayPrioQ(){
    // display todays events
    // move vector elements to priority queue
    priority_queue<shared_ptr<activity>> eventsToday;
    for (int i = 0; i < todaysEvents.size(); i++){
        eventsToday.push(todaysEvents[i]);
    }
    // display all events
    while (!eventsToday.empty()){
        const auto& activity = eventsToday.top();
        cout << activity->title << "\n"
                << activity->date << "\n"
                << activity->description << "\n";
        // empty queue
        eventsToday.pop();
    }
}

void schedule::testInitialization(){
    int length = 5;
    vector<string> t = {"COMM", "HIST", ""};
    string d[length];
    string desc;
    int prio = 1;
    bool rec;
    int n;
}