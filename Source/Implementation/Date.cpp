
//Yashica Patodia
//19CS10067
#include "Date.h"

using namespace std;

// Constructor for Date
Date::Date(UINT d, UINT m, UINT y): date_(d), month_((Month)m), year_(y){
    if (this->IsLeap()) this->noDaysMonth[2] = 29;
};

// Destructor for Date
Date::~Date(){};

// Overload Output to print a date
ostream& operator<< (ostream &out, const Date& date){
    if (const_cast<Date&>(date).ValidDate()) out << date.date_ << "/" << date.monthNames[date.month_ - 1] << "/" << date.year_;
    else out << "Invalid Date";
    return out;
}

// Returns boolean whether Date is Valid
bool Date::ValidDate(){
    try
    {
        if ((year_>1900)&&(year_<2099)){
            if ((date_<32) && (date_>0) && (month_>0) && (month_<13)){
                if ((int)date_ <= noDaysMonth[month_]) return true;
                else return false;
            }
            else{
                throw Bad_Date();
            } 
        }
        else {
            throw Bad_Date();
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return false;
    }

}

// Returns Day of the date
const char *Date::GetDay(){
    UINT y = year_;
    UINT m = month_-1;
    static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    y -= m/3;
    return dayNames[(y + y/4 - y/100 + y/400 + t[m-1] + date_)%7];
}

// Compare Dates
bool operator<(const Date& a, const Date& b){
    if (b.year_ > a.year_) return true;
    else if (b.year_ == a.year_){
        if (b.month_ > a.month_) return true;
        else if (b.month_ == a.month_){
            if (b.date_ > a.date_) return true;
            else return false;
        }
        else return false;
    }
    else return false;
}

// Utiliser Functions 
// Finds if year is leap or not
bool Date::IsLeap(){
    if (year_%100 == 0){
        if (year_%400 == 0) return true;
        else return false;
    }
    else if (year_%4 == 0) return true;
    else return false;
}

// Function to calculate number of leap years
int Date::countLeapYears() const{
    int year=year_;
    if(month_<=2)
    year--;
    return year/4 -year/100+year/400;

}

// Function to get number of days between two dates
int operator-(Date& d1, Date& d2)
{
    long int a=d1.year_ * 365 + d1.date_;
    for(int i=1;i<=d1.month_;i++) a += d1.noDaysMonth[i];
    a += d1.countLeapYears();
    long int b = d2.year_*365 + d2.date_;
    for(int i=1;i<=d2.month_;i++) b += d2.noDaysMonth[i];
    b+=d2.countLeapYears();
    if(a>b)
    return (a-b);
    else
    return (b-a);

}