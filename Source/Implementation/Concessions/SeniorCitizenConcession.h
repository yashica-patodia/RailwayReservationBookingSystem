//Yashica Patodia
//19CS10067
#ifndef _SENIORCITIZENCONCESSION_H
#define _SENIORCITIZENCONCESSION_H

#include <iostream>
#include "Concession.h"
#include "../Passenger.h"
#include "../Gender/Gender.h"

using namespace std;

class SeniorCitizenConcession : public Concession
{
   
    public:
        static const SeniorCitizenConcession& Type();

        float GetConcessionFactor() const;
        bool IsEligible() const;
        float GetConcessionFactor(const Passenger& passenger) const;
        bool IsEligible(const Passenger& passenger) const;
    
    private:
     SeniorCitizenConcession();
    ~SeniorCitizenConcession();
};

// Inline Implementation of Constructor
inline SeniorCitizenConcession::SeniorCitizenConcession(){};

// Inline Implementation of Destructor
inline SeniorCitizenConcession::~SeniorCitizenConcession(){};

#endif