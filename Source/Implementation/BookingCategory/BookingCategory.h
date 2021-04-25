//Yashica Patodia
//19CS100067

#ifndef BOOKINGCATEGORY_H
#define BOOKINGCATEGORY_H
#include <iostream>
#include "../Concessions/ConcessionHeaders.h"
#include "../Passenger.h"
#include "../BookingClasses/BookingClasses.h"
#include "../Divyaang/Divyaang.h"
#include "../Booking/Booking.h"
#include "../Booking/ConcessionBooking.h"
#include "../Booking/TatkalBooking.h"

using namespace std;

template<typename T>
class BookingCategoryType;

class BookingCategory{
    const string& name_;

    struct GeneralType{};
    struct LadiesType{};
    struct SeniorCitizenType{};
    struct DivyaangType{};
    struct TatkalType{};
    struct PremiumTatkalType{};

    protected:
        // Constructor 
        BookingCategory(const string& name);  

        // Destructor
        virtual ~BookingCategory();

    public:
        // Function that return referene to name of the class
        const string& GetName() const;
        static  void UTBookingCategory();
        // Function to Generate Booking 
        virtual Booking* GenerateBooking(
                                        Station fromStation,
                                        Station toStation,
                                        Date dateOfBooking,
                                        Date dateOfReservation,
                                        const BookingClasses &bookingClass,
                                        // const BookingCategory &bookingCategory,
                                        Passenger &passenger,
                                        bool bookingStatus,
                                        string bookingMessage,
                                        int fare
        ) const = 0;

        // Enumerate all subclasses of BokoingCategory
        typedef BookingCategoryType<GeneralType> General;
        typedef BookingCategoryType<LadiesType> Ladies;
        typedef BookingCategoryType<SeniorCitizenType> SeniorCitizen;
        typedef BookingCategoryType<DivyaangType> DivyaangCat;
        typedef BookingCategoryType<TatkalType> Tatkal;
        typedef BookingCategoryType<PremiumTatkalType> PremiumTatkal;
};

// Inline Implementations
// Inline Constructor Defination
BookingCategory::BookingCategory(const string& name):name_(name){};
// Inline GetName Definition
const string& BookingCategory::GetName() const{return name_;}
// Inline Destructor Defination
BookingCategory::~BookingCategory(){};

template<typename T>
class BookingCategoryType : public BookingCategory{
    static const string sName;

    // Constructor for template function
    BookingCategoryType(const string& name = BookingCategoryType<T>::sName);

    // Destructor for template function
    ~BookingCategoryType();

    public:
        // Get Instance of the Singleton Class
        static const BookingCategoryType<T>& Type();

        // Generate Booking
        Booking* GenerateBooking(Station fromStation,
                                        Station toStation,
                                        Date dateOfBooking,
                                        Date dateOfReservation,
                                        const BookingClasses &bookingClass,
                                        // const BookingCategory &bookingCategory,
                                        Passenger &passenger,
                                        bool bookingStatus,
                                        string bookingMessage,
                                        int fare) const;
};

// Inline Implementation of Constructor
template<typename T>
inline BookingCategoryType<T>::BookingCategoryType(const string& name):BookingCategory(name){};

// Inline Implemetation of Destructor
template<typename T>
inline BookingCategoryType<T>::~BookingCategoryType(){};

#endif