//
// Created by nicol on 1/11/2024.
//
#include <iostream>
using namespace std;
int main(){
    int var = 5;
    int num = 0;
    int arr[var];
    for(int i = 0; i < sizeof(arr); i++) {
        arr[i] = i * num + var;
        num++;
    }
    cout << "Length: " << num << endl;
    cout << "Array: ";
    for(int i : arr) {
        cout << i << ", ";
    }
}