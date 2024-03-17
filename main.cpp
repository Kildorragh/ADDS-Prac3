#include "Truckloads.h"
#include "Reverser.h"
#include <iostream>
#include <string>

int main(){
    Reverser r;
    int digits = 987654321;
    std::cout << r.reverseDigit(digits) << std::endl;

    std::string stringaling = "Hello Homies";
    std::cout << r.reverseString("Test");

    return 0;
}