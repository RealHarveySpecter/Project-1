#include "Car.h"

int Car::noOfCarObjects = 0; //declares the static variable noOfCarObjects

Car::Car() //default constructor
{
    noOfCarObjects++; //increments to keep track of no. of car objects created
    vehicleType = "Car";
}

Car::~Car() //destructor
{
    noOfCarObjects--; //decrements noOfCarObjects variable
}

Car::Car(string ma, string mo, string f, string t, int y, int p, int k, int n, int e, int d) :Vehicle(ma, mo, f, t, y, p, k, n, e)
{ // Overloaded construtor that takes in all the details of the car and passes the details (except number of doors) into the overloaded constructor in the vehicle class
    doors = d; 
// making sure number of doors is between 1 to 4
    if(d < 0 || d == 0) //makes sure the no. of car doors is between 1 to 4
    {
        doors = 4;
        cout<<"A car cannot have less than 0 doors"<<endl;
    }
    else if(d > 4) //makes sure the no. of car doors is between 1 to 4
    {
        doors = 4;
    }
     noOfCarObjects++;
     vehicleType = "Car";
}

void Car::displayDetails() //displays all the details of the car
{
    cout<<"This car is a "<<getnoOfWheels()<<" wheel, "<<getengineSizeLitres()<<" litre, "<<getYear()<<" "<<getTransmission()<<" "<<getFuel()<<" "<<getMake()<<" "<<getModel()<<endl
    <<"The vehicle has "<<getKilometers()<<" kilometers and it's price starts at $"<<getPrice()<<endl;
    driver.driverDetails();
} 