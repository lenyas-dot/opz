#include <iostream>
#include "complex.h"
#include <cmath>

ComplexNumber operator+(ComplexNumber& number1, ComplexNumber& number2)
{
    ComplexNumber sum;
    sum.integer = number1.integer + number2.integer;
    sum.imaginary = number1.imaginary + number2.imaginary;
    return sum;
}
ComplexNumber operator-(ComplexNumber& number1, ComplexNumber& number2)
{
    ComplexNumber sub;
    sub.integer = round((number1.integer - number2.integer) * 100) / 100;
    sub.imaginary = round((number1.imaginary - number2.imaginary) * 100) / 100;
    return sub;
}
ComplexNumber operator*(ComplexNumber& number1, ComplexNumber& number2)
{
    ComplexNumber mul;
    mul.integer = round(((number1.integer*number2.integer) - (number1.imaginary*number2.imaginary)) * 100) / 100;
    mul.imaginary = round(((number1.imaginary*number2.integer) + (number1.integer*number2.imaginary)) * 100) / 100;
    return mul;
}
ComplexNumber operator/(ComplexNumber& number1, ComplexNumber& number2)
{
    ComplexNumber div;
    try
    {
        if (number2.integer == 0 && number2.imaginary == 0)
        {
            throw 0;
        }
    }
    catch(...)
    {
        throw std::logic_error("Ошибка деления на ноль");
    }

    div.integer = round((((number1.integer*number2.integer) + (number1.imaginary*number2.imaginary)) / ((number2.integer*number2.integer) + (number2.imaginary*number2.imaginary))) * 100) / 100;
    div.imaginary = round((((number1.imaginary*number2.integer) - (number1.integer*number2.imaginary)) / ((number2.integer*number2.integer) + (number2.imaginary*number2.imaginary))) * 100) / 100;


    return div;

}
std::ostream& operator<<(std::ostream& out, ComplexNumber& number)
{
    out << number.integer;
    if (number.imaginary > 0)
    {
        out << " + " << number.imaginary << "i";
    }
    else
    {
        out << number.imaginary << "i";
    }

    return out;
}