//
// Created by nicol on 3/21/2024.
//

#include "ItemType.h"
#include "BSTree.h"
#include <iostream>

int main() {
    ItemType item1;
    ItemType item2("Nikki", "601 John Wright Drive", "9197876054");
    ItemType item3("Jenny", "nowhere", "2568675309");

    cout << "GetData 1: " << item1.GetData() << endl;
    cout << "GetData 2: " << item2.GetData() << endl;
    cout << "GetData 3: " << item3.GetData() << endl;

    string name1;
    string address1;
    string phoneNumber1;
    string address2;
    string phoneNumber2;
    string address3;
    string phoneNumber3;

    item1.PrintInfo();
    cout << endl;
    item2.PrintInfo();
    cout << endl;
    item3.PrintInfo();
    cout << endl;

    BSTree tree;
    tree.PutItem(item1);
    tree.PutItem(item2);
    tree.PutItem(item3);
    tree.PutItem(item1);
}