//Overnight.cpp: This file contains the Overnight Class implementation
//Author: Nikki Allen - This is my own work
//Email: nca0009@uah.edu
//For: CS221-02 Programming Assignment 1B
//Compiler: CLion Nova 2023.3 EAP

#include "Overnight.h"
#include <iostream>

Overnight::Overnight()
{
    extraPerOunce = DEFEXTRA;
    cout << "Welcome to ShipQuik, Overnight Shipping by Nikki Allen! \n";
}

Overnight::Overnight(string name, string address, int numOunces, float costPerOunce, float extraPerOunce):
Package(name, address, numOunces, costPerOunce)
{
    abs(extraPerOunce) < 0.001 ? this->extraPerOunce = DEFEXTRA : this->extraPerOunce = extraPerOunce;
    cout << "Welcome to ShipQuik, Overnight Shipping by Nikki Allen! \n";
}

Overnight::~Overnight()
{
    cout << "Thank you for using ShipQuik Overnight Shipping! We hope to have your business again soon. \n";
}

float Overnight::GetExtraPerOz()
{
    return extraPerOunce;
}

void Overnight::SetExtraPerOz(float newExtraPerOunce)
{
    abs(newExtraPerOunce) < 0.001 ? extraPerOunce = DEFEXTRA : extraPerOunce = newExtraPerOunce;
}

float Overnight::totalOvernightFee()
{
    //A private function that returns just the extra charged for overnight
    return extraPerOunce * GetNumOz();
}

float Overnight::CalculateTotalCost()
{
    return Package::CalculateTotalCost() + totalOvernightFee();
}

void Overnight::PrintInfo()
{
    Package::PrintInfo("Overnight", totalOvernightFee());
}