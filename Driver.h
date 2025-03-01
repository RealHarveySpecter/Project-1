#ifndef DRIVER_H
#define DRIVER_H
#include <iostream>

using namespace std;
class Driver
{
    public:
            Driver(); // default constructor
            Driver(string, int, int, string, string); //overloaded constructor that takes in all details of driver
            virtual ~Driver();

            //Mutator and Accessor functions (Setter and Getters)
            void setName(string n){name = n;}
            string getName(){return name;}
            void setAge(int a){age = a;}
            int getAge(){return age;}
            void setnoClaimsYears(int n){noClaimsYears = n;}
            int getnoClaimsYears(){return noClaimsYears;}
            void setVehicleLicense(string lc){vehicleLicense = lc;}
            string getVehicleLicense(){return vehicleLicense;}
            void setlicenseType(string lt){licenseType = lt;}
            string getlicenseType(){return licenseType;}
            void driverDetails(); // displays all the details of the driver
    protected:

    private:
        // Variable declarations
            string name, vehicleLicense, licenseType;
            int age, noClaimsYears;

};

#endif 