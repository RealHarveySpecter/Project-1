#ifndef VEHICLE_H
#define VEHICLE_H
#include "Driver.h"
#include <iostream>
#include <string>

using namespace std;

class Vehicle
{
    public:
            Vehicle(); // default constructor
            Vehicle(string, string, string, string, int, int, int, int, int); //overloaded constructor that takes in all vehicle details
            virtual ~Vehicle(); //destructor 

            //Mutator and Accessor functions (Setter and Getters)
            void setMake(string m){make = m;} 
            string getMake(){return make;}
            void setModel(string m){model = m;}
            string getModel(){return model;}
            void setFuel(string f){fuel = f;}
            string getFuel(){return fuel;}
            void setYear(int y){year = y;}
            int getYear(){return year;}
            void setTransmission(string t){transmission = t;}
            string getTransmission(){return transmission;}
            void setPrice(int p){price = p;}
            int getPrice(){return price;}
            void setKilometers(int k){kilometers = k;}
            int getKilometers(){return kilometers;}
            void setnoOfWheels(int n){ noOfWheels= n;}
            int getnoOfWheels(){return noOfWheels;}
            void setengineSizeLitres(int e){engineSizeLitres = e;}
            int getengineSizeLitres(){return engineSizeLitres;}
            string getVehicleType(){return vehicleType;}
            // void setDriver(Driver d){driver = d;} // takes in a driver object
            // Driver getDriver(){return driver;} //returns a driver object
            virtual void displayDetails() = 0; // virtual function that chooses which displaydetails function to call at runtime

    protected:
            string vehicleType;
    private:
        // Variable declarations
            string make, model, fuel, transmission;
            int year, price, kilometers, noOfWheels, engineSizeLitres;
        //    Driver driver;
};

#endif