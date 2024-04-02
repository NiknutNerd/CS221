//ItemType.h: ItemType Declaration
//For:      CS221-02 Spring 2024 Mrs. Delugach
//          Programming Assignment 3
//Author:   Nikki Allen - This is my own work
//Compiler: CLion Nova 2024.1 EAP

#pragma once
#include <string>
using namespace std;

class ItemType
{
private:
    int date;
    string keyToTheCity;
public:
    ItemType();
    ItemType(int date, string city);
    ~ItemType();
    bool operator < (ItemType &toCompare);
    bool operator > (ItemType &toCompare);
    bool operator == (ItemType &toCompare);
    string GetData();
    string GetData(int &date);
    void SetData(int date, string city);
    void PrintInfo();
};