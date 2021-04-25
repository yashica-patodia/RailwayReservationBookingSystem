
//Yashica Patodia
//19CS10067
#ifndef RAILWAYS_H
#define RAILWAYS_H
#include <iostream>
#include <map>
#include <set>
#include "Station.h"
#include "./Exception/ExceptionHeaders.h"

using namespace std;

class Railways{
    private:

    static set<Station> sStations;
    static map<Station, map<Station, float>> sDistStations;
    static Railways *sRailways;

    // Private Constructor
    Railways();
    
    // Private Destructor
    ~Railways();

    public:
        // Get Instance of the Singleton Set
        static Railways& GetRailways();
         // Utility Function: Adding all distances
        void AddDist(const Station& a, const Station& b, float distance);

        // Utility Function: Adding a Station
        void AddStation(const Station& a);
        // Get Distance between two stations
        float GetDistance(const Station& a, const Station& b);
         // Printing the Railway Class
        friend ostream& operator<< (ostream& os, const Railways& railway);

        // Function to check if Station Exists
        bool StationPresent(const Station& a);

        // Unit Testing for Railways Class
        static void UTRailways();
};

#endif