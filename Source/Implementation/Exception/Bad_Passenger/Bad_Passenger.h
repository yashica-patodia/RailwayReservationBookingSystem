//Yashica Patodia
//19CS10067

#ifndef _BADPASSENGER_H
#define _BADPASSENGER_H
#include <iostream>

using namespace std;

class Bad_Passenger : public exception
{
    virtual const char * what() const throw() = 0;
};

#endif