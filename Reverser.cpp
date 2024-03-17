#include "Reverser.h"
#include <iostream>
#include <cmath>

int Reverser::checkNoOfDigits(int digits){
    if (digits < 10){
        return 1;
    } else {
        digits = digits/10;
        //std::cout << "Digits now " << digits << std::endl;
        return 1 + checkNoOfDigits(digits);
    }
}

int Reverser::reverseDigit(int digits){
    int noOfDigits = this->checkNoOfDigits(digits);
    int index = noOfDigits;
    int reversedValue;
    if (index == 0){
        return reversedValue;
    } else {
        return 
    }
}