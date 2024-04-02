//
// Created by nicol on 2/1/2024.
//

#include "Circle.h"
#include <string>
#include <iostream>

int main() {
    string str1 = "Raleigh";
    string str2 = "Huntsville";

    cout << "Str1: " << str1 << endl;
    cout << "Str2: " << str2 << endl;

    /*
    long num1 = *(long*) &str1;
    long num2 = *(long*) &str2;
    cout << "Num1: " << num1 << endl;
    cout << "Num2: " << num2 << endl;

    int int1 = *(int*) &str1;
    int int2 = *(int*) &str2;
    cout << "Int1: " << int1 << endl;
    cout << "Int2: " << int2 << endl;
    */

    int str1Ascii;
    for(int i = 0; i < str1.length(); i++) {
        char letter = str1[i];
        int ascii = (int)letter;
        str1Ascii += ascii;
        cout << letter << ": " << ascii << endl;
    }
    cout << "Str1 Ascii: " << str1Ascii << endl;

    int str2Ascii;
    for(int i = 0; i < str2.length(); i++) {
        char letter = str2[i];
        int ascii = (int)letter;
        str2Ascii += ascii;
        cout << letter << ": " << ascii << endl;
    }
    cout << "Str2 Ascii: " << str2Ascii << endl;

    if(str1 > str2) {
        cout << "Str1 Bigger";
    }else if(str2 > str1){
        cout << "Str2 Bigger";
    }else {
        cout << "Same";
    }

    //cout << str1.compare(str2);
}

int compareString(string str1, string str2) {
    string bigger;
    string smaller;
    if(str1.length() >= str1.length()) {
        bigger = str1;
        smaller = str2;
    }else {
        bigger = str2;
        smaller = str1;
    }

    /*
    int count = 0;
    int output;
    int ascii1;
    int ascii2;
    do {
        char letter1 = bigger[count];
        char letter2 = smaller[count];
        ascii1 = static_cast<int>(letter1);
        ascii2 = static_cast<int>(letter2);
        if(ascii1 )
        count++;

    }while(ascii1 == ascii2 && count < smaller.length() );
    */
    int output = 0;
    for(int i = 0; i < smaller.length(); i++) {
        char letter1 = bigger[i];
        char letter2 = smaller[i];
        int ascii1 = static_cast<int>(letter1);
        int ascii2 = static_cast<int>(letter2);
        if(ascii1 > ascii2) {
            output = 1;
            break;
        }else if(ascii2 > ascii1) {
            output = 2;
            break;
        }else {

        }
    }
}

int recursiveCompare(string str1, string str2) {
    string bigger;
    string smaller;
    if(str1.length() >= str2.length()) {
        string bigger = str1;
        string smaller = str2;
    }else {
        string bigger = str2;
        string smaller = str1;
    }

}

int recursion(char let1, char let2) {

}