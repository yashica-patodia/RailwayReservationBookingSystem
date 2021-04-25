
//Yashica Patodia
//19CS10067
#ifndef _SAMESTATIONDIST_H
#define _SAMESTATIONDIST_H
#include <iostream>
#include "Bad_Railways.h"

using namespace std;

class Same_Station_Dist : public Bad_Railways{
    const char * what() const throw();
};

inline const char * Same_Station_Dist::what() const throw(){
    return "Distance between same station not stored";
}

#endif