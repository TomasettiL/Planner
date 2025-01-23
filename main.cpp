//#include "getDate.cpp"
//#include "dateToInt.cpp"
#include "schedule.cpp"
#include <iostream>
#include <ctime>
using namespace std;

//string getDate();

int main(){
    // store date as string
    string date = getDate();
    int num = dateToInt(date);
    schedule Obj = schedule();
    Obj.addActivity();
    Obj.displayFromMap();
}