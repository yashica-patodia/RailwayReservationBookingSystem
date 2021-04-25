//YASHICA PATODIA
//19CS10067

#ifndef _TATKALBOOKING_H
#define _TATKALBOOKING_H

#include <iostream>
#include "Booking.h"
#include "../BookingCategory/BookingCategory.h"

using namespace std;

class TatkalBooking : public Booking{
    Station fromStation_;
    Station toStation_;
    Date dateOfBooking_;
    Date dateOfReservation_;
    const BookingClasses &bookingClass_;
    const BookingCategory &bookingCategory_;
    Passenger &passenger_;
    float tatkalLoadFactor_;
    float tatkalMinCharge_;
    float tatkalMaxCharge_;
    float tatkalMinDist_;
    bool bookingStatus_;
    string bookingMessage_;
    int fare_;
  long long  int PNR_;

    public:
        // Constructor
        TatkalBooking(Station fromStation,
                        Station toStation,
                        Date dateOfBooking,
                        Date dateOfReservation,
                        const BookingClasses &bookingClass,
                        const BookingCategory &bookingCategory,
                        Passenger &passenger,
                        float tatkalLoadFactor,
                        float tatkalMinCharge,
                        float tatkalMaxCharge,
                        float tatkalMinDist,
                        bool bookingStatus,
                        string bookingMessage,
                        int fare);

        // Destructor
        ~TatkalBooking();

        // Return calculated fare according to Tatkal Business Logic
        int ComputeFare();
};

// Inline Implementation of the Destructor
inline TatkalBooking::~TatkalBooking(){};

#endif
