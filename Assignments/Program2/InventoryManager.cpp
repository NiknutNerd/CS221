//InventoryManager.cpp: InventoryManager Implementation
//For:      CS221-02 Spring 2024 Mrs. Delugach
//          Programming Assignment 2
//Author:   Nikki Allen - This is my own work
//Email:    nca0009@uah.edu
//Compiler: CLion Nova 2024.1 EAP

#include "InventoryManager.h"

#include <iostream>

InventoryManager::InventoryManager()
{
    //No Need
}

InventoryManager::InventoryManager(int maxItems)
{
    this->maxItems = maxItems;
    cout << "Welcome to Nikki Allen's Automobile Emporium!" << endl;
}

InventoryManager::~InventoryManager()
{
    if(head != nullptr)
    {
        delete head;
    }
    head = nullptr;
    if(curPos != nullptr)
    {
        delete curPos;
    }
    curPos = nullptr;
}

bool InventoryManager::PutItem(ItemType *item)
{
    bool found;
    if(item != nullptr)
    {
        GetItem(item, found);
        if(found)
        {
            string safekeeping;
            cout << item->GetData(safekeeping) << " already Present" << endl;
        }
        else
        {
            Node* keeper = head;
            head = new Node(*item);
            head->SetNext(keeper);
            cout << "Added:\t";
            item->PrintInfo();
            cout << "\tAddress: " << head << endl;
            if(keeper != nullptr)
            {
                delete keeper;
            }
            keeper = nullptr;
        }
    }
    return !found;
}

ItemType *InventoryManager::GetItem(ItemType *item, bool &found)
{
    ItemType *outputItem = nullptr;
    found = false;
    cout << "Searching...";
    if(item != nullptr)
    {
        string comparison;
        string safekeeping;
        ResetList();
        while(curPos != nullptr && comparison != "EQUAL")
        {
            cout << curPos->GetItem().GetData(safekeeping) << ", ";
            comparison = curPos->GetItem().Compare(item);
            if(comparison == "EQUAL")
            {
                outputItem = item;
                found = true;
                cout << "found";
            }
            else
            {
                curPos = curPos->Next();
            }
        }
        cout << endl;
    }
    return outputItem;
}

bool InventoryManager::DeleteItem(ItemType *item)
{
    Node* last = nullptr;
    Node* holder = nullptr;
    bool deleted = false;
    if(item != nullptr)
    {
        ResetList();
        while(curPos != nullptr && !deleted)
        {
            string comparison = curPos->GetItem().Compare(item);
            if(comparison == "EQUAL")
            {
                if(last == nullptr)
                {
                    head = curPos->Next();
                }
                else
                {
                    holder = curPos->Next();
                    curPos = last;
                    curPos->SetNext(holder);
                }
                deleted = true;
            }
            last = curPos;
            curPos = curPos->Next();
        }
    }
    if(last != nullptr)
    {
        delete last;
    }
    last = nullptr;
    if(holder != nullptr)
    {
        delete holder;
    }
    holder = nullptr;
    return true;
}

void InventoryManager::ResetList()
{
    curPos = head;
    why = true;
}

bool InventoryManager::IsFull()
{
    return GetLength() >= maxItems;
}

void InventoryManager::MakeEmpty() {
    ResetList();
    Node* save;
    while(curPos != nullptr)
    {
        save = curPos->Next();
        curPos = nullptr;
        curPos = save;
    }
    cout << "List has been cleared!" << endl;
    head = nullptr;
    ResetList();
    if(save != nullptr)
    {
        delete save;
    }
    save = nullptr;
}

void InventoryManager::PrintList()
{
    ResetList();
    while(curPos != nullptr)
    {
        cout << "Item ";
        curPos->GetItem().PrintInfo();
        curPos = curPos->Next();
    }
}

Node *InventoryManager::GetNext()
{
    //I do not understand why it couldn't just get next
    //Why does it have to know if reset has been called???
    if(why)
    {
        curPos = head;
        why = false;
    }
    else if(curPos != nullptr)
    {
        curPos = curPos->Next();
    }
    return curPos;
}

int InventoryManager::GetLength()
{
    ResetList();
    int length = 0;
    while(curPos != nullptr)
    {
        curPos = curPos->Next();
        length++;
    }
    ResetList();
}