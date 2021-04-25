//Yashica Patodia
//19CS10067

#ifndef BADDATE_H
#define BADDATE_H
#include <iostream>

using namespace std;

class Bad_Date : public exception{
    const char * what() const throw();
};

inline const char * Bad_Date::what() const throw(){
    return "Date Invalid";
}

#endif