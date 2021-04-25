//Yashica Patodia
//19CS10067
#ifndef _DIVYAANGCONCESSION_H
#define _DIVYAANGCONCESSION_H

#include <iostream>
#include "Concession.h"
#include "../Passenger.h"
#include "../BookingClasses/BookingClasses.h"
#include "../Divyaang/Divyaang.h"

using namespace std;

class DivyaangConcession : public Concession{
    
    public:
        // To return reference of the singleton class
        static const DivyaangConcession& Type();

        // Use function from Abstract Class
        float GetConcessionFactor() const;

        // Overload Function from Abstract Class
        float GetConcessionFactor(const Passenger& passenger, const BookingClasses& bookingClass, const Divyaang& disabilty) const;

        // Use function from Abstract Class
        bool IsEligible() const;

        // Overload Function from Abstract Class
        bool IsEligible(const Passenger& passenger, const Divyaang& disabilty) const;

        private:
        // Constructor 
        DivyaangConcession();

        // Destructor
        ~DivyaangConcession();  
};

// Inline Implementation of Constructor
inline DivyaangConcession::DivyaangConcession(){};

// Inline Implementation of Destructor
inline DivyaangConcession::~DivyaangConcession(){};

#endif