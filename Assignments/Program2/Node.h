//Node.h: Node Declaration
//For:      CS221-02 Spring 2024 Mrs. Delugach
//          Programming Assignment 2
//Author:   Nikki Allen - This is my own work
//Email:    nca0009@uah.edu
//Compiler: CLion Nova 2024.1 EAP

#pragma once
#include "ItemType.h"

class Node
{
private:
    ItemType* item;
    Node* next;
public:
    Node();
    Node(ItemType newItem);
    ~Node();
    void SetNext(Node* newNext);
    ItemType GetItem();
    Node* Next();
};