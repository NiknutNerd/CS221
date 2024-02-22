//ItemType.cpp: ItemType Implementation
//For:      CS221-02 Spring 2024 Mrs. Delugach
//          Programming Assignment 2
//Author:   Nikki Allen - This is my own work
//Email:    nca0009@uah.edu
//Compiler: CLion Nova 2024.1 EAP

#include "ItemType.h"
#include <iostream>

//THIS ALL WORKED FIRST TRY I DON'T KNOW HOW BUT I AM HAPPY
ItemType::ItemType()
{
    description = "Undefined car";
    VIN = 0;
}

ItemType::ItemType(string description, long long int VIN)
{
    this->description = description;
    this->VIN = VIN;
}

ItemType::~ItemType()
{

}

long long int ItemType::GetData(string &input)
{
    input = description;
    return VIN;
}

string ItemType::Compare(ItemType* otherItem)
{
    //What am I supposed to do if this is null??
    string output;
    string safeKeeping;
    long long int toCompare;

    //I do not know what to return if otherItem is null
    if(otherItem != nullptr)
    {
        toCompare = otherItem->GetData(safeKeeping);
        if(toCompare < VIN)
        {
            output = "LESS";
        }
        else if(toCompare > VIN)
        {
            output = "GREATER";
        }
        else
        {
            output = "EQUAL";
        }
    }
    return output;
}

void ItemType::PrintInfo()
{
    //I did not use endl because most of your outputs wanted everything on the same line
    cout << VIN << ", " << description << endl;
}
