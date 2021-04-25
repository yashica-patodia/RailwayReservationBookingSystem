//Yashica Patodia
//19CS10067

#ifndef _BOOKINGCLASSES_H
#define _BOOKINGCLASSES_H
#include <iostream> 

using namespace std;

template<typename T>
class BookingClassesType;

class BookingClasses{
    const string& name_;

    struct ACFirstClassType{};
    struct ExecutiveChairCarType{};
    struct AC2TierType{};
    struct FirstClassType{};
    struct AC3TierType{};
    struct ACChairCarType{};
    struct SleeperType{};
    struct SecondSittingType{};

    
    public:
        // Returns the loadfactor for bookingClass
        virtual float GetLoadFactor() const = 0 ;

        

        // Returns Status of sitting
        virtual bool IsSitting() const = 0;

        // Returns Boolean of whether the class is AC powered
        virtual bool IsAC() const = 0;

        // Return the number of tiers 
        virtual int GetNumberOfTiers() const = 0;

        // Return Status if considered luxury by government
        virtual bool IsLuxury() const = 0;

        // Get Cost of Reservation Charge
        virtual float GetReservationCharge() const = 0;

        // Get Tatakal Load Factor
        virtual float GetTatkalLoadFactor() const = 0;

        // Get Minimum Tatkal Charge
        virtual float GetTatkalMinCharge() const = 0;

        // Get Maximum Tatkal Charge
        virtual float GetTatkalMaxCharge() const = 0;

        // Get Minimum Tatkal Distance
        virtual float GetTatkalMinDist() const = 0;
        // Returns Name of the Booking Class
        const string& GetName() const;
        //Unit testing static function
        static  void UTBookingClasses();

        // Define Operator< to use BookingClasses as key in maps
        friend bool operator<(const BookingClasses& a, const BookingClasses& b);

        protected:
        // Constructor
        BookingClasses(const string& name);

        // Destructor
        virtual ~BookingClasses();

        public:
        // Enumerated Classes
        typedef BookingClassesType<ACFirstClassType> ACFirstClass;
        typedef BookingClassesType<ExecutiveChairCarType> ExecutiveChairCar;
        typedef BookingClassesType<AC2TierType> AC2Tier;
        typedef BookingClassesType<FirstClassType> FirstClass;
        typedef BookingClassesType<AC3TierType> AC3Tier;
        typedef BookingClassesType<ACChairCarType> ACChairCar;
        typedef BookingClassesType<SleeperType> Sleeper;
        typedef BookingClassesType<SecondSittingType> SecondSitting;

};

// Inline implementation of Constructor
inline BookingClasses::BookingClasses(const string& name):name_(name){};

// Inline implementation of Destructor
inline BookingClasses::~BookingClasses(){};

// Inline implementation of GetName function
inline const string& BookingClasses::GetName() const {return name_;}

// Inline Implementation of operator< as friend function of BookingClasses
inline bool operator<(const BookingClasses& a, const BookingClasses& b){return a.name_<b.name_;}

template<typename T>
class BookingClassesType : public BookingClasses{
    static const string sName;
    static const float sLoadFactor;
    static const bool sIsSitting;
    static const bool sIsAC;
    static const int sNumberOfTiers;
    static const bool sIsLuxury;
    static const float sReservationCharge;

    // Tatkal Charge Normalization
    static const float sTatkalLoadFactor;
    static const float sTatkalMinCharge;
    static const float sTatkalMaxCharge;
    static const float sTatkalMinDistance;

    // Constructors
    BookingClassesType(const string& name = BookingClassesType<T>::sName);
    
    // Destructors
    ~BookingClassesType();

    public:
        // Singeleton Object - Return Instance of the Object
        static const BookingClassesType<T>& Type();

        // Returns the loadfactor for bookingClass
        float GetLoadFactor() const;

        // Returns Status of sitting
        bool IsSitting() const;

        // Returns Boolean of whether the class is AC powered
        bool IsAC() const;

        // Return the number of tiers 
        int GetNumberOfTiers() const;

        // Return Status if considered luxury by government
        bool IsLuxury() const;

        // Get Cost of Reservation Charge
        float GetReservationCharge() const;

        // Get Tatakal Load Factor
        float GetTatkalLoadFactor() const;

        // Get Minimum Tatkal Charge
        float GetTatkalMinCharge() const;

        // Get Maximum Tatkal Charge
        float GetTatkalMaxCharge() const;

        // Get Minimum Tatkal Distance
        float GetTatkalMinDist() const;

};

// Inline Implementations
template<typename T>
inline BookingClassesType<T>::BookingClassesType(const string& name):BookingClasses(name){};

template<typename T>
inline BookingClassesType<T>::~BookingClassesType(){};

template<typename T>
inline float BookingClassesType<T>::GetLoadFactor() const{return sLoadFactor;}

template<typename T>
inline bool BookingClassesType<T>::IsSitting() const{return sIsSitting;}

template<typename T>
inline bool BookingClassesType<T>::IsAC() const{return sIsAC;}

template<typename T>
inline int BookingClassesType<T>::GetNumberOfTiers() const{return sNumberOfTiers;}

template<typename T>
inline bool BookingClassesType<T>::IsLuxury() const{return sIsLuxury;}

template<typename T>
inline float BookingClassesType<T>::GetReservationCharge() const{return sReservationCharge;}

template<typename T>
inline float BookingClassesType<T>::GetTatkalLoadFactor() const{return sTatkalLoadFactor;}

template<typename T>
inline float BookingClassesType<T>::GetTatkalMinCharge() const{return sTatkalMinCharge;}

template<typename T>
inline float BookingClassesType<T>::GetTatkalMaxCharge() const{return sTatkalMaxCharge;}

template<typename T>
inline float BookingClassesType<T>::GetTatkalMinDist() const{return sTatkalMinDistance;}

#endif
