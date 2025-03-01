#ifndef MOTORBIKE_H
#define MOTORBIKE_H
#include "Vehicle.h"
//#include "Driver.h"

class Motorbike : public Vehicle
{
    public:
            Motorbike(); //default constructor
            Motorbike(string, string, string, string, int, int, int, int, int); //overloaded constructor that takes in all motorbike details
            virtual ~Motorbike();
            void displayDetails(); // virtual function that displays all the detals of the car
            void setDriver(Driver d){driver = d;} // takes in a driver object
            int getNoOfMotorbikes(){return noOfMotorbikes;} // returns the number of motorbike objects that have been created
            Driver getDriver(){return driver;} //returns a driver object
    protected:

    private:
          //  Driver driver;
          static int noOfMotorbikes; //static integer that contains the number of car objects created
          Driver driver;
};

#endif