//Yashica Patodia
//19CS10067

#ifndef DATE_H
#define DATE_H
#include <iostream>
#include <map>
#include "Exception/ExceptionHeaders.h"

using namespace std;

class Date{
    enum Month {Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};
    enum Day {Mon, Tue, Wed, Thr, Fri, Sat, Sun};
    typedef unsigned int UINT;
    UINT date_;
    Month month_;
    UINT year_;
    
    const char monthNames [12][4] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    const char dayNames [7][10] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednusday", "Thursday", "Friday"};
    map<int, int> noDaysMonth = {
        {1, 31},
        {2, 28},
        {3, 31},
        {4, 30},
        {5, 31},
        {6, 30},
        {7, 31},
        {8, 31},
        {9, 30},
        {10, 31},
        {11, 30},
        {12, 31}
    };

    public:
        // Constructor 
        Date(UINT d, UINT m, UINT y);

        // Destructor
        ~Date();

        // Print the date
        friend ostream& operator<< (ostream &os, const Date& date);

        // Compare Dates
        friend bool operator<(const Date& a, const Date& b);

        // Check if given date is valid
        bool ValidDate();

        // Returns the day according to the date
        const char *GetDay();

        // Unit Testing for Date Class
        static void UTDate();

        // Utiliser Functions 
        // Finding if the year of the date is leap or not
        bool IsLeap();

        // Function to calculate leap years 
        int countLeapYears() const;

        // Function to get number of days between two dates
        friend int operator-(Date& a, Date& b);
};

#endif