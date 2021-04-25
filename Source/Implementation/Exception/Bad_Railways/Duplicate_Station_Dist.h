//Yashica Patodia
//19CS10067

#ifndef _DUPLICATESTATIONDIST_H
#define _DUPLICATESTATIONDIST_H
#include <iostream>
#include "Bad_Railways.h"

using namespace std;

class Duplicate_Station_Dist : public Bad_Railways
{
    const char * what() const throw();
};

inline const char * Duplicate_Station_Dist::what() const throw()
{
    return "Distance between stations already stored";
}

#endif