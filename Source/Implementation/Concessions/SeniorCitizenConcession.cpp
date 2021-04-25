//Yashica Patodia
//19CS10067
#include "SeniorCitizenConcession.h"

using namespace std;

// Return reference to the singleton Class
const SeniorCitizenConcession& SeniorCitizenConcession::Type(){
    static const SeniorCitizenConcession obj;
    return obj;
}

// Use Functions from abstract Class
float SeniorCitizenConcession::GetConcessionFactor() const{
    return 0.0;
}
// Use Functions from abstract Class
bool SeniorCitizenConcession::IsEligible() const{
    return false;
}
// Overloaded Usage
float SeniorCitizenConcession::GetConcessionFactor(const Passenger& passenger) const{
    if (SeniorCitizenConcession::Type().IsEligible(passenger))
    {
        if (&passenger.GetGender() == &Gender::Female::Type())
         return 0.5;
        else
         return 0.4;
    }
    else{
        return 0.0;
    }   
}
// Overloaded Usage
bool SeniorCitizenConcession::IsEligible(const Passenger& passenger) const{

    try{
        if (&passenger.GetGender() == &Gender::Female::Type())
        {
            if (passenger.GetAge() > 58) 
            return true;
            else
             throw Bad_Booking_Category();
        }
        else{
            if (passenger.GetAge() > 60)
             return true;
            else
             throw Bad_Booking_Category();
        }
    }
    catch(const std::exception& e){
        std::cerr << e.what() << '\n';
        return false;
    }
}