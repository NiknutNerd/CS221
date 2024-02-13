//This file contains the implementation of the TwoDay class
//
//Author: Nikki Allen - This is my own work
//Email: nca0009@uah.edu
//For: CS221-02 Programming Assignment 1A
//Compiler: CLion Nova 2023.3 EAP

#include "TwoDay.h"

#include <cmath>
#include <iostream>

TwoDay::TwoDay()
{
    cout << "Welcome to ShipQuik, TwoDay shipping by Nikki Allen \n";

    //Default value of name is "Undefined"
    name = "Undefined";
    //Default value of address is "nowhere"
    address = "nowhere";
    //Default value of numOunces is 6
    numOunces = 6;
    costPerOunce = 2.00;
    twoDayFee = 5.00;
}

TwoDay::TwoDay(string name, string address, int numOunces, float costPerOunce, float twoDayFee)
{
    cout << "Welcome to ShipQuik, TwoDay Shipping by Nikki Allen \n";

    //Apply all the arguement inputs to the
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
    //costPerOunce and twoDayFee need to be positive,
    if(costPerOunce < 0.0)
    {
        //cout << "Error: Cost per Ounce should be positive. Setting to 0.0 to proceed \n";
        this->costPerOunce = 0.0;
    }
    else
    {
        this->costPerOunce = costPerOunce;
    }
    if(twoDayFee < 0.0)
    {
        //cout << "Error: Two Day Fee should be positive. Setting to 0.0 to proceed \n";
        this->twoDayFee = 0.0;
    }
    else
    {
        this->twoDayFee = twoDayFee;
    }
}

TwoDay::~TwoDay()
{
    cout << "Thank you for using ShipQuik TwoDay Shipping! We hope to have your business again soon \n";
}

string TwoDay::GetNameAndAddress()
{
    return name + " " + address;
}

void TwoDay::SetName(string newName)
{
    name = newName;
}

void TwoDay::SetAddress(string newAddress)
{
    address = newAddress;
}

float TwoDay::GetCostPerOz()
{
    return costPerOunce;
}

void TwoDay::SetCostPerOz(float newCostPerOunce)
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

int TwoDay::GetNumOz()
{
    return numOunces;
}

void TwoDay::SetNumOz(int newNumOunces)
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

float TwoDay::GetTwoDayFee()
{
    return twoDayFee;
}

void TwoDay::SetTwoDayFee(float newTwoDayFee)
{
    if(newTwoDayFee < 0.0)
    {
        //cout << "Error: Two Day Fee should be positive. Keeping old value to proceed \n";
    }
    else
    {
        twoDayFee = newTwoDayFee;
    }
}

float TwoDay::CalculateTotalCost()
{
    float totalCost = numOunces * costPerOunce + twoDayFee;
    return totalCost;
}

void TwoDay::PrintInfo()
{
    cout << "Ship to:\t" + name + "\n\t\t" + address << endl;
    cout << "Method: \tTwoDay" << endl;
    cout << "Package Weight: ";
    cout << numOunces << endl;
    cout << "Total Cost:\t";
    cout << CalculateTotalCost() << endl;
}