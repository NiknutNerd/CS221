//TwoDay.h: This file contains the TwoDay Class declaration
//Author: Nikki Allen - This is my own work
//Email: nca0009@uah.edu
//For: CS221-02 Programming Assignment 1B
//Compiler: CLion Nova 2023.3 EAP

#pragma once
#include "Package.h"
#include <string>

class TwoDay: public Package
{
    const float DEFTWODAYFEE = 9.00;
    float twoDayFee = 0.0;
public:
    TwoDay();
    TwoDay(string name, string address, int numOunces, float costPerOunce, float twoDayFee);
    ~TwoDay();
    float GetTwoDayFee();
    void SetTwoDayFee(float newTwoDayFee);
    float CalculateTotalCost();
    void PrintInfo();
};