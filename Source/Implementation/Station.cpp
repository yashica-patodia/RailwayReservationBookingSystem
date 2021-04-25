//Yashica Patodia
//19CS10067
#include "Station.h"

using namespace std;


// Constructor
Station::Station(string name):name_(name){};        
Station::Station(const Station& f):name_(f.name_){};  // Copy Constructor


// Get Name of the Station
string Station::GetName()
{
    return name_;
}

// Get Distance of one station from another
float Station::GetDistance(const Station& f)
{
    // Railways is a Singleton Class
    Railways& railway = const_cast<Railways&>(Railways::GetRailways());
    return railway.GetDistance(*this, f);
}

// Copy Assignment Operator
Station& Station::operator=(const Station& f)
{
    this->name_ = f.name_;
    return *this;
}

// Output stream
ostream& operator<< (ostream &out, const Station& f)
{
    out << "[Station: " << f.name_ << "]";
    return out;
}
// Destructor
Station::~Station(){};
