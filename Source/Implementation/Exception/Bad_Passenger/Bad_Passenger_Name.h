
//Yashica Patodia
//19CS10067
#ifndef _BAD_PASSENGERNAME_H
#define _BAD_PASSENGERNAME_H
#include <iostream>
#include "Bad_Passenger.h"

using namespace std;

class Bad_Passenger_Name : public Bad_Passenger
{
    const char * what() const throw();
};

inline const char * Bad_Passenger_Name::what() const throw()
{
    return "Passenger Name Invalid";
}

#endif
