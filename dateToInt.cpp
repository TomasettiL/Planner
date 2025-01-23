

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int dateToInt(string date){
    // remove all instances of '-' from date
    date.erase(remove(date.begin(), date.end(), '-'), date.end());
    // split into three variables
    string month = date.substr(0, 2);
    string day = date.substr(2, 2);
    string year = date.substr(4, 4);
    // convert strings to ints and apply proper multipliers
    int first = stoi(month) * (pow(10, 2));
    //cout << first << endl;
    int second = stoi(day) * (pow(10, 0));
    //cout << second << endl;
    int third = stoi(year) * (pow(10, 4));
    //cout << third << endl;

    int final = first + second + third;
    return final;

}