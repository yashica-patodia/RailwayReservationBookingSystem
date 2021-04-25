//YASHICA PATODIA
//19CS10067
#include "TatkalBooking.h"
using namespace std;

// Constructor Implementation for TatkalBooking Class
TatkalBooking::TatkalBooking(Station fromStation,
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
                        int fare): fromStation_(fromStation), toStation_(toStation),
                                        dateOfBooking_(dateOfBooking), dateOfReservation_(dateOfReservation), bookingClass_(bookingClass), bookingCategory_(bookingCategory), passenger_(passenger), 
                                        tatkalLoadFactor_(tatkalLoadFactor), tatkalMinCharge_(tatkalMinCharge), tatkalMaxCharge_(tatkalMaxCharge), tatkalMinDist_(tatkalMinDist), bookingStatus_(bookingStatus), 
                                        bookingMessage_(bookingMessage), fare_(fare), PNR_(Booking::sBookingPNRSerial++){
                                            fare_ = ComputeFare();
                                            Booking::sBookings.push_back(this);

                                            
                                             cout << bookingMessage_ << endl;
                                            cout << "PNR Number = " << PNR_ << endl;
                                            cout << "Date of Reservation = " << dateOfReservation_ << endl;
                                            cout << " Date of Booking= " << dateOfBooking_ << endl;
                                            cout << "Booking Class = " << bookingClass_.GetName() << endl;
                                            cout << "From Station = " << fromStation_.GetName() << endl;
                                            cout << "To Station = " << toStation_.GetName() << endl;
                                            
                                            cout << "\t: Comfort: ";
                                            if (bookingClass_.IsAC()) cout << "AC";
                                            else cout << "Non-AC";
                                            cout << endl;
                                            cout << "\t: Mode: ";
                                            if (bookingClass_.IsSitting()) cout << "Sitting";
                                            else cout << "Sleeping";
                                            cout << endl;
                                            cout << "\t: Luxury: ";
                                            if (bookingClass_.IsLuxury()) cout << "Yes";
                                            else cout << "No";
                                            cout << endl;
                                            cout << "\t: Bunks: " << bookingClass_.GetNumberOfTiers() << endl;
                                            cout << "Travel Category = " << bookingCategory_.GetName() << endl; 
                                            cout << "Fare = " << fare_ << endl;
                };                                                                                                                                  // General Constructor

// Return calculated fare using according to Tatkal Business Logic
int TatkalBooking::ComputeFare(){
    float travelDistance = fromStation_.GetDistance(toStation_);
    float baseFare = travelDistance*Booking::sBaseFarePerKM;
    float loadedFare = baseFare*bookingClass_.GetLoadFactor();
    float extraCharge = 0;
    if (travelDistance > tatkalMinDist_){
        extraCharge = loadedFare*tatkalLoadFactor_;
        if (extraCharge < tatkalMinCharge_) extraCharge = tatkalMinCharge_;
        else if (extraCharge > tatkalMaxCharge_) extraCharge = tatkalMaxCharge_;
    }
    loadedFare += extraCharge;
    loadedFare += bookingClass_.GetReservationCharge();
    int finalFare = round(loadedFare);
    return finalFare;
}
