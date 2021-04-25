//Yashica Patodia
//19CS10067

#ifndef _DUPLICATERAILWAYSSTATION_H
#define _DUPLICATERAILWAYSSTATION_H
#include <iostream>
#include "Bad_Railways.h"

using namespace std;

class Duplicate_Railways_Station : public Bad_Railways{
    const char * what() const throw();
};

inline const char * Duplicate_Railways_Station::what() const throw(){
    return "Duplicate Station given as input";
}

#endif