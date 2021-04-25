//Yashica Patodia
//19CS10067

#ifndef _BADPASSENGERDISABILTYID_H
#define _BADPASSENGERDISABILTYID_H
#include <iostream>
#include "Bad_Passenger.h"

using namespace std;

class Bad_Passenger_DisabiltyID : public Bad_Passenger
{
    const char * what() const throw();
};

inline const char * Bad_Passenger_DisabiltyID::what() const throw()
{
    return "Passenger Disabilty ID invalid";
}

#endif