#include "Motorbike.h"

int Motorbike::noOfMotorbikes; //declares the static variable noOfMotorbikes

Motorbike::Motorbike() //default constructor
{
    noOfMotorbikes++; //increments to keep track of no. of motorbike objects created
    vehicleType = "Motorbike";
}

Motorbike::~Motorbike()
{
    noOfMotorbikes--; //decrements noOfMotorbikes variable
}

Motorbike::Motorbike(string ma, string mo, string f, string t, int y, int p, int k, int n, int e) :Vehicle(ma, mo, f, t, y, p, k, n, e) // Construtor that takes in all the details of the motorbike and passes them into the overloaded constructor in the vehicle class
{
    noOfMotorbikes++; //increments to keep track of no. of motorbike objects created
    vehicleType = "Motorbike";
}

void Motorbike::displayDetails() // function that displays all the detals of the car
{
    cout<<"This motorbike is a "<<getnoOfWheels()<<" wheel, "<<getengineSizeLitres()<<" litre, "<<getYear()<<" "<<getTransmission()<<" "<<getFuel()<<" "<<getMake()<<" "<<getModel()<<endl
    <<"The vehicle has "<<getKilometers()<<" kilometers and it's price starts at $"<<getPrice()<<endl;
    driver.driverDetails();
}