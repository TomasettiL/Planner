#include "getDate.h"
#include <iostream>
#include <ctime>
using namespace std;

string getDate(){
    // get current time
    time_t now = time(nullptr);

    // convert to local time structure
    tm* localTime = localtime(&now);

    // buffer to hold the formatted date
    char dateBuff[11]; //'MM-DD-YYYY/0'

    // format date into the buffer
    strftime(dateBuff, sizeof(dateBuff), "%m-%d-%Y", localTime);

    return dateBuff;
}