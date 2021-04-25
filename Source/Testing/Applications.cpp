//Yashica Patodia
//19CS10067
#include "Applications.h"

using namespace std;

// Static Member initialisation

// Booking Class Controls
float Booking::sBaseFarePerKM = 0.5;
int Booking::sBookingPNRSerial = 1;
vector<Booking*> Booking::sBookings;
float Booking::sACSurcharge = 50.0;
float Booking::sLuxuryTaxPercent = 0.25;





// // To initialise the Indian Railways Instance by putting all stations and distances between each station
void CreateRailways(){
    Railways &railways = Railways::GetRailways();
    
    railways.AddStation(Station("Mumbai"));
    railways.AddStation(Station("Delhi"));
    railways.AddStation(Station("Bangalore"));
    railways.AddStation(Station("Kolkata"));
    railways.AddStation(Station("Chennai"));

    railways.AddDist(Station("Mumbai"), Station("Delhi"), 1447.0);
    railways.AddDist(Station("Mumbai"), Station("Bangalore"), 981.0);
    railways.AddDist(Station("Mumbai"), Station("Kolkata"), 2014.0);
    railways.AddDist(Station("Mumbai"), Station("Chennai"), 1338.0);
    railways.AddDist(Station("Delhi"), Station("Bangalore"), 2150.0);
    railways.AddDist(Station("Delhi"), Station("Kolkata"), 1472.0);
    railways.AddDist(Station("Delhi"), Station("Chennai"), 2180.0);
    railways.AddDist(Station("Bangalore"), Station("Kolkata"), 1871.0);
    railways.AddDist(Station("Bangalore"), Station("Chennai"), 350.0);
    railways.AddDist(Station("Kolkata"), Station("Chennai"), 1659.0);


     cout << "----------------Booking Application Testing--------------------------------------" << endl;
    // Passengers

    Passenger pDivyaang(string("111111111111"), Date(9, 9, 2001), Gender::Male::Type(), 
                        string ("9999999999"), string("ABC"), string("DEF"), 
                        string("GHI"), Divyaang::Blind::Type(), string("123"));

    Passenger pLadies(string("111111111111"), Date(9, 9, 2001), Gender::Female::Type(), 
                string ("9899999999"), string("ABC"), string("DEF"), 
                string("GHI"), Divyaang::Blind::Type(), string("123"));

    Passenger pSenior(string("111111111111"), Date(9, 9, 1955), Gender::Male::Type(), 
                string ("9899999999"), string("ABC"), string("DEF"), 
                string("GHI"), Divyaang::Blind::Type(), string("123"));
    
    // All Kinds of Bookings
    cout<<"Positive Test Cases"<<endl;
    cout<<"-----------------------------------------------------------------------"<<endl;
    Booking::CreateBooking(
                            Station("Mumbai"),
                            Station("Kolkata"),
                            Date(3, 3, 2021),
                            Date(4, 5, 2021),
                            BookingClasses::AC3Tier::Type(),
                            BookingCategory::General::Type(),
                            pDivyaang
                        ); 
    cout << endl;
   
    Booking::CreateBooking(
                            Station("Delhi"),
                            Station("Mumbai"),
                            Date(3, 3, 2021),
                            Date(4, 5, 2021),
                            BookingClasses::AC2Tier::Type(),
                            BookingCategory::Ladies::Type(),
                            pLadies
                        );
    cout << endl;

     Booking::CreateBooking(
                            Station("Kolkata"),
                            Station("Chennai"),
                            Date(3, 3, 2021),
                            Date(4, 5, 2021),
                            BookingClasses::FirstClass::Type(),
                            BookingCategory::SeniorCitizen::Type(),
                            pSenior
                        ); 
    cout << endl;

    Booking::CreateBooking(
                            Station("Bangalore"),
                            Station("Delhi"),
                            Date(3, 3, 2021),
                            Date(4, 5, 2021),
                            BookingClasses::ACFirstClass::Type(),
                            BookingCategory::DivyaangCat::Type(),
                            pDivyaang
                        ); 
    cout << endl;
    
    Booking::CreateBooking(
                            Station("Kolkata"),
                            Station("Bangalore"),
                            Date(3, 3, 2021),
                            Date(3, 3, 2021),
                            BookingClasses::ExecutiveChairCar::Type(),
                            BookingCategory::Tatkal::Type(),
                            pLadies
                        ); 
    cout << endl;
    
    Booking::CreateBooking(
                            Station("Mumbai"),
                            Station("Chennai"),
                            Date(3, 3, 2021),
                            Date(3, 3, 2021),
                            BookingClasses::Sleeper::Type(),
                            BookingCategory::PremiumTatkal::Type(),
                            pSenior
                        ); 
    cout << endl;


    // Negative Tests
    cout<<"Negative Test Cases"<<endl;
    cout<<"---------------------------------------------------------------------------"<<endl;

    Booking::CreateBooking(
                            Station("Mumbai"),
                            Station("Hyderabad"),
                            Date(2, 3, 2021),
                            Date(4, 5, 2021),
                            BookingClasses::SecondSitting::Type(),
                            BookingCategory::SeniorCitizen::Type(),
                            pLadies
                        );                      // Getting Fail Booking for Invalid Station Booking
    cout << endl;      
    Booking::CreateBooking(
                            Station("Mumbai"),
                            Station("Mumbai"),
                            Date(2, 3, 2021),
                            Date(4, 9, 2021),
                            BookingClasses::AC3Tier::Type(),
                            BookingCategory::Ladies::Type(),
                            pDivyaang
                        );                      // Getting Fail Booking for Same Station Booking
    cout << endl;
    
                 
                                       
    
    Booking::CreateBooking(
                            Station("Kolkata"),
                            Station("Mumbai"),
                            Date(2, 3, 2021),
                            Date(4, 2, 2021),
                            BookingClasses::ACChairCar::Type(),
                            BookingCategory::SeniorCitizen::Type(),
                            pSenior
                        );                      // Getting Fail Booking for Invalid Booking Date
    cout << endl;

    // Booking::CreateBooking(
    //                         Station("Chennai"),
    //                         Station("Kolkata"),
    //                         Date(2, 3, 2021),
    //                         Date(4, 5, 2021),
    //                         BookingClasses::ACFirstClass::Type(),
    //                         BookingCategory::SeniorCitizen::Type(),
    //                         pLadies
    //                     );                      // Getting Fail Booking for Non Eligibility of Concession criterion
    // cout << endl;

    // Booking::CreateBooking(
    //                         Station("Delhi"),
    //                         Station("Mumbai"),
    //                         Date(2, 3, 2021),
    //                         Date(4, 5, 2021),
    //                         BookingClasses::ACChairCar::Type(),
    //                         BookingCategory::Tatkal::Type(),
    //                         pSenior
    //                     );
                        
                        
    //                       // Getting Fail Booking for Non Eligibility of Concession criterion

    //         cout<<endl;
    cout << "----------------Booking Application Testing Ends---------------------------------" << endl;


}


//     
// }
