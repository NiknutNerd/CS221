//BSTree.cpp: BSTree Implementation
//For:      CS221-02 Spring 2024 Mrs. Delugach
//          Programming Assignment 4
//Author:   Nikki Allen - This is my own work
//Compiler: CLion 2023.3.4

#include "BSTree.h"
#include <iostream>

BSTree::BSTree(){
    root = nullptr;
    curPos = nullptr;
    numItems = 0;
    maxCapacity = 500;
}

BSTree::BSTree(BSTree &sample) {
    //Recursive
}

BSTree::~BSTree(){

}

void BSTree::operator=(BSTree &other) {
    //Recursively traverse the tree
}

bool BSTree::insertItem(TreeNode* node, ItemType item) {
    if(node == nullptr){
        //put item in
        node = new TreeNode;
        node->info = item;
        node->left = nullptr;
        node->right = nullptr;
        return true;
    }else if(item < node->info){
        insertItem(node->left, item);
    }else if(item > node->info){
        insertItem(node->right,item);
    }else{
        return false;
    }
    //if node is empty, put item there
    //if item is < the thing in the node, go left
    //if item is > the thing in the node, go right
    return false;
}

bool BSTree::PutItem(ItemType item) {
    //if not present
    bool addable;
    GetItem(item, addable);
    if(addable){
        insertItem(root, item);
        cout << "added " << item.GetData() << endl;
    }else{
        cout << item.GetData() << " already exists" << endl;
    }
    return addable;
}

bool BSTree::findItem(TreeNode* node, ItemType item){
    if(node == nullptr){
        return false;
    }
    cout << "," << node->info.GetData();
    if(item < node->info){
        return findItem(node->left, item);
    }else if(item > node->info){
        return findItem(node->right, item);
    }
    return true;
}

ItemType BSTree::GetItem(ItemType item, bool &found){
    //ItemType tester;
    cout << "Searching...";
    //tester = findItem(root, item);
    found = findItem(root, item);
    if(found){
        cout << ",found" << endl;
    }else{
        cout << ",not found" << endl;
    }

    return item;
}

bool BSTree::DeleteItem(ItemType item) {
    return true;
}

void BSTree::ResetTree() {
}

void BSTree::MakeEmpty() {

}