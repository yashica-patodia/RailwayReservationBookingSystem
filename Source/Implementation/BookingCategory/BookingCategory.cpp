//Yahsica Patodia
//19CS10067
#include "BookingCategory.h"

using namespace std;

// Type Function to get instance of the singleton SubClass of BookingCategoryType
template<typename T>
const BookingCategoryType<T>& BookingCategoryType<T>::Type(){
    static const BookingCategoryType<T> obj; 
    return obj;
}

// General Booking Category
template<>
const string BookingCategory::General::sName = "General";
template<>
Booking* BookingCategory::General::GenerateBooking(Station fromStation,
                                                        Station toStation,
                                                        Date dateOfBooking,
                                                        Date dateOfReservation,
                                                        const BookingClasses &bookingClass,
                                                        // const BookingCategory &bookingCategory,
                                                        Passenger &passenger,
                                                        bool bookingStatus,
                                                        string bookingMessage,
                                                        int fare) const{
                                            float concessionFactor = GeneralConcession::Type().GetConcessionFactor();
                                            return new ConcessionBooking(fromStation,
                                                                    toStation,
                                                                    dateOfBooking,
                                                                    dateOfReservation,
                                                                    bookingClass,
                                                                    *this,
                                                                    passenger,
                                                                    concessionFactor,
                                                                    bookingStatus,
                                                                    bookingMessage,
                                                                    fare);
                                        }

// Ladies Booking Category
template<>
const string BookingCategory::Ladies::sName = "Ladies";
template<>
Booking* BookingCategory::Ladies::GenerateBooking(Station fromStation,
                                                        Station toStation,
                                                        Date dateOfBooking,
                                                        Date dateOfReservation,
                                                        const BookingClasses &bookingClass,
                                                        // const BookingCategory &bookingCategory,
                                                        Passenger &passenger,
                                                        bool bookingStatus,
                                                        string bookingMessage,
                                                        int fare) const{

                                                            // Checking Validity
                                                            if (LadiesConcession::Type().IsEligible(passenger)){
                                            float concessionFactor = LadiesConcession::Type().GetConcessionFactor(passenger);
                                            return new ConcessionBooking(fromStation,
                                                                    toStation,
                                                                    dateOfBooking,
                                                                    dateOfReservation,
                                                                    bookingClass,
                                                                    *this,
                                                                    passenger,
                                                                    concessionFactor,
                                                                    bookingStatus,
                                                                    bookingMessage,
                                                                    fare);
                                                            }
                                                            else{
                                                                return new ConcessionBooking(
                                                                        fromStation,
                                                                        toStation,
                                                                        dateOfBooking,
                                                                        dateOfReservation,
                                                                        bookingClass,
                                                                        *this,
                                                                        passenger,
                                                                        0.0,
                                                                        false,
                                                                        "BOOKING FAILED",
                                                                        fare
                                                                    );
                                                            }
                                        }

// Senior Citizen Booking Category
template<>
const string BookingCategory::SeniorCitizen::sName = "Senior Citizen";
template<>
Booking* BookingCategory::SeniorCitizen::GenerateBooking(Station fromStation,
                                                                Station toStation,
                                                                Date dateOfBooking,
                                                                Date dateOfReservation,
                                                                const BookingClasses &bookingClass,
                                                                // const BookingCategory &bookingCategory,
                                                                Passenger &passenger,
                                                                bool bookingStatus,
                                                                string bookingMessage,
                                                                int fare) const{

                                                                    if (SeniorCitizenConcession::Type().IsEligible(passenger)){
                                            float concessionFactor = SeniorCitizenConcession::Type().GetConcessionFactor(passenger);
                                            return new ConcessionBooking(fromStation,
                                                                    toStation,
                                                                    dateOfBooking,
                                                                    dateOfReservation,
                                                                    bookingClass,
                                                                    *this,
                                                                    passenger,
                                                                    concessionFactor,
                                                                    bookingStatus,
                                                                    bookingMessage,
                                                                    fare);
                                                                    }
                                                                    else{
                                                                        return new ConcessionBooking(
                                                                                fromStation,
                                                                                toStation,
                                                                                dateOfBooking,
                                                                                dateOfReservation,
                                                                                bookingClass,
                                                                                *this,
                                                                                passenger,
                                                                                0.0,
                                                                                false,
                                                                                "BOOKING FAILED",
                                                                                fare
                                                                        );;
                                                                    }
                                        }


// Divyaangjan Booking Category
template<>
const string BookingCategory::DivyaangCat::sName = "Divyaangjan";
template<>
Booking* BookingCategory::DivyaangCat::GenerateBooking(Station fromStation,
                                                            Station toStation,
                                                            Date dateOfBooking,
                                                            Date dateOfReservation,
                                                            const BookingClasses &bookingClass,
                                                            // const BookingCategory &bookingCategory,
                                                            Passenger &passenger,
                                                            bool bookingStatus,
                                                            string bookingMessage,
                                                            int fare) const{
                                                                if (DivyaangConcession::Type().IsEligible(passenger, passenger.GetDisabilty())){
                                            float concessionFactor = DivyaangConcession::Type().GetConcessionFactor(passenger, bookingClass, passenger.GetDisabilty());
                                            return new ConcessionBooking(fromStation,
                                                                    toStation,
                                                                    dateOfBooking,
                                                                    dateOfReservation,
                                                                    bookingClass,
                                                                    *this,
                                                                    passenger,
                                                                    concessionFactor,
                                                                    bookingStatus,
                                                                    bookingMessage,
                                                                    fare);
                                                                }
                                                                else{
                                                                    return  new ConcessionBooking(
                                                                        fromStation,
                                                                        toStation,
                                                                        dateOfBooking,
                                                                        dateOfReservation,
                                                                        bookingClass,
                                                                        *this,
                                                                        passenger,
                                                                        0.0,
                                                                        false,
                                                                        "BOOKING FAILED",
                                                                        fare
                                                                    );;
                                                                }
                                        }


// Tatkal Booking Category
template<>
const string BookingCategory::Tatkal::sName = "Tatkal";
template<>
Booking* BookingCategory::Tatkal::GenerateBooking(Station fromStation,
                                                        Station toStation,
                                                        Date dateOfBooking,
                                                        Date dateOfReservation,
                                                        const BookingClasses &bookingClass,
                                                        // const BookingCategory &bookingCategory,
                                                        Passenger &passenger,
                                                        bool bookingStatus,
                                                        string bookingMessage,
                                                        int fare) const{

                                            // Checking for validity
                                            try{
                                                if (dateOfReservation - dateOfBooking > 1) throw Bad_Booking_Category();

                                                float tatkalLoadFactor = bookingClass.GetTatkalLoadFactor();
                                                float tatkalMinCharge = bookingClass.GetTatkalMinCharge();
                                                float tatkalMaxCharge = bookingClass.GetTatkalMaxCharge();
                                                float tatkalMinDist = bookingClass.GetTatkalMinDist();

                                                return new TatkalBooking(fromStation,
                                                                toStation,
                                                                dateOfBooking,
                                                                dateOfReservation,
                                                                bookingClass,
                                                                *this,
                                                                passenger,
                                                                tatkalLoadFactor,
                                                                tatkalMinCharge,
                                                                tatkalMaxCharge,
                                                                tatkalMinDist,
                                                                bookingStatus,
                                                                bookingMessage,
                                                                fare);
                                            }
                                            catch(const std::exception& e){
                                                std::cerr << e.what() << '\n';
                                                return  new TatkalBooking(
                                                    fromStation,
                                                    toStation,
                                                    dateOfBooking,
                                                    dateOfReservation,
                                                    bookingClass,
                                                    *this,
                                                    passenger,
                                                    0.0,
                                                    0.0,
                                                    0.0,
                                                    0.0,
                                                    false,
                                                    "Booking Failed" + string(e.what()),
                                                    fare
                                                );;
                                            }
                                        }

// Premium Tatkal Booking Category
template<>
const string BookingCategory::PremiumTatkal::sName = "Premium Tatkal";
template<>
Booking* BookingCategory::PremiumTatkal::GenerateBooking(Station fromStation,
                                                                Station toStation,
                                                                Date dateOfBooking,
                                                                Date dateOfReservation,
                                                                const BookingClasses &bookingClass,
                                                                // const BookingCategory &bookingCategory,
                                                                Passenger &passenger,
                                                                bool bookingStatus,
                                                                string bookingMessage,
                                                                int fare) const{
                                                                
                                                                // Checking for validity
                                            try{
                                                if (dateOfReservation - dateOfBooking > 1) throw Bad_Booking_Category();

                                                float tatkalLoadFactor = 2*bookingClass.GetTatkalLoadFactor();
                                                float tatkalMinCharge = 2*bookingClass.GetTatkalMinCharge();
                                                float tatkalMaxCharge = 2*bookingClass.GetTatkalMaxCharge();
                                                float tatkalMinDist = 2*bookingClass.GetTatkalMinDist();

                                                return new TatkalBooking(fromStation,
                                                                toStation,
                                                                dateOfBooking,
                                                                dateOfReservation,
                                                                bookingClass,
                                                                *this,
                                                                passenger,
                                                                tatkalLoadFactor,
                                                                tatkalMinCharge,
                                                                tatkalMaxCharge,
                                                                tatkalMinDist,
                                                                bookingStatus,
                                                                bookingMessage,
                                                                fare);
                                            }
                                            catch(const std::exception& e){
                                                std::cerr << e.what() << '\n';
                                                return new TatkalBooking(
                                                    fromStation,
                                                    toStation,
                                                    dateOfBooking,
                                                    dateOfReservation,
                                                    bookingClass,
                                                    *this,
                                                    passenger,
                                                    0.0,
                                                    0.0,
                                                    0.0,
                                                    0.0,
                                                    false,
                                                    "Booking Failed" + string(e.what()),
                                                    fare
                                                );;
                                            }
                                        }

