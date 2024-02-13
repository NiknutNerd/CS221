//This file contains the main function to test both TwoDay and Overnight
//
//Author: Nikki Allen - This is entirely my own work
//Email: nca0009@uah.edu
//For: CS221-02 Programming Assignment 1A
//Compiler: CLion Nova 2023.3 EAP

#include <iostream>
#include "TwoDay.h"
#include "Overnight.h"

int main()
{
    std::cout << "Hello World! \n";

    TwoDay order1("Nikki", "601 John Wright Drive", 17, 2.54, 1.08);
    Overnight order2("Nikki", "601 John Wright Drive", 17, 2.54, 1.08);
    order1.PrintInfo();
    cout << order1.GetNameAndAddress() << endl;
    order2.PrintInfo();
}