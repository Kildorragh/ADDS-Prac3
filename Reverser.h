#ifndef REVERSER_H
#define REVERSER_H
#include <string>

class Reverser{
    public:
    int reverseDigit(int digits);
    int reverseDigitHelper(int& helperResult, int digits);
    std::string reverseString(std::string str);
};    

#endif