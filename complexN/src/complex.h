struct ComplexNumber
{
    double integer;
    double imaginary;
};

ComplexNumber operator+(ComplexNumber& number1, ComplexNumber& number2);
ComplexNumber operator-(ComplexNumber& number1, ComplexNumber& number2);
ComplexNumber operator*(ComplexNumber& number1, ComplexNumber& number2);
ComplexNumber operator/(ComplexNumber& number1, ComplexNumber& number2);
std::ostream& operator<<(std::ostream& out, ComplexNumber& number);
