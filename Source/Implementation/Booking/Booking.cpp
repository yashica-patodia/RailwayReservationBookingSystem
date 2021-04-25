//YASHICA PATODIA
//19CS10067

#include "Booking.h"

using namespace std;

Booking* Booking::CreateBooking(Station fromStation,
                                            Station toStation,
                                            Date dateOfReservation,
                                            Date dateOfBooking,
                                            const BookingClasses &bookingClass,
                                            const BookingCategory &bookingCategory,
                                            Passenger &passenger,
                                            bool bookingStatus,
                                            string bookingMessage,
                                            int fare){
                                                
                                                // Check Validity of Booking 
                                                try{ 
                                                    if (fromStation == toStation) throw Same_Station_Booking();
                                                     Railways &railways = Railways::GetRailways();
                                                    
                                                   
                                                     if (dateOfBooking < passenger.GetDateOfBirth())
                                                      throw Bad_Passenger_Age();
                                                        if ((dateOfBooking < dateOfReservation)||(dateOfBooking - dateOfReservation > 365)) throw Bad_Booking_Date();
                                                       if ((!railways.StationPresent(fromStation))||(!railways.StationPresent(toStation))) throw Bad_Booking_Station();
                                                    return bookingCategory.GenerateBooking(
                                                        fromStation, toStation, dateOfBooking,
                                                        dateOfReservation, bookingClass,
                                                        passenger, bookingStatus, bookingMessage, fare
                                                    );
                                                }
                                                catch(const std::exception& e){
                                                    std::cerr << e.what() << '\n';
                                                      return bookingCategory.GenerateBooking(
                                                        fromStation, toStation, dateOfBooking, 
                                                        dateOfReservation, bookingClass,
                                                        passenger, false, "BOOKING FAILED:    \n " + string(e.what()), fare
                                                    );;
                                                }
                                                return NULL;
}