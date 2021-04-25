//Yashica Patodia
//19CS10067
#ifndef _GENERALCONCESSION_H
#define _GENERALCONCESSION_H

#include <iostream>
#include "Concession.h"

using namespace std;

class GeneralConcession : public Concession
{
    
    public:
        // To return reference of the singleton class
        static const GeneralConcession& Type();

        // Use function from Abstract Class
        float GetConcessionFactor() const;

        // Use function from Abstract Class
        bool IsEligible() const;
        
    private:
        // Constructor
    GeneralConcession();

    // Destructor
    ~GeneralConcession();
};

// Inline Implementation of Constructor
inline GeneralConcession::GeneralConcession(){};

// Inline Implementation of Destructor
inline GeneralConcession::~GeneralConcession(){};

#endif