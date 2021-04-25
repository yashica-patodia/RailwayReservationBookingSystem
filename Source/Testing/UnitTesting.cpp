//Yashica Patodia
//19CS10067
#include "../Implementation/AllHeaders.h"
#include <iostream>
#include <string.h>
using namespace std;

// Unit Testing for Station Class
void Station::UTStation(){
    cout << "----------------Unit Testing For Station Class-----------------------------------" << endl;
    //cout<<"Positive Case"<<endl;
    Station s("Mumbai");            // General Constructor
    if (s.GetName() != "Mumbai"){   // GetName Function
        cout << "Error in GetName" << endl;
    }
   

    cout << "---------------------------------------------------------------------------------" << endl;
}

// Unit Testing for Railways Class
void Railways::UTRailways()
{
    //Positive Test Cases
    cout << "----------------Unit Testing For Railways Class----------------------------------" << endl;
    //cout<<"Positive Case"<<endl;
    Station s1("Mumbai");
    Station s2("Delhi");
    Railways& IndianRailways = Railways::GetRailways();                             // General Constructor
    IndianRailways.AddStation(s1);                                                  // Put Station in railways instance
    IndianRailways.AddStation(s2);
    IndianRailways.AddDist(s1, s2, 1447.0);                                         // Put Distance between Stations
    if (IndianRailways.GetDistance(s1, s2) != 1447.0) {
        cout << "Error in GetDistance()" << endl;                                   // Get Distance between Stations
    }
    if (IndianRailways.StationPresent(s1) == false) {                                // Check if a Station Exists
        cout << "Error in StationExists()" << endl;
    }

    // Negative Case
    //cout<<"Negative Case"<<endl;
    Station s3("Kolkata");
    IndianRailways.AddStation(s1);                                                  // Duplicate Station Input
    IndianRailways.AddDist(s1, s2, 111.0);                                          // Duplicate Distance Input
    IndianRailways.AddDist(s1, s3, 222.0);                                          // Non Existing Station Distance putting
    IndianRailways.AddDist(s1, s1, 333.0);                                           // No Putting of distance between same station
    Station s4("Chennai");
    IndianRailways.AddStation(s4);
    IndianRailways.GetDistance(s1, s4);                                             // Station Distance not input
    IndianRailways.GetDistance(s1, s3);                                             // Getting Distance from/to non existing Station
    IndianRailways.GetDistance(s1, s1);  
                                                   // Output Stream Function
    cout << "---------------------------------------------------------------------------------" << endl;
}

// Unit Testing for Passenger Class
void Passenger::UTPassenger(){
    cout << "----------------Unit Testing for Passenger Class---------------------------------" << endl;

    // cout<<"Positive Case"<<endl;
      Passenger p(string("111111111111"), Date(9, 9, 2001), Gender::Male::Type(),
                string ("9899999999"), string("ABC"), string("Kumar"),
                string("GEF"), Divyaang::Blind::Type(), string("123"));            // General Constructor
    Passenger pcopy(p);                                                             // Copy Constructor
    if (&p.GetGender() != &Gender::Male::Type()) {
        cout << "Error in GetGender()" << endl;
    }
    if (p.GetAge() != 19) {                                                             // Check GetAge Function
        cout << "Error in GetAge()" << endl;
    }
    if (&p.GetDisabilty() != &Divyaang::Blind::Type()) {                                // Check GetDisabilty Function
        cout << "Error in GetDisabilty()" << endl;
    }
     // Negative Tests
    Passenger p1(string("123456789123"), Date(18, 9, 2001), Gender::Male::Type(),       // No First and last Name
                string ("9899999999"), string(""), string("Rushmore"), 
                string(""), Divyaang::Blind::Type(), string("123"));
    Passenger p2(string("1234567891"), Date(18, 9, 2001), Gender::Male::Type(),         // Aadhar Number length short
                string ("9899999999"), string("Ken"), string("Rushmore"), 
                string("Adams"), Divyaang::Blind::Type(), string("123"));
    Passenger p3(string("12345678912a"), Date(18, 9, 2001), Gender::Male::Type(),       // Aadhar Number has other charachters beside numbers
                string ("9899999999"), string("Ken"), string("Rushmore"), 
                string("Adams"), Divyaang::Blind::Type(), string("123"));
    Passenger p4(string("123456789123"), Date(18, 9, 2001), Gender::Male::Type(),       // Mobile Number too short
                string ("98999999"), string("Ken"), string("Rushmore"), 
                string("Adams"), Divyaang::Blind::Type(), string("123"));
    Passenger p5(string("123456789123"), Date(18, 9, 2001), Gender::Male::Type(),       // Mobile Number has other charachters beside numbers
                string ("989999999a"), string("Ken"), string("Rushmore"), 
                string("Adams"), Divyaang::Blind::Type(), string("123"));
    Passenger p6(string("123456789123"), Date(18, 9, 2001), Gender::Male::Type(),       // Disabilty ID has other charchters beside numbers
                string ("9899999999"), string("Ken"), string("Rushmore"), 
                string("Adams"), Divyaang::Blind::Type(), string("12a"));
                                                            
    cout << "---------------------------------------------------------------------------------" << endl;
}

// Unit Testing for Date Class
void Date::UTDate(){
    cout << "----------------Unit Testing for Date Class--------------------------------------" << endl;
     Date d(28, 9, 2001);                                                            // General Constructor
    Date dn(18, 9, 2001);
    if (!d.ValidDate()){                                                            // Check Valid Date function
        cout << "Error in Valid Date Function" << endl;
    }                   
                                                         
    if ((Date(18, 9, 2001) < Date(28, 9, 2001)) != true){                           // CHeck < operator
        cout << "Error in opertor<" << endl;
    }
    if ((d - dn) != 10){                            // Check - Operator
        cout << "Error in opertor-" << endl;
    }
    if (d.IsLeap() == true){                                                        // CHeck Leap year function
        cout << "Error in IsLeap Function" << endl;
    }
    
    // Negative Tests
    Date d1(29, 2, 2001);                                                           // Invalid Date 
    Date d2(31, 9, 2001);                                                           // Invalid Day
    Date d3(32, 8, 2001);                                                           // Invalid date of month
    Date d4(28, 13, 2001);                                                          // Invalid Month
                                                             
    cout << "---------------------------------------------------------------------------------" << endl;
}

void Gender::UTGender()
{
    cout << "----------------Unit Testing for Gender Class------------------------------------" << endl;
    // Positive Tests
    if (!Gender::IsMale(Gender::Male::Type())){                                      // Check IsMale function 
        cout << "Error in IsMale() function" << endl;
    }
    if (Gender::Male::Type().GetName() != "Male"){                                  // Check the GetName function
        cout << "Error in GetName() function" << endl;
    }
    cout << "---------------------------------------------------------------------------------" << endl;

}
void Divyaang::UTDivyaang()
{
    cout << "----------------Unit Testing for Divyaang Class----------------------------------" << endl;
    if (Divyaang::Blind::Type().GetName() != "Blind"){                                  // Checking GetName function
        cout << "Error in GetName() function" << endl;
    }
    if (Divyaang::CancerPatient::Type().GetConcessionFactor(BookingClasses::ACFirstClass::Type()) != 0.5){      // Checking GetConcessionFactor function
        cout << "Erro in GetConcessionFactor() function" << endl;
    }
    cout << "---------------------------------------------------------------------------------" << endl;

}
void Concession::UTConcession()
{
    cout << "----------------Unit Testing for Concession Class--------------------------------" << endl;
    // Positive Tests
    Passenger pM(string("123456789123"), Date(18, 9, 2001), Gender::Male::Type(), 
                string ("9899999999"), string("ABC"), string("Kumar"), 
                string("DEF"), Divyaang::Blind::Type(), string("123"));
    if (DivyaangConcession::Type().GetConcessionFactor(pM, BookingClasses::ACFirstClass::Type(), Divyaang::Blind::Type()) != 0.5){       // Check function GetConcessionFactor
        cout << "Error in Divyaang GetConcessionFactor() function" << endl;
    }
    if (DivyaangConcession::Type().IsEligible(pM, pM.GetDisabilty()) != true){
        cout << "Error in IsEligible() function" << endl;
    }

    if (GeneralConcession::Type().GetConcessionFactor() != 0.0){
        cout << "Error in General GetConcessionFactor() Factor" << endl;
    }
    if (GeneralConcession::Type().IsEligible() != true){
        cout << "Error in General IsEligible() function" << endl;
    }
    cout << "---------------------------------------------------------------------------------" << endl;

}
void BookingClasses::UTBookingClasses()
{
     cout << "----------------Unit Testing for BookingClasses Class----------------------------" << endl;
    // Positive Tests
    if (BookingClasses::AC3Tier::Type().GetName() != "AC3Tier"){
        cout << "Error in GetName Function" << endl;
    }

    if (BookingClasses::AC3Tier::Type().GetLoadFactor() != 2.5){
        cout << "Error in GetLoadFactor Function" << endl;
    }

    if (BookingClasses::AC3Tier::Type().IsSitting() != false){
        cout << "Error in IsSitting Function" << endl;
    }

    if (BookingClasses::AC3Tier::Type().IsAC() != true){
        cout << "Error in IsAC Function" << endl;
    }

    if (BookingClasses::AC3Tier::Type().GetNumberOfTiers() != 3){
        cout << "Error in GetNumberOfTiers Function" << endl;
    }

    if (BookingClasses::AC3Tier::Type().IsLuxury() != false){
        cout << "Error in IsLuxury Function" << endl;
    }

    if (BookingClasses::AC3Tier::Type().GetReservationCharge() != 40.0){
        cout << "Error in GetReservationCharge Function" << endl;
    }
    if (BookingClasses::AC3Tier::Type().GetTatkalLoadFactor() - 0.3 > 0.1){
        cout << "Error in GetTatkalLoadFactor Function" << endl;
    }

    if (BookingClasses::AC3Tier::Type().GetTatkalMinCharge() != 300.0){
        cout << "Error in GetTatkalMinCharge Function" << endl;
    }

    if (BookingClasses::AC3Tier::Type().GetTatkalMaxCharge() != 400.0){
        cout << "Error in GetTatkalMaxCharge Function" << endl;
    }

    if (BookingClasses::AC3Tier::Type().GetTatkalMinDist() != 500.0){
        cout << "Error in GetTatkalMinDist Function" << endl;
    }

    cout << "---------------------------------------------------------------------------------" << endl;

}
void BookingCategory::UTBookingCategory()
{
    cout << "----------------Unit Testing for BookingCategory Class---------------------------" << endl;
    // Positive Tests
    if (BookingCategory::Ladies::Type().GetName() != "Ladies"){
        cout << "Error in GetName Function" << endl;
    }
    Passenger pF(string("123456789123"), Date(18, 9, 2001), Gender::Female::Type(), 
                string ("9899999999"), string("Ken"), string("Rushmore"), 
                string("Adams"), Divyaang::Blind::Type(), string("123"));
    if (BookingCategory::Ladies::Type().GenerateBooking(
        Station("Delhi"),
        Station("Mumbai"),
        Date(2, 3, 2021),
        Date(4, 5, 2021),
        BookingClasses::AC3Tier::Type(),
        pF,
        true,
        "BOOKING SUCCEEDED",
        0 
    ) == NULL){
        cout << "Error in GenerateBooking function" << endl;
    }
    cout << "---------------------------------------------------------------------------------" << endl;


}
// Unit Testing for Booking Class
void Booking::UTBooking(){
    cout << "----------------Unit Testing for Booking Class-----------------------------------" << endl;
    Passenger pF(string("123456789123"), Date(18, 9, 2001), Gender::Female::Type(), 
                string ("9899999999"), string("Ken"), string("Rushmore"), 
                string("Adams"), Divyaang::Blind::Type(), string("123"));
    Booking *b2 = Booking::CreateBooking(
                                        Station("Delhi"),
                                        Station("Mumbai"),
                                        Date(2, 3, 2021),
                                        Date(3, 3, 2021),
                                        BookingClasses::AC3Tier::Type(),
                                        BookingCategory::Tatkal::Type(),
                                        pF
                                    );      // General Constructor for Concession based Booking
    cout << "Fare: " << b2->ComputeFare() << endl;                                          // Checking Fare Computation Function

                                                                       
    cout << "---------------------------------------------------------------------------------" << endl;
}

