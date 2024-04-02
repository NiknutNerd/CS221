//CityList.h: CityList Declaration
//For:      CS221-02 Spring 2024 Mrs. Delugach
//          Programming Assignment 3
//Author:   Nikki Allen - This is my own work
//Compiler: CLion Nova 2024.1 EAP

#pragma once
#include "ItemType.h"

class CityList {
private:
    int maxCapacity;
    ItemType* itemPtr = nullptr;
    int length;
    int curPos;
public:
    CityList();
    CityList(int size);
    CityList(CityList &sample);
    ~CityList();
    bool PutItem(ItemType inItem);
    ItemType GetItem(ItemType inItem, bool &found);
    bool DeleteItem(ItemType inItem);
    void ResetList();
    void MakeEmpty();
    void PrintList();
    ItemType GetNext();
    int GetLength();
    bool IsFull();
};