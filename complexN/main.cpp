#include <iostream>
#include "src/complex.h"


int main() {

    ComplexNumber number1 = {7.2, 4.1};
    ComplexNumber number2 = {6.0, 4};
    ComplexNumber expected = number1 - number2;

    std::cout << expected.integer << std::endl;
    std::cout << expected.imaginary;


    return 0;
}
