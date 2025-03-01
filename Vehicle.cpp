#include "Vehicle.h"

Vehicle::Vehicle() // default constructor
{

}

Vehicle::~Vehicle() // destructor
{

}

Vehicle::Vehicle(string ma, string mo, string f, string t, int y, int p, int k, int n, int e)
{ // Construtor that takes in all the details of the vehicle and sets them to their respective variabled
 /*strings*/  make = ma, model = mo, fuel = f, transmission = t;
 /*ints*/   year = y, price = p, kilometers = k, noOfWheels = n, engineSizeLitres = e;

    // making sure price is greater than $0
    if(p < 0)
    {
        price = 500;
        cout<<"A price cannot be less than 0$"<<endl;
    }
     // making sure price is greater than $0
     if(y < 0)
    {
         year = 2000;
         cout<<"The registration year can't be less than 0"<<endl;
    }
    // making sure the registration year is valid
    else if(y > 2025)
    {
        year = 2025;
        cout<<"The registration year can't be in the future";
    }
    // making sure the number of kilometers is not less than 0
    if(k < 0)
    {
        kilometers = 500;
        cout<<"The number of kilometers cannot be less than 0"<<endl;
    }
     // making sure the number of wheels is not less than 0
     if(n < 0)
     {
         noOfWheels = 0;
         cout<<"The number of wheels cannot be less than 0"<<endl;
     }
     // making sure the engine doesn't have less than 0 litres
     if(e < 0)
     {
         engineSizeLitres = 0;
         cout<<"The number of litres cannot be less than 0"<<endl;
     }
     
}

/* void Vehicle::displayDetails() // virtual function that displays the details of the vehicle
{
    cout<<"This vehicle is a "<<getnoOfWheels()<<" wheel, "<<getengineSizeLitres()<<" litre, "<<getYear()<<" "<<getTransmission()<<" "<<getFuel()<<" "<<getMake()<<" "<<getModel()<<endl
    <<"The vehicle has "<<getKilometers()<<" kilometers and it's price starts at $"<<getPrice()<<endl;
  //  driver.driverDetails();
} */