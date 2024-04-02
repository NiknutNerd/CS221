//ItemType.cpp: ItemType Implementation
//For:      CS221-02 Spring 2024 Mrs. Delugach
//          Programming Assignment 3
//Author:   Nikki Allen - This is my own work
//Compiler: CLion Nova 2024.1 EAP

#include "ItemType.h"

ItemType::ItemType() {
    date = 19700101;
    keyToTheCity = "Nowhere";
}

ItemType::ItemType(int date, string city) {
    this->date = date;
    keyToTheCity = city;
}

ItemType::~ItemType() {

}

//Comparing strings uses dictionary order
//A<Z<a<z
bool ItemType::operator<(ItemType &toCompare) {
    /*
    bool output = false;
    if(keyToTheCity.compare(toCompare.keyToTheCity) < 0) {
        output = true;
    }
    return output;
    */
    return keyToTheCity < toCompare.keyToTheCity;
}

bool ItemType::operator>(ItemType &toCompare) {
    return keyToTheCity > toCompare.keyToTheCity;
}

bool ItemType::operator==(ItemType &toCompare) {
    return keyToTheCity == toCompare.keyToTheCity;
}
