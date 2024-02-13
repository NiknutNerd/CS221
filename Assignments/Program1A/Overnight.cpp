//This file contains the implementation of the TwoDay class
//
//Author: Nikki Allen - This is my own work
//Email: nca0009@uah.edu
//For: CS221-02 Programming Assignment 1A
//Compiler: CLion Nova 2023.3 EAP

#include "Overnight.h"

#include <cmath>
#include <iostream>

//using namespace std;

Overnight::Overnight()
{
    cout << "Welcome to ShipQuik, Overnight shipping by Nikki Allen \n";

    name = "Undefined";
    address = "nowhere";
    numOunces = 6;
    costPerOunce = 2.00;
    extraCostPerOunce = 1.50;
}

Overnight::Overnight(string name, string address, int numOunces, float costPerOunce, float extraCostPerOunce)
{
    cout << "Welcome to ShipQuik, Overnight Shipping by Nikki Allen";
    this->name = name;
    this->address = address;
    //Num ounces must be greater than 6, if not then set to 6
    if(numOunces < 6)
    {
        //cout << "Error: Ounces should be at least 6. Setting to 6 to proceed \n";
        this->numOunces = 6;
    }
    else
    {
        this->numOunces = numOunces;
    }
    //costPerOunce and extraCostPerOunce need to be positive
    if(costPerOunce < 0.0)
    {
        cout << "Error: Cost per Ounce should be positive. Setting to 0.0 to proceed \n";
        this->costPerOunce = 0.0;
    }
    else
    {
        this->costPerOunce = costPerOunce;
    }
    if(extraCostPerOunce < 0.0)
    {
        cout << "Error: Extra Cost per Ounce should be positive. Setting to 0.0 to proceed \n";
        this->extraCostPerOunce = 0.0;
    }
    else
    {
        this->extraCostPerOunce = extraCostPerOunce;
    }
}

Overnight::~Overnight()
{
    cout << "Thank you for using ShipQuik Overnight Shipping! We hope to have your business again soon \n";
}

string Overnight::GetNameAndAddress()
{
    return name + " " + address;
}

void Overnight::SetName(string newName)
{
    name = newName;
}

void Overnight::SetAddress(string newAddress)
{
    address = newAddress;
}

float Overnight::GetCostPerOz()
{
    return costPerOunce;
}

void Overnight::SetCostPerOz(float newCostPerOunce)
{
    if(newCostPerOunce < 0.0)
    {
        //cout << "Error: Cost per Ounce should be positive. Keeping old value to proceed \n";
    }
    else
    {
        costPerOunce = newCostPerOunce;
    }
}

int Overnight::GetNumOz()
{
    return numOunces;
}

void Overnight::SetNumOz(int newNumOunces)
{
    if(newNumOunces < 6)
    {
        //cout << "Error: Ounces should be at least 6. Keeping old value to proceed \n";
    }
    else
    {
        numOunces = newNumOunces;
    }
}

float Overnight::GetExtraPerOz()
{
    return extraCostPerOunce;
}

void Overnight::SetExtraPerOz(float newExtraCostPerOunce)
{
    if(newExtraCostPerOunce < 0.0)
    {
        //cout << "Error: Extra Cost per Ounce should be positive. Keeping old value to proceed \n";
    }
    else
    {
        extraCostPerOunce = newExtraCostPerOunce;
    }
}

float Overnight::CalculateTotalCost()
{
    float totalCost = numOunces * (costPerOunce + extraCostPerOunce);
    return totalCost;
}

void Overnight::PrintInfo()
{
    cout << "Ship to:\t" + name + "\n\t\t" + address << endl;
    cout << "Method: \tOvernight" << endl;
    cout << "Package Weight: ";
    cout << numOunces << endl;
    cout << "Total Cost:\t";
    cout << CalculateTotalCost() << endl;
}