#include "Driver.h"

Driver::Driver() // default constructor
{

}

Driver::~Driver()
{
    
}

Driver::Driver(string n, int a, int ncy, string v, string lt) //overloaded constructor that takes in all details of driver and sets it to their respective variables
{
    name = n, age = a, noClaimsYears = ncy, vehicleLicense = v, licenseType = lt;
    // makes sure noClaimsYears cannot be less than 0
    if(ncy < 0)
    {
        noClaimsYears = 0;
    }

    // makes sure the age cannot be less than 0
    if(a < 0)
    {
        age = 18;
        cout<<"The drivers age cannot be a negative number";
    }
}

void Driver::driverDetails() // displays all the details of the driver
{
    cout<<"The driver "<<getName()<<" is "<<getAge()
    <<" years old and has a "<<getlicenseType()<<" "<<getVehicleLicense()
    <<" license and "<<getnoClaimsYears()<<" year(s) of no claims bonus"<<endl;
}