#include "Car.h"
#include "Motorbike.h"
#include "Dealership.h"

int main()
{
    cout<<"HELLO"<<endl;

    Dealership de1("Build Your Dreams", 2); //dealership object with dealership name and max number of vehicles 

    Car c1("Toyota", "Yaris", "petrol", "manual", 2017, 8000, 120000, 4, 2, 4); //car object with all car details
    Car c2("Mercedes", "Benz", "diesel", "manual", 2020, 20000, 45000, 4, 2, 4); //car object with all car details


    Motorbike m1; //motorbike object
    Motorbike m2("Toyota", "Zoom", "petrol", "manual", 2015, 7500, 95000, 2, 2.5); //motorbike object with all motorbike details put into overloaded constructor
    Motorbike m3("Mazda", "Yaris", "petrol", "automatic", 2024, 35000, 1500, 2, 3); //motorbike object with all motorbike details put into overloaded constructor
    Motorbike m4("Ford", "Taurus", "diesel", "manual", 2010, 6000, 130000, 2, 1.8); //motorbike object with all motorbike details put into overloaded constructor


    Driver d1("Zayn Malik", 24, 5, "car", "manual"); //driver object with driver details
    Driver d2("Eminem", 19, 1, "car", "automatic"); //driver object with driver details
    Driver d3x("Dex", 32, 13, "motorbike", "automatic"); //driver object with driver details
    Driver d4("Debra", 27, 0, "motorbike", "manual"); //driver object with driver details

    m4.setDriver(d3x); //sets the driver of m4 to d3x
    c2.setDriver(d1); //sets the driver of c2 to d1
    c1.setDriver(d2); //sets the driver of c1 to d2
    m3.setDriver(d4); //sets the driver of m3 to d4

    de1.addVehicle(&c1); //adds the pointer c1 to the dealership de1
    de1.addVehicle(&c2); //adds the pointer c2 to the dealership de1
    de1.addVehicle(&m4); //adds the pointer m4 to the dealership de1
    de1.addVehicle(&m3); //adds the pointer m3 to the dealership de1

    de1.displayVehicles(); //displays the details of all the vehicles in the dealership de1

    c1.getDriver();

    return 0;
}
