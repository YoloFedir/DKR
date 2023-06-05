#include "complex_number.h"
#include <cmath>
#include <sstream>

// Реалізація конструктора класу
ComplexNumber::ComplexNumber(double realPart, double imaginaryPart) {
    real = realPart;
    imaginary = imaginaryPart;
}

// Реалізація методу для встановлення значення дійсної частини числа
void ComplexNumber::setReal(double realPart) {
    real = realPart;
}

// Реалізація методу для встановлення значення уявної частини числа
void ComplexNumber::setImaginary(double imaginaryPart) {
    imaginary = imaginaryPart;
}

// Реалізація методу для отримання значення дійсної частини числа
double ComplexNumber::getReal() const {
    return real;
}

// Реалізація методу для отримання значення уявної частини числа
double ComplexNumber::getImaginary() const {
    return imaginary;
}

// Реалізація методу для обчислення модуля комплексного числа
double ComplexNumber::calculateMagnitude() const {
    return sqrt(real * real + imaginary * imaginary);
}

// Реалізація методу для представлення комплексного числа у вигляді рядка
std::string ComplexNumber::toString() const {
    std::stringstream ss;
    ss << real << " + " << imaginary << "i";
    return ss.str();
}
