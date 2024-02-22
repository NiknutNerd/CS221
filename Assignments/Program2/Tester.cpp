//
// Created by nicol on 2/20/2024.
//

#include <iostream>
#include "ItemType.h"
#include "Node.h"
#include "InventoryManager.h"
using namespace std;

int main() {
    cout << "Yo" << endl;
    ItemType* item1 = new ItemType("Toyota", 69);
    ItemType* item2 = new ItemType("Honda", 100);
    ItemType* item3 = new ItemType("Ferrari", 20202020020202002);
    item1->PrintInfo();
    string holder;

    Node* node1 = new Node(*item1);
    Node* node2 = new Node(*item2);
    Node* node3 = new Node(*item3);
    ItemType got1 = node1->GetItem();
    ItemType got2 = node2->GetItem();
    ItemType got3 = node3->GetItem();

    InventoryManager *list1 = new InventoryManager(10);
    list1->PutItem(item1);
    list1->PrintList();
    list1->PutItem(item2);
    list1->PrintList();
    list1->PutItem(item3);
    list1->PrintList();
    list1->PutItem(item1);
    list1->PrintList();

    cout << "deleting" << endl;
    list1->DeleteItem(item3);
    list1->PrintList();
}