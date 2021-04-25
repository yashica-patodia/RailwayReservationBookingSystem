//YASHICA PATODIA
//19CS10067

#ifndef _BOOKING_H
#define _BOOKING_H
#include <iostream>
#include <vector>
#include <cmath>
#include "../BookingCategory/BookingCategory.h"
#include "../Station.h"
#include "../Date.h"
#include "../Passenger.h"
#include "../BookingClasses/BookingClasses.h"
#include "../Railways.h"
#include "../Exception/ExceptionHeaders.h"

using namespace std;

class BookingCategory;

class Booking{
    protected:
        // Constructor
        Booking();
        // Virtual Destructor
        virtual ~Booking();


    public:
        static float sBaseFarePerKM;
        static vector<Booking*> sBookings;
        static int sBookingPNRSerial;
        static float sACSurcharge;
        static float sLuxuryTaxPercent;

        // Static Function to create a Booking 
        static Booking* CreateBooking(Station fromStation,
                                            Station toStation,
                                            Date dateOfBooking,
                                            Date dateOfReservation,
                                            const BookingClasses &bookingClass,
                                            const BookingCategory &bookingCategory,
                                            Passenger &passenger,
                                            bool bookingStatus = true,
                                            string bookingMessage = "BOOKING SUCCEEDED",
                                            int fare = 0);

        // Compute the fare
        virtual int ComputeFare() = 0;    

        // Print Booking
        friend ostream& operator<< (ostream& out, Booking& booking);   

        // Unit Testing for Booking Class
        static void UTBooking(); 
};

// Inline Implementation of Constructor
inline Booking::Booking(){};

// Inline Implementation of Destructor
inline Booking::~Booking(){};

#endif