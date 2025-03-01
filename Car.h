#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"
//#include "Driver.h"

using namespace std;

class Car : public Vehicle // Car inherits from Vehicle
{
    public:
        Car();
        Car(string, string, string, string, int, int, int, int, int, int); //overloaded constructor that takes in all car details
        virtual ~Car(); //destructor

        void setDoors(int d){doors = d;} //sets the car doors
        int getDoors(){return doors;} // returns the number of car doors
        int getnoOfCarObjects(){return noOfCarObjects;} // returns the value of the number of cars from the static variable noOfCarObjects
        void displayDetails(); // displays all the detals of the car
        /*
        void setDriver(Driver d){driver = d;}
        Driver getDriver(){return driver;}
        */
       void setDriver(Driver d){driver = d;} // takes in a driver object
       Driver getDriver(){return driver;} //returns a driver object
    protected:
    
    private:

    int doors; // no. of car doors
   // Driver driver; // Car has 1:1 relationship with Driver
    static int noOfCarObjects; //static integer that contains the number of car objects created
    Driver driver;
};

#endif