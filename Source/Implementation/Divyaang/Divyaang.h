//Yashica Patodia
//19CS10067
#ifndef _DIVYAANG_H
#define _DIVYAANG_H
#include <iostream>
#include <map>
#include "../BookingClasses/BookingClasses.h"

using namespace std;

template<typename T>
class DivyaangType;

class Divyaang{
    const string& name_;

    struct BlindType{};
    struct OrthoHandicappedType{};
    struct CancerType{};
    struct TBType{};

    

    public:
        // Function to return name of the class
        const string& GetName() const;

        // Function to get Concession for different Booking Classes
        virtual const float GetConcessionFactor(const BookingClasses& bookingClass) const = 0;
        //Static Unit Testing 
        static void UTDivyaang();
    protected:
        // Constructor for Divyaang Class
        Divyaang(const string& name);

        // Destructor for Divyaang Class
        virtual ~Divyaang();
    public:
        // Enumerate Subclasses
        typedef DivyaangType<BlindType> Blind;
        typedef DivyaangType<OrthoHandicappedType> OrthoHandicap;
        typedef DivyaangType<CancerType> CancerPatient;
        typedef DivyaangType<TBType> TBPatient;

};

// Inline implementation of Constructor
inline Divyaang::Divyaang(const string& name):name_(name){};

// Inline Implementation of Destructor
inline Divyaang::~Divyaang(){};

// Inline Implementation of GetName
inline const string& Divyaang::GetName() const{return name_;}

template<typename T>
class DivyaangType : public Divyaang
{
    static const string sName;
    static map<string, float> sConcessionFactor;

    

    public:
        // Get Instance of the Dvyaang Type
        static const DivyaangType<T>& Type();

        // Get Concession Factor
        const float GetConcessionFactor(const BookingClasses& bookingClass) const;
    private:
    // Constructor
    DivyaangType(const string& name = DivyaangType<T>::sName);

    // Destructor
    ~DivyaangType();
};

// Inline Implementation of Constructor
template<typename T>
inline DivyaangType<T>::DivyaangType(const string& name):Divyaang(name){};

// Inline Implementation of Destructor
template<typename T>
inline DivyaangType<T>::~DivyaangType(){};

// Inline Implementation of GetConcessionFactor function
template<typename T>
inline const float DivyaangType<T>::GetConcessionFactor(const BookingClasses& bookingClass) const{return sConcessionFactor[bookingClass.GetName()];}

#endif