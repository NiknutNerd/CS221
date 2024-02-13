//This file contains the declaration of the TwoDay class
//
//Author: Nikki Allen - This is my own work
//Email: nca0009@uah.edu
//For: CS221-02 Programming Assignment 1A
//Compiler: CLion Nova 2023.3 EAP

#pragma once

#include <string>

using namespace std;

class TwoDay
{
    string name;
    string address;
    float costPerOunce = 0.0;
    int numOunces = 0;
    float twoDayFee = 0.0;

public:
    TwoDay();
    TwoDay(string name, string address, int numOunces, float costPerOunce, float twoDayFee);
    ~TwoDay();

    string GetNameAndAddress();
    void SetName(string newName);
    void SetAddress(string newAddress); //Do I not need getters for these? I like it when they come in pairs :(
    float GetCostPerOz();
    void SetCostPerOz(float newCostPerOunce);
    int GetNumOz();
    void SetNumOz(int newNumOunces);
    float GetTwoDayFee();
    void SetTwoDayFee(float newTwoDayFee);
    float CalculateTotalCost();
    void PrintInfo();

private:
};