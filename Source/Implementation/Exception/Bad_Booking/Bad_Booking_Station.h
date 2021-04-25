//Yashica Patodia
//19CS10067

#ifndef _BADBOOKINGSTATION_H
#define _BADBOOKINGSTATION_H
#include <iostream>
#include "Bad_Booking.h"

using namespace std;

class Bad_Booking_Station : public Bad_Booking{
    const char * what() const throw();
};

inline const char * Bad_Booking_Station::what() const throw(){
    return "Booking Station invalid";
}

#endif