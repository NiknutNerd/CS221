//Overnight.h: This file contains the Overnight Class declaration
//Author: Nikki Allen - This is my own work
//Email: nca0009@uah.edu
//For: CS221-02 Programming Assignment 1B
//Compiler: CLion Nova 2023.3 EAP

#pragma once
#include "Package.h"
#include <string>

class Overnight: public Package
{
    const float DEFEXTRA = 1.20;
    float extraPerOunce = 0.0;
public:
    Overnight();
    Overnight(string name, string address, int numOunces, float costPerOunce, float extraPerOunce);
    ~Overnight();
    float GetExtraPerOz();
    void SetExtraPerOz(float newExtraPerOunce);
    float CalculateTotalCost();
    void PrintInfo();
private:
    float totalOvernightFee();
};