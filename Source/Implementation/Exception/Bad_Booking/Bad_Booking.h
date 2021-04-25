//Yashica Patodia
//19CS10067

#ifndef _BADBOOKING_H
#define _BADBOOKING_H
#include <iostream>

using namespace std;

class Bad_Booking : public exception{
    virtual const char * what() const throw() = 0;
};

#endif