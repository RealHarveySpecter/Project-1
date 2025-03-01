#include "Dealership.h"

/* Dealership::Dealership()
{

} */

Dealership::~Dealership() //destructor
{

}

Dealership::Dealership(string n, int max) : maxNoOfVehicles(max) //overloaded constructor that takes in dealership name and max number of vehicles and sets them both
{
    dShipName = n;
}

void Dealership::addVehicle(Vehicle* v) // Adds a pointer to a vehicle
{
    // makes sure the vector size doesnt increase past the max number of vehicles
    if(vehicles.size() < maxNoOfVehicles)
    {
        vehicles.push_back(v);
        noOFVehicles++;
        
        if(v->getVehicleType() == "Car")
        {
            noOfCars++;
        }

        else if(v->getVehicleType() == "Motorbike")
        {
            noOFMotorbikes++;
        }
    }
    else
    {
        cout<<"Max number of vehicles has been reached"<<endl;
    }

}

void Dealership::displayVehicles() // displays the details of the dealership and all the vehicles inside it
{
    cout<<"The dealership "<<getdShipName()<<" can hold up to "<<maxNoOfVehicles<<" vehicle(s)"<<endl;
    cout<<"There are "<<getnoOfVehicles()<<" vehicle(s) in this dealership. "<<getnoOfCars()<<" car(s) and "<<getnoOfMotorbikes()<<" motorbike(s)"<<endl;
    for(int i = 0; i < vehicles.size(); i++)
    {
        vehicles[i]->displayDetails();
    }
}
