//Node.cpp: Node Implementation
//For:      CS221-02 Spring 2024 Mrs. Delugach
//          Programming Assignment 2
//Author:   Nikki Allen - This is my own work
//Email:    nca0009@uah.edu
//Compiler: CLion Nova 2024.1 EAP

#include "Node.h"

Node::Node()
{
    item = new ItemType();
    next = nullptr;
}

Node::Node(ItemType newItem)
{
    item = new ItemType(newItem);
    next = nullptr;
}

Node::~Node()
{
    if(item != nullptr)
    {
        delete item;
    }
    item = nullptr;
    if(next != nullptr)
    {
        delete next;
    }
    next = nullptr;
}

void Node::SetNext(Node *newNext)
{
    next = newNext;
}

ItemType Node::GetItem()
{
    ItemType outputItem;
    //If item exists, put it into output item
    //If not, give empty item
    if(item != nullptr)
    {
        outputItem = *item;
    }
    else
    {
        outputItem = ItemType();
    }
    return outputItem;
}

Node* Node::Next()
{
    return next;
}

