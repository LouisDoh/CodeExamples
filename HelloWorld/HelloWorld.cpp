// HelloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> //to let us print things to console with std::cout

int main() {
    std::string myString; //declaration
    myString = "Hello World"; //assignment

    /* block comment
    that can go over
    multiple lines */

    //std::string myString = "Hello World";

    std::cout << myString;
}