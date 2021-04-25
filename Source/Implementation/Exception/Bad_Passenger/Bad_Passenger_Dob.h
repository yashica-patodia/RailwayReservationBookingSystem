//Yashica Patodia
//19CS10067
#ifndef BADPASSENGERAGE_H
#define BADPASSENGERAGE_H
#include <iostream>
#include "Bad_Passenger.h"

using namespace std;

class Bad_Passenger_Age : public Bad_Passenger
{
    const char * what() const throw();
};

inline const char * Bad_Passenger_Age::what() const throw()
{
    return "Passenger Date of birth Invalid";
}

#endif