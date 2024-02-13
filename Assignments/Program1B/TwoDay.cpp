//TwoDay.cpp: This file contains the TwoDay Class implementation
//Author: Nikki Allen - This is my own work
//Email: nca0009@uah.edu
//For: CS221-02 Programming Assignment 1B
//Compiler: CLion Nova 2023.3 EAP

#include <iostream>
#include "TwoDay.h"

TwoDay::TwoDay()
{
    //Automatically calls the base constructor
    twoDayFee = DEFTWODAYFEE;
    cout << "Welcome to ShipQuik, TwoDay Shipping by Nikki Allen! \n";
}

TwoDay::TwoDay(string name, string address, int numOunces, float costPerOunce, float twoDayFee):
Package(name, address, numOunces, costPerOunce)
{
    abs(twoDayFee) < 0.001 ? this->twoDayFee = DEFTWODAYFEE : this->twoDayFee = twoDayFee;
    cout << "Welcome to ShipQuik, TwoDay Shipping by Nikki Allen! \n";
}

//Coming from java, my instinct was figure out how to call the parent constructor
//Here is how it would be done using what we learned in class
/*
TwoDay::TwoDay(string name, string address, int numOunces, float costPerOunce, float twoDayFee)
{
    SetName(name);
    SetAddress(address);
    SetNumOz(numOunces);
    SetCostPerOz(costPerOunce);
    if(abs(twoDayFee) < 0.001)
    {
        this->twoDayFee = DEFTWODAYFEE;
    }
    else
    {
        this->twoDayFee = abs(twoDayFee);
    }
    cout << "Welcome to ShipQuik, TwoDay Shipping by Nikki Allen! \n";
}
*/

TwoDay::~TwoDay()
{
    cout << "Thank you for using ShipQuik TwoDay Shipping! We hope to have your business again soon. \n";
}

float TwoDay::GetTwoDayFee()
{
    return twoDayFee;
}

void TwoDay::SetTwoDayFee(float newTwoDayFee)
{
    abs(newTwoDayFee) < 0.001 ? twoDayFee = DEFTWODAYFEE : twoDayFee = abs(newTwoDayFee);
}

float TwoDay::CalculateTotalCost()
{
    return Package::CalculateTotalCost() + twoDayFee;
}

void TwoDay::PrintInfo()
{
    Package::PrintInfo("TwoDay", twoDayFee);
}