//Package.h: This file contains the Package Class declaration
//Author: Nikki Allen - This is my own work
//Email: nca0009@uah.edu
//For: CS221-02 Programming Assignment 1B
//Compiler: CLion Nova 2023.3 EAP

#pragma once
#include <string>
using namespace std;

class Package
{
    const string DEFNAME = "Undefined";
    const string DEFADDRESS = "nowhere";
    const float DEFCOSTPEROUNCE = 0.45;
    const int DEFNUMOUNCES = 5;

    string name;
    string address;
    int numOunces = 0;
    float costPerOunce = 0.0;

public:
    Package();
    Package(string name, string address, int numOunces, float costPerOunce);
    ~Package();

    void GetNameAndAddress(string &name, string &address);
    void SetName(string newName);
    void SetAddress(string newAddress);
    float GetCostPerOz();
    void SetCostPerOz(float newCostPerOunce);
    int GetNumOz();
    void SetNumOz(int newNumOunces);
    float CalculateTotalCost();
    void PrintInfo();
    void PrintInfo(string method, float extra);
protected:
    string GetName();
    string GetAddress();
};