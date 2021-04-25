//Yashica Patodia
//19CS10067
#ifndef _CONCESSION_H
#define _CONCESSION_H

#include <iostream>
#include "../Exception/ExceptionHeaders.h"

using namespace std;

class Concession{
   
    public: 
        // Virtual Function to give Concession Factor
        virtual float GetConcessionFactor() const = 0;

        // Virtual Function to check Eligibilty of a Booking for the concession
        virtual bool IsEligible() const = 0;
        //Static unit testing
        static void UTConcession();
     protected:
        // Constructor for the Abstract Class
        Concession();

        // Virtual Destructor for the Abstract Class
        virtual ~Concession();
};

// Inline Implementation of Constructor
inline Concession::Concession(){};

// Inline Implementation of Destructor
inline Concession::~Concession(){};

#endif