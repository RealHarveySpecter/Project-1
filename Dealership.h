#ifndef DEALERSHIP_H
#define DEALERSHIP_H
#include "Car.h"
#include "Motorbike.h"
#include <vector>

class Dealership
{
    public:
       //     Dealership();
            Dealership(string, int); // overloaded constructor that takes in the dealership name and max no. of vehicles
            virtual ~Dealership(); 
            //Mutator and Accessor functions (Setter and Getters)
            void setdShipName(string n){dShipName = n;}
            string getdShipName(){return dShipName;}
            void setnoOfVehicles(int v){noOFVehicles = v;}
            int getnoOfVehicles(){return noOFVehicles;}
            void setnoOfCars(int c){noOfCars = c;}
            int getnoOfCars(){return noOfCars;}
            void setnoOfMotorbikes(int m){noOFMotorbikes = m;}
            int getnoOfMotorbikes(){return noOFMotorbikes;}
            void addVehicle(Vehicle* v); // Adds a pointer to a vehicle (function accepts any type of vehicle and stores it in vehicles vector)
            void displayVehicles(); // displays the details of all the vehicles in the dealership

    protected:

    private:
            vector<Vehicle*> vehicles; // stores pointers to vehicle objects which allows polymorphism
            string dShipName; // name of dealership
            const int maxNoOfVehicles; // number sets the max number of vehicles
            int noOFVehicles = 0, noOfCars = 0, noOFMotorbikes = 0;
         /*    Car* car; // car object 
            Motorbike* motorbike; //motorbike object */
};

#endif 