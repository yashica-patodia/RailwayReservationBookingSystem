//Yashica Patodia
//19CS10067
#include "Passenger.h"

using namespace std;
Passenger::Passenger(
            string aadharNo,
            Date dob,
            const Gender &gender,
            string mobileNo,
            string firstname,
            string middlename,
            string lastname,
            const Divyaang& disabilityType,
            string disabilityID):firstname_(firstname), middlename_(middlename), lastname_(lastname), aadharNo_(aadharNo), 
                                dateOfBirth_(dob), gender_(gender), mobileNo_(mobileNo), disabilityType_(disabilityType), disabilityID_(disabilityID){};                   // General Cons

// Passenger::Passenger(
//             Date dob,
//             const Gender &gender,
//             string aadharNo,
//             string mobileNo,
//             string firstname,
//             string middlename,
//             string lastname,
//             const Divyaang& disabilityType,
//             string disabilityID):dateOfBirth_(dob),gender_(gender),aadharNo_(aadharNo), mobileNo_(mobileNo),firstname_(firstname), middlename_(middlename), lastname_(lastname), 
//                                  disabilityType_(disabilityType), disabilityID_(disabilityID){};
                                               // General Constructor


// Destructor
Passenger::~Passenger(){};
//Passenger::Passenger(const Passenger& f): dateOfBirth_(f.dateOfBirth_),gender_(f.gender_),aadharNo_(f.aadharNo_),mobileNo_(f.mobileNo_),firstname_(f.firstname_), middlename_(f.middlename_), lastname_(f.lastname_), 
                                //  disabilityType_(f.disabilityType_), disabilityID_(f.disabilityID_){};   // Copy Constructor


Passenger::Passenger(const Passenger& f):firstname_(f.firstname_), middlename_(f.middlename_), lastname_(f.lastname_), aadharNo_(f.aadharNo_), 
                                dateOfBirth_(f.dateOfBirth_), gender_(f.gender_), mobileNo_(f.mobileNo_), disabilityType_(f.disabilityType_), disabilityID_(f.disabilityID_){};   // Copy Constructor
// Print the Passenger
ostream& operator<< (ostream& out, const Passenger& f){
    out << "Passenger: {\n\tName: " << f.firstname_ << ",\n\tAadhar Number: " << f.aadharNo_ << ", \n\tDate of Birth: " << f.dateOfBirth_ << ", \n\tGender: " << f.gender_.GetName() << ", \n\tMobile Number: " << f.mobileNo_ << "}\n";
    return out;
}

// Return Gender
const Gender& Passenger::GetGender() const{
    return gender_;
}

// Check validity of passenger
bool Passenger::ValidPassenger(
                            string firstname,
                            string middlename,
                            string lastname,
                            string aadharNo,
                            Date dateOfBirth,
                            const Gender &gender,
                            string mobileNo,
                            const Divyaang& disabilityType,
                            string disabilityID
){
    try
    {
        if (aadharNo.length() != 12) throw Bad_Passenger_Aadhar();
        if ((firstname == "")&&(lastname == "")) 
        throw Bad_Passenger_Name();
        if (mobileNo.length() != 10) throw Bad_Passenger_Mobile();
        
        if (disabilityID != ""){
            for (int i = 0; i < (long int)(disabilityID.length()); i++){
                if (!((disabilityID[i] <= '9')&&(disabilityID[i] >= '0')))
                 throw Bad_Passenger_DisabiltyID();
            }
        }
        return true;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return false;
    }
    
}

// Get the age of the passenger
int Passenger::GetAge() const{
    time_t now = time(0);
    tm *ltm = localtime(&now);

    Date today(ltm->tm_mday, ltm->tm_mon+1, 1900+ltm->tm_year);
    Date dateOfBirth = dateOfBirth_;
    int days = today - dateOfBirth;
    return int(days/365);


}

// Get the Disabilty of the Passenger
const Divyaang& Passenger::GetDisabilty() const{
    return disabilityType_;
}

// Get the dateOfBirth of the Passenger
const Date& Passenger::GetDateOfBirth() const{
    return dateOfBirth_;
}
