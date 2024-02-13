//Package.cpp: This file contains the Package Class implementation
//Author: Nikki Allen - This is my own work
//Email: nca0009@uah.edu
//For: CS221-02 Programming Assignment 1B
//Compiler: CLion Nova 2023.3 EAP

#include "Package.h"
#include <iostream>
#include <cmath>

Package::Package()
{
    //Setting all variables to their defaults
    name = DEFNAME;
    address = DEFADDRESS;
    costPerOunce = DEFCOSTPEROUNCE;
    numOunces = DEFNUMOUNCES;

    cout << "Welcome to ShipQuik, Package Shipping by Nikki Allen! \n";
}

Package::Package(string name, string address, int numOunces, float costPerOunce)
{
    this->name = name;
    this->address = address;
    //Needs to be at least 5
    //Comparing to DEFNUMOUNCES so the value could be changed
    numOunces < DEFNUMOUNCES ? this->numOunces = DEFNUMOUNCES : this->numOunces = numOunces;

    //If 0, set to default. If Negative, make positive
    //Because of floating point weirdness, checking if it is close enough to 0 is better than == 0.0
    abs(costPerOunce) < 0.001 ? this->costPerOunce = DEFCOSTPEROUNCE : this->costPerOunce = abs(costPerOunce);

    cout << "Welcome to ShipQuik, Package Shipping by Nikki Allen! \n";
}

Package::~Package()
{
    cout << "Thank you for using ShipQuik Package Shipping! We hope to have your business again soon. \n";
}

void Package::GetNameAndAddress(string &name, string &address)
{
    //Puts the value of the object name and address into the addresses supplied
    name = this->name;
    address = this->address;
}

void Package::SetName(string newName)
{
    name = newName;
}

void Package::SetAddress(string newAddress)
{
    address = newAddress;
}

float Package::GetCostPerOz()
{
    return costPerOunce;
}

void Package::SetCostPerOz(float newCostPerOunce)
{
    //costPerOunce = newCostPerOunce;
    costPerOunce = abs(newCostPerOunce);
}

int Package::GetNumOz()
{
   return numOunces;
}

void Package::SetNumOz(int newNumOunces)
{
    //If less then default, set to default
    newNumOunces < DEFNUMOUNCES ? numOunces = DEFNUMOUNCES : numOunces = newNumOunces;
}

float Package::CalculateTotalCost()
{
    return numOunces * costPerOunce;
}

void Package::PrintInfo()
{
    cout << "Ship To:\t" << name << "\n\t\t" << address << endl;
    cout << "Method:\t\t" << "Package" << endl;
    cout << "Package Weight:\t" << numOunces << endl;
    cout << "Total Cost:\t" << CalculateTotalCost() << endl;
}

void Package::PrintInfo(string method, float extra)
{
    if(method.empty())
    {
        method = "Package";
    }
    if(abs(extra) < 0.001)
    {
        extra = 0.0;
    }
    cout << "Ship To:\t" << name << "\n\t\t" << address << endl;
    cout << "Method:\t\t" << method << endl;
    cout << "Package Weight:\t" << numOunces << endl;
    cout << "Total Cost:\t" << CalculateTotalCost() + extra << endl;
}

string Package::GetName()
{
    return name;
}

string Package::GetAddress()
{
    return address;
}