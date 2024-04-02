//BSTree.h: BSTree Declaration
//For:      CS221-02 Spring 2024 Mrs. Delugach
//          Programming Assignment 4
//Author:   Nikki Allen - This is my own work
//Compiler: CLion 2023.3.4

#pragma once
#include "ItemType.h"

struct TreeNode
{
    ItemType info;
    TreeNode* left = nullptr;
    TreeNode* right = nullptr;
};

class BSTree
{
private:
    TreeNode* root;
    TreeNode* curPos;
    int numItems;
    int maxCapacity;
    bool insertItem(TreeNode *node, ItemType item);
    bool findItem(TreeNode* node, ItemType item);
    void clearTree(TreeNode* node);
public:
    BSTree();
    BSTree(BSTree &sample);
    ~BSTree();
    void operator=(BSTree& other);
    bool PutItem(ItemType item);
    ItemType GetItem(ItemType item, bool &found);
    bool DeleteItem(ItemType item);
    void ResetTree();
    void MakeEmpty();
    void PrintTree();
    ItemType GetNext();
    int GetCount();
    void PrintTreeForm();
};