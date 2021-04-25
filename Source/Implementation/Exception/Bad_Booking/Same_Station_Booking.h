//Yashica Patodia
//19CS10067

#ifndef _SAMESTATIONBOOKING_H
#define _SAMESTATIONBOOKING_H
#include <iostream>
#include "Bad_Booking.h"

using namespace std;

class Same_Station_Booking : public Bad_Booking
{
    const char * what() const throw();
};

inline const char * Same_Station_Booking::what() const throw()
{
    return "Booking to same station not possible";
}

#endif