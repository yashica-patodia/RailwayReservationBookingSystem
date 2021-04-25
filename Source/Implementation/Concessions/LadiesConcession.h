//Yashica Patodia
//19CS10067
#ifndef _LADIESCONCESSION_H
#define _LADIESCONCESSION_H

#include <iostream>
#include "Concession.h"
#include "../Passenger.h"
#include "../Gender/Gender.h"

using namespace std;

class LadiesConcession : public Concession
{
    
    public:
        // To return reference of the singleton class
        static const LadiesConcession& Type();

        // Use function from Abstract Class
        float GetConcessionFactor() const;
        // Use function from Abstract Class
        bool IsEligible() const;
        // Overload Function from Abstract Class
        float GetConcessionFactor(const Passenger& passenger) const;
        // Overload Function from Abstract Class
        bool IsEligible(const Passenger& passenger) const;

        

        
    private:
            // Constructor
        LadiesConcession();

        // Destructor
        ~LadiesConcession();
};

// Inline Implementation of Constructor
inline LadiesConcession::LadiesConcession(){};

// Inline Implementation of Destructor
inline LadiesConcession::~LadiesConcession(){};

#endif