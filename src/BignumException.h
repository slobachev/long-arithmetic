//
// Created by User on 12.11.2016.
//

#ifndef LONG_ARITHMETIC_BIGNUMEXCEPTION_H
#define LONG_ARITHMETIC_BIGNUMEXCEPTION_H


#include <iostream>

class BignumException {
public:
    virtual void what() {
        std::cout << "BignumException" << std::endl;
    }
};


#endif //LONG_ARITHMETIC_BIGNUMEXCEPTION_H
