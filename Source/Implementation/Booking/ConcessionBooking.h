//YASHICA PATODIA
//19CS10067
#ifndef _CONCESSIONBOOKING_H
#define _CONCESSIONBOOKING_H

#include <iostream>
#include "Booking.h"

using namespace std;

class ConcessionBooking : public Booking{
    Station fromStation_;
    Station toStation_;
    Date dateOfBooking_;
    Date dateOfReservation_;
    const BookingClasses &bookingClass_;
    const BookingCategory &bookingCategory_;
    Passenger &passenger_;
    float concessionFactor_;
    bool bookingStatus_;
    string bookingMessage_;
    int fare_;
    int PNR_;

    public:
        // Constructor
        ConcessionBooking(Station fromStation,
                        Station toStation,
                        Date dateOfBooking,
                        Date dateOfReservation,
                        const BookingClasses &bookingClass,
                        const BookingCategory &bookingCategory,
                        Passenger &passenger,
                        float concessionFactor,
                        bool bookingStatus,
                        string bookingMessage,
                        int fare);

        // Destructor
        ~ConcessionBooking();

        // Returns calculated fare according to concessional Business Logic
        int ComputeFare();

};

// Inline Implementation of Destructor of the class
inline ConcessionBooking::~ConcessionBooking(){};

#endif
