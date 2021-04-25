//Yashica Patodia
//19CS10067

#include "Railways.h"

using namespace std;

Railways *Railways::sRailways = 0;
set<Station> Railways::sStations = set<Station> {};
map<Station, map<Station, float>> Railways::sDistStations = map<Station, map<Station, float>> {};

// Constructor for Railways
Railways::Railways() {};

// Destructor
Railways::~Railways() {};

// Get Instance of the object for singleton object
Railways& Railways::GetRailways() {
    if (!sRailways) sRailways = new Railways();
    return *sRailways;
}

// Return Distance between two stations
float Railways::GetDistance(const Station& a, const Station& b) {
    try {
        if (a == b) 
        throw Same_Station_Dist();
        else {
            if ((this->sStations.find(a) == this->sStations.end()))
            throw Bad_Railways_Station();
             if (this->sStations.find(b) == this->sStations.end())
              throw Bad_Railways_Station();
            else {
                if (a < b) {
                    return this->sDistStations[a][b];
                }
                else {
                     return this->sDistStations[b][a];
                }
            }
        }
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << endl;
        return 0.0;
    }
}

// Utility Function : Add distance to railways
void Railways::AddDist(const Station& a, const Station& b, float distance) {
    try {
        if (a == b)
         throw Same_Station_Dist();
        else {
            if (this->sStations.find(a) == this->sStations.end())
            throw Bad_Railways_Station();
             if (this->sStations.find(b) == this->sStations.end())
             throw Bad_Railways_Station();
            else {
                if (a < b) {
                    this->sDistStations[a][b] = distance;
                }
                else {
                     this->sDistStations[b][a] = distance;
                }
            }
        }
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << endl;
    }
}

// Checks if a station exists
bool Railways::StationPresent(const Station& a) {
    if (this->sStations.find(a) == this->sStations.end())
     return false;
    else
     return true;
}

// Utility Function : Adding Station to Railways
void Railways::AddStation(const Station& a) {
    try {
        if (this->sStations.find(a) == this->sStations.end()) this->sStations.insert(a);
        else throw Duplicate_Railways_Station();
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
}

// Printing the Railway Class
ostream& operator<< (ostream& out, const Railways& f) {
    out << "{Railways}";
    return out;
}