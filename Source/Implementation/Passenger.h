//Yashica Patodia
//19CS10067

#ifndef _PASSENGER_H
#define _PASSENGER_H
#include <iostream>
#include <ctime>
#include "./Gender/Gender.h"
#include "./Divyaang/Divyaang.h"
#include "Date.h"

using namespace std;


   
    
   
    
    
class Passenger{
   //  Date dateOfBirth_;
    // const Gender &gender_;
    //  string aadharNo_;
    //  string mobileNo_;
    //   string firstname_;
    // string middlename_;
    // string lastname_;
    // const Divyaang& disabilityType_;
    // string disabilityID_;
     
    string firstname_;
    string middlename_;
    string lastname_;
    string aadharNo_;
    Date dateOfBirth_;
    const Gender &gender_;
    string mobileNo_;
    const Divyaang& disabilityType_;
    string disabilityID_;
   
    
    static Divyaang& temp;
    public:
         Passenger(
            string aadharNo,
            Date dob,
            const Gender &gender,
            string mobileNo,
            string firstname = "",
            string middlename = "",
            string lastname = "",
            const Divyaang& disabilityType = temp,
            string disabilityID = ""
        );                         

        Passenger(const Passenger& f);   // Copy Constructor

        // Destructor
        ~Passenger();

        // Print the Passenger
        friend ostream& operator<< (ostream& out, const Passenger& f);

        // Unit Testing for Passenger Class
        static void UTPassenger();

        // Returns Gender
        const Gender& GetGender() const;

        // Get the Age of the passenger
        int GetAge() const;
            
        Passenger(Date dob,const Gender &gender,string aadharNo,string mobileNo,string firstname = "",string middlename = "",string lastname = "",const Divyaang& disabilityType = temp,string disabilityID = "");
        static bool ValidPassenger(
            string firstname,
            string middlename,
            string lastname,
            string aadharNo,
            Date dob,
            const Gender &gender,
            string mobileNo,
            const Divyaang& disabilityType = temp,
            string disabilityID = ""
        );

        // Get the Type of Disabilty
        const Divyaang& GetDisabilty() const;

        // Get Date of Birth
        const Date& GetDateOfBirth() const;

};

#endif