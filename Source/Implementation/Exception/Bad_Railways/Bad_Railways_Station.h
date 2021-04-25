
//Yashica Patodia
//19CS10067
#ifndef _BADRAILWAYSSTATION_H
#define _BADRAILWAYSSTATION_H
#include <iostream>
#include "Bad_Railways.h"

using namespace std;

class Bad_Railways_Station : public Bad_Railways{
    const char * what() const throw();
};

inline const char * Bad_Railways_Station::what() const throw()
{
    return "Station invalid";
}

#endif