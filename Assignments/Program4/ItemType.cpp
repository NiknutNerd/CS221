//ItemType.cpp: ItemType Implementation
//For:      CS221-02 Spring 2024 Mrs. Delugach
//          Programming Assignment 4
//Author:   Nikki Allen - This is my own work
//Compiler: CLion 2023.3.4

#include "ItemType.h"
#include <iostream>

ItemType::ItemType()
{
    phoneNumber = "2568675309";
    name = "Jenny";
    address = "nowhere";
}

ItemType::ItemType(string name, string address, string phoneNumber)
{
    this->name = name;
    this->address = address;
    this->phoneNumber = phoneNumber;
}

ItemType::~ItemType()
{

}

bool ItemType::operator<(ItemType &toCompare)
{
    return name < toCompare.name;
}

bool ItemType::operator>(ItemType &toCompare)
{
    return name > toCompare.name;
}

bool ItemType::operator==(ItemType &toCompare)
{
    return name == toCompare.name;
}

string ItemType::GetData()
{
    return name;
}

string ItemType::GetData(string &address, string &phoneNumber)
{
    address = this->address;
    phoneNumber = this->phoneNumber;
    return name;
}

void ItemType::SetData(string name, string address, string phoneNumber)
{
    this->name = name;
    this->address = address;
    this->phoneNumber = phoneNumber;
}

void ItemType::PrintInfo()
{
    cout << name << ", " << address << ", " << phoneNumber;
}