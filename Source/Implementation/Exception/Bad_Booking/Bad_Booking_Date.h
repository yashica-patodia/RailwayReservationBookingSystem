
//Yashica Patodia
//19CS10067
#ifndef BADBOOKINGDATE_H
#define BADBOOKINGDATE_H
#include <iostream>
#include "Bad_Booking.h"

using namespace std;

class Bad_Booking_Date : public Bad_Booking{
    const char * what() const throw();
};

inline const char * Bad_Booking_Date::what() const throw(){
    return "Booking Date Invalid";
}

#endif