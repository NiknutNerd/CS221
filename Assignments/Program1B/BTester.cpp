#include <iostream>
#include "Package.h"
#include "TwoDay.h"
#include "Overnight.h"

int main() {
    std::cout << "Yo \n";
    Package package1;
    Package package2("Nikki", "601 John Wright Drive", 5, .45);
    TwoDay twoDay1;
    TwoDay twoDay2("Nikki", "601 John Wright Drive", 5, .45, 9.00);
    Overnight overnight1;
    Overnight overnight2("Nikki", "601 John Wright Drive", 5, .45, 1.2);

    package1.PrintInfo();
    package2.PrintInfo();
    twoDay1.PrintInfo();
    twoDay2.PrintInfo();
    overnight1.PrintInfo();
    overnight2.PrintInfo();
}