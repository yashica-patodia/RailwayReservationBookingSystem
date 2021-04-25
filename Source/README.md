
Name: Yashica Patodia
\
Roll Number: 19CS10067




# Contents of Directory
### File Structure

.
+-- Implementation\
|&ensp;   +-- Booking\
|&ensp;   | &ensp;  +-- BookingHeaders.h\
|&ensp;   | &ensp;  +-- Booking.cpp\
|&ensp;   | &ensp;  +-- Booking.h\
|&ensp;   | &ensp;  +-- ConcessionBooking.h\
|&ensp;   | &ensp;  +-- concessionBooking.cpp\
|&ensp;   | &ensp;  +-- TatkalBooking.h\
|&ensp;   | &ensp;  +-- TatkalBooking.cpp\
|&ensp;   +-- BookingCategory\
|&ensp;   | &ensp;  +-- BookingCategory.cpp\
|&ensp;   | &ensp;  +-- BookingCategory.h\
|&ensp;   +-- BookingClasses\
|&ensp;   | &ensp;  +-- BookingClasses.cpp\
|&ensp;   | &ensp;  +-- BookingClasses.h\
|&ensp;   +-- Concessions\
|&ensp;   | &ensp;  +-- ConcessionHeaders.h\
|&ensp;   | &ensp;  +-- DivyaangConcession.h\
|&ensp;   | &ensp;  +-- DivyaangConcession.cpp\
|&ensp;   | &ensp;  +-- GeneralConcession.h\
|&ensp;   | &ensp;  +-- GeneralConcession.cpp\
|&ensp;   | &ensp;  +-- Ladiesoncession.h\
|&ensp;   | &ensp;  +-- LadiesConcession.cpp\
|&ensp;   | &ensp;  +-- SeniorCitizenConcession.h\
|&ensp;   | &ensp;  +-- SeniorCitizenConcession.cpp\
|&ensp;   +-- Divyaang\
|&ensp;   | &ensp;  +-- Divyaang.h\
|&ensp;   | &ensp;  +-- Divyaang.cpp\
|&ensp;   +-- Exception\
|&ensp;   | &ensp;  +-- Bad_Date.h\
|&ensp;   | &ensp;  +-- Bad_Booking\
|&ensp;   | &ensp;  | &ensp;  +-- Bad_Booking_Date.h\
|&ensp;   | &ensp;  | &ensp;  +-- Bad_Booking_Station.h\
|&ensp;   | &ensp;  | &ensp;  +-- Bad_Booking.h\
|&ensp;   | &ensp;  | &ensp;  +-- Same_Booking_Station.h\
|&ensp;   | &ensp;  +-- Bad_Passenger\
|&ensp;   | &ensp;  | &ensp;  +-- Bad_Passenger.h\
|&ensp;   | &ensp;  | &ensp;  +-- Bad_Passenger_Aadhar.h\
|&ensp;   | &ensp;  | &ensp;  +-- Bad_Passenger_DisabilityID.h\
|&ensp;   | &ensp;  | &ensp;  +-- Bad_Passenger.Dob.h\
|&ensp;   | &ensp;  | &ensp;  +-- Bad_Passenger_Mobile.h\
|&ensp;   | &ensp;  | &ensp;  +-- Bad_Passenger_Name.h\
|&ensp;   | &ensp;  +-- Bad_Railways\
|&ensp;   | &ensp;  | &ensp;  +-- Bad_Railways.h\
|&ensp;   | &ensp;  | &ensp;  +-- Bad_Railways_Station.h\
|&ensp;   | &ensp;  | &ensp;  +-- Duplicate_Railways_Station.h\
|&ensp;   | &ensp;  +-- ExceptionHeaders.h\
|&ensp;   +-- Gender\
|&ensp;   | &ensp;  +-- Gender.h\
|&ensp;   | &ensp;  +-- Gender.cpp\
|&ensp;   +-- AllHeaders.h\
|&ensp;   +-- Date.h\
|&ensp;   +-- Date.cpp\
|&ensp;   +-- Passenger.h\
|&ensp;   +-- Passenger.cpp\
|&ensp;   +-- Railways.h\
|&ensp;   +-- Railways.cpp\
|&ensp;   +-- Station.h\
|&ensp;   +-- Station.cpp\
+-- Testing\
|&ensp;   +-- Applications.cpp\
|&ensp;   +-- UnitTesing.cpp\
+-- obj\
| &ensp;  +-- main.o\
+-- main.cpp\
+-- main.d\
+-- Makefile\
+-- README.md





### Contents of each file

- Booking.cpp\
    This is an abstract class which has tow subclasses ConcessionBooking and TatkalBooking.

- Booking.h\
    This is the header file for Booking.cpp.

- ConcessionBooking.cpp\
    This is the concrete class for Concession Booking.


- ConcessionBooking.h\
    This is the header file for ConcessionBooking.cpp.

- TatkalBooking.cpp\
    This is the concrete class for Tatkal Booking.


- TatkalBooking.h\
    This is the header file for TatkalBooking.cpp.

- BookingCategory.cpp\
    This class uses parameterized polymerphism .It has six types.They being 1)General 2)Ladies 3)SeniorCitizen 4)Divyaang 5)Tatkal 6)PremiumTatkal.

- BookingCategory.h
    This is the header file for BookingCategory.cpp.

- BookingClasses.cpp\
    This class uses parameterized polymerphism .It has six types.They being 1)ACFirstClass 2)ExecutiveChairCar 3)AC2Tier 4)FirstClass 5)AC3Tier 6)ACChairCar 7)Sleeper 8)SecondSitting.

- BookingClasses.h\
    This is the header file for BookingClasses.cpp.

- DivyaangConcession.cpp\
    This class is used for giving divyaangconcession.

- DivyaangConcession.h\
    This is the header file for DivyaangConcession.cpp.

- GeneralConcession.cpp\
    This class is used for giving Generalconcession.

- GeneralConcession.h\
    This is the header file for GeneralConcession.cpp.

- LadiesConcession.cpp\
    This class is used for giving Ladiesconcession.

- LadiesConcession.h\
    This is the header file for LadiesConcession.cpp.

- SeniorCitizenConcession.cpp\
    This class is used for giving SeniorCitizenconcession.

- SeniorCitizenConcession.h\
    This is the header file for SeniorCitizenConcession.cpp.

- Divyaang.cpp\
    This class has paraterized polymorphism.It has 4 types. They being 1)BlindType 2)OrthoHandicapped 3)CancerPatient 4)TBPatient.

- Divyaang.h\
    This is the header file for Divyaang.cpp


- Gender.cpp\
    This class has paraterized polymorphism.It has 2 types. They being 1)MaleType 2)FemaleType .

- Gender.h\
    This is the header file for Gender.cpp

- ExceptionHeaders.h\
    This header File imports all the h files of all the Concrete classes in this folder. Hence, importing this file in any other file automatically imports all the exceptions.

- Bad_Booking.h\
    This is the abstract class and has 4 subclasses.

- Bad_Booking_Category.h\
    This is used for exception handling and throws error if Booking Category  is invalid.

- Bad_Booking_Date.h\
    This is used for exception handling and throws error if Booking Category  is invalid.

- Bad_Booking_Category.h\
    This is used for exception handling and throws error if Booking Date  is invalid.

- Bad_Booking_Station.h\
    This is used for exception handling and throws error if Booking Station  is invalid.

- Bad_Passenger.h\
    This is the abstract class and has 5 subclasses.

- Bad_Passenger_Aadhar.h\
    This is used for exception handling and throws error if Passenger Aadhar  is invalid.

- Bad_Passenger_Dob.h\
    This is used for exception handling and throws error if Passenger Date Of Birth  is invalid.

- Bad_Passenger_DisabilityID.h\
    This is used for exception handling and throws error if Passenger disabilityID is invalid.

- Bad_Passenger_Mobile.h\
    This is used for exception handling and throws error if Passenger Mobile  number is invalid.

- Bad_Passenger_Name.h\
    This is used for exception handling and throws error if Passenger Name   is invalid.

- Bad_Railways.h\
    This is the abstract class and has 5 subclasses.

- Bad_Railways_Station.h\
    This is used for exception handling and throws error if Railways Station  is invalid.

- Duplicate_Railways_Station.h\
    This is used for exception handling and throws error if  same stations are given as input.

- Duplicate_Station_Dist.h\
    This is used for exception handling and throws error if distance  between stations already stored.

- Same_Station_Dist.h\
    This is used for exception handling and throws error if distance is asked between same stations.

- Station_Dist_Invalid.h\
   his is used for exception handling and throws error when distance between  two stations does not exist.

- AllHeaders.h\
    This header File imports all the cpp files of all the Concrete classes in this folder. Hence, importing this file in any other file automatically imports 
    and defines all the booking Classes defined, implemented and explained above.

- Date.h\
    This header file contains the class outline for the class Date. This file contains the signature for all class methods and attributes. The class is an
    Implementation of Date. 

- Date.cpp\
    This cpp file contains the implementations of the methods of the Date class whose signatures were defined in the corresponding header class.

- Passenger.h\
    This header file contains the class outline for the class Passenger. This file contains the signature for all class methods and attributes. The class is an
    Implementation of a Passenger booking a ticket. 

- Passenger.cpp\
    This cpp file contains the implementations of the methods of the Passenger class whose signatures were defined in the corresponding header class.

- Railways.h\
    This header file contains the class outline for the class Railways. This file contains the signature for all class methods and attributes. The class is an
    Implementation of a Railways which stores all Stations and inter-station distances.

- Railways.cpp\
    This cpp file contains the implementations of the methods of the Railways class whose signatures were defined in the corresponding header class.

- Station.h\
    This header file contains the class outline for the class Station. This file contains the signature for all class methods and attributes. The class is an
    Implementation of a Railway Station. 
- Station.cpp\
    This cpp file contains the implementations of the methods of the Station class whose signatures were defined in the corresponding header class.

- Applications.cpp\
     This file contains functions are used to do application testing and unit testing of the software created. In 
    addition to that, it holds all static constants for different classes like loadfactor for all booking Classes, Base Fare Per Km from Booking class, Luxury 
    Tax etc. These can be manipulated easily from this file itself, to change the results.



# Compiler Settings
Compiler Used: g++\
C++ Version Used: c++11\
Compiler Option: Used Makefile tool\

# How to Run the code

- Dependencies:
\
   -  g++ compiler installed in the system.
   - makefile installed.


### Compiling the project
1. On  compiling for the first time,  changes need  to be made in the Makefile. If not, you can skip directly to step 4.
2. Open the Makefile and put the path of this directory in front of "SRCDIR = " and save the Makefile.
3. Run the command: 
    ``` bash
        mingw32-make
    ```
4. This compiles all the files and creates an Source instance, which can be run to see the output.

### Steps to run the code
1. To run the program, without changes use the command: 
    ``` bash
        ./Source.exe
    ```
2. In case, some changes are made in any file of the directory, you need to compile the project again.
