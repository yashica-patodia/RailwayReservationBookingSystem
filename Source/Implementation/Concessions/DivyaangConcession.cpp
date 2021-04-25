//Yashica Patodia
//19CS10067
#include "DivyaangConcession.h"

using namespace std;

// To Get Type of the Singleton Class
const DivyaangConcession& DivyaangConcession::Type(){
    static const DivyaangConcession obj;
    return obj;
}

// Use Functions from abstract Class
float DivyaangConcession::GetConcessionFactor() const{
    return 0.0;
}
// Use Function from abstract Class
bool DivyaangConcession::IsEligible() const{
    return false;
}

// Overloaded Usage
float DivyaangConcession::GetConcessionFactor(const Passenger& passenger, const BookingClasses& bookingClass, const Divyaang& disability) const{
    if (DivyaangConcession::Type().IsEligible(passenger, disability)){
        return disability.GetConcessionFactor(bookingClass);
    }
    else{
        return 0.0;
    }   
}


// Overloaded Usage
bool DivyaangConcession::IsEligible(const Passenger& passenger, const Divyaang& disability) const{
    try{
        if (&passenger.GetDisabilty() == &disability) 
        return true;
        else
        {
            throw Bad_Booking_Category();
        };
    }
    catch(const std::exception& e){
        std::cerr << e.what() << '\n';
        return false;
    }
}