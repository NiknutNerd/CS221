//InventoryManager.h: InventoryManager Declaration
//For:      CS221-02 Spring 2024 Mrs. Delugach
//          Programming Assignment 2
//Author:   Nikki Allen - This is my own work
//Email:    nca0009@uah.edu
//Compiler: CLion Nova 2024.1 EAP

#pragma once
#include "Node.h"
#include "ItemType.h"

class InventoryManager
{
    Node* head = nullptr;
    Node* curPos = nullptr;
    int maxItems = 0;
    bool why = false;

public:
    InventoryManager();
    InventoryManager(int maxItems);
    ~InventoryManager();
    bool PutItem(ItemType* item);
    ItemType* GetItem(ItemType* item, bool &found);
    bool DeleteItem(ItemType* item);
    void ResetList();
    bool IsFull();
    void MakeEmpty();
    void PrintList();
    Node* GetNext();
    int GetLength();
};