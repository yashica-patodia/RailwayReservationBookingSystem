//Yashica Patodia
//19CS10067

#ifndef _STATIONDISTINVALID_H
#define _STATIONDISTINVALID_H
#include <iostream>
#include "Bad_Railways.h"

using namespace std;

class Station_Distance_Invalid : public Bad_Railways
{
    const char * what() const throw();
};

inline const char * Station_Distance_Invalid::what() const throw(){
    return "Distance between stations does not exist";
}

#endif