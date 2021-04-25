//Yashica Patodia
//19CS10067

#ifndef _STATION_H
#define _STATION_H
#include <iostream>
#include "Railways.h"

using namespace std;

class Station{
    private:
    string name_;

    public:

        // Constructors
        Station(string name);           // General Constructor
        Station(const Station& f);      // Copy Constructor

        // Destructor
        ~Station();
        // Copy Assignment Operator
        Station& operator= (const Station& f);
        // Less than Operator
        friend bool operator<(const Station& a, const Station& b);

        // Get Name of the station
        string GetName();               
        // Get Distance of the station from another station
        float GetDistance(const Station& f);
        // Equal To Operator
        friend bool operator==(const Station& a, const Station& b);
        

        

        
        // Operator to print the Station
        friend ostream& operator<< (ostream &os, const Station& f);

        // Unit Testing Function For Station Class
        static void UTStation();
};

inline bool operator==(const Station& a, const Station& b)
{
    return a.name_ == b.name_;
}

inline bool operator<(const Station& a, const Station& b)
{
    return a.name_ < b.name_;
}

#endif