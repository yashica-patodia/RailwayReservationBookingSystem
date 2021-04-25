//Yashica Patodia
//19CS10067

#ifndef _BADRAILWAYS_H
#define _BADRAILWAYS_H
#include <iostream>

using namespace std;

class Bad_Railways : public exception{
    virtual const char * what() const throw() = 0;
};

#endif