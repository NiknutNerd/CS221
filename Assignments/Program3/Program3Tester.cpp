//
// Created by nicol on 3/21/2024.
//
#include "ItemType.h"
#include <iostream>
int main() {
    ItemType item1(20240321,"Raleigh");
    ItemType item2(20240321, "Raleigh");
    if(item1 < item2) {
        cout << "Item 1 is smaller" << endl;
    }else if(item1 > item2){
        cout << "Item 1 is bigger" << endl;
    }else if(item1 == item2) {
        cout << "Items are equal" << endl;
    }else {
        cout << "what";
    }
}