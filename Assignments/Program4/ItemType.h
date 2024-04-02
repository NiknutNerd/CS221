//ItemType.h: ItemType Declaration
//For:      CS221-02 Spring 2024 Mrs. Delugach
//          Programming Assignment 4
//Author:   Nikki Allen - This is my own work
//Compiler: CLion 2023.3.4

#pragma once
#include <string>
using namespace std;

class ItemType
{
private:
    string name;
    string address;
    string phoneNumber;
public:
    ItemType();
    ItemType(string name, string address, string phoneNumber);
    ~ItemType();
    bool operator < (ItemType &toCompare);
    bool operator > (ItemType &toCompare);
    bool operator == (ItemType &toCompare);
    string GetData();
    string GetData(string &address, string &phoneNumber);
    void SetData(string name, string address, string phoneNumber);
    void PrintInfo();
};
