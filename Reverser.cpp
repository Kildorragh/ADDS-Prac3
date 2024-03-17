#include "Reverser.h"
#include <iostream>

int Reverser::reverseDigit(int digits){
    //aggregator default value usually 1 if multiplying or 0 if adding
    int helperResult = 0;
    helperResult = reverseDigitHelper(helperResult, digits);
    return helperResult;
};

int Reverser::reverseDigitHelper(int& helperResult, int digits){
    if (digits == 0){
        return helperResult;
    } else if (digits < 0){
            return -1;
    } else {
        helperResult = (helperResult * 10) + (digits % 10);
        digits = digits/10;
        return reverseDigitHelper(helperResult, digits);
    }
}

std::string Reverser::reverseString(std::string str){
    if (str.length() == 1){
        return str;
    } else {
        return str.substr(str.length() - 1, str.length()) + reverseString(str.substr(0, str.length() - 1));
    }
}