//Yashica Patodia
//19CS10067
#include "LadiesConcession.h"

using namespace std;

// Return reference to the singleton Class
const LadiesConcession& LadiesConcession::Type(){
    static const LadiesConcession obj;
    return obj;
}

// Use Functions from abstract Class
float LadiesConcession::GetConcessionFactor() const{
    return 0.0;
}
// Use Functions from abstract Class
bool LadiesConcession::IsEligible() const{
    return false;
}

// Overloaded Usage
float LadiesConcession::GetConcessionFactor(const Passenger& passenger) const{
    if (LadiesConcession::Type().IsEligible(passenger)){
        return 0.0;
    }
    else{
        return 0.0;
    }
}
// Overloaded Usage
bool LadiesConcession::IsEligible(const Passenger& passenger) const{
    try{
        if (&passenger.GetGender() == &Gender::Female::Type()) 
        return true;
        else 
        throw Bad_Booking_Category();
    }
    catch(const std::exception& e){
        std::cerr << e.what() << '\n';
        return false;
    }
}