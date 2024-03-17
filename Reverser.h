#ifndef REVERSER_H
#define REVERSER_H

class Reverser{
    public:
    int reverseDigit(int digits);
    int reverseDigitHelper(int& helperResult, int digits);
};    

#endif