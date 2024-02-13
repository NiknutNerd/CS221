//This file contains the declaration of the Overnight class
//
//Author: Nikki Allen - This is my own work
//Email: nca0009@uah.edu
//For: CS221-02 Programming Assignment 1A
//Compiler: CLion Nova 2023.3 EAP

#pragma once

#include <string>

using namespace std;

class Overnight
{
    string name;
    string address;
    float costPerOunce = 0.0;
    int numOunces = 0;
    float extraCostPerOunce = 0.0;

public:
    Overnight();
    Overnight(string name, string address, int numOunces, float costPerOunce, float extraCostPerOunce);
    ~Overnight();

    string GetNameAndAddress();
    void SetName(string newName);
    void SetAddress(string newAddress);
    float GetCostPerOz();
    void SetCostPerOz(float newCostPerOunce);
    int GetNumOz();
    void SetNumOz(int newNumOunces);
    float GetExtraPerOz();
    void SetExtraPerOz(float newExtraCostPerOunce);
    float CalculateTotalCost();
    void PrintInfo();
};