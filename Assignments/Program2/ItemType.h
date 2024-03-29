//ItemType.h: ItemType Declaration
//For:      CS221-02 Spring 2024 Mrs. Delugach
//          Programming Assignment 2
//Author:   Nikki Allen - This is my own work
//Email:    nca0009@uah.edu
//Compiler: CLion Nova 2024.1 EAP

#pragma once
#include <string>
using namespace std;

class ItemType
{
    string description;
    long long int VIN;
public:
    ItemType();
    ItemType(string description, long long int VIN);
    ~ItemType();
    long long int GetData(string &input);
    string Compare(ItemType *otherItem);
    void PrintInfo();
};
