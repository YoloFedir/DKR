#include "complex_number.h"
#include <cmath>
#include <sstream>

// ��������� ������������ �����
ComplexNumber::ComplexNumber(double realPart, double imaginaryPart) {
    real = realPart;
    imaginary = imaginaryPart;
}

// ��������� ������ ��� ������������ �������� ����� ������� �����
void ComplexNumber::setReal(double realPart) {
    real = realPart;
}

// ��������� ������ ��� ������������ �������� ����� ������� �����
void ComplexNumber::setImaginary(double imaginaryPart) {
    imaginary = imaginaryPart;
}

// ��������� ������ ��� ��������� �������� ����� ������� �����
double ComplexNumber::getReal() const {
    return real;
}

// ��������� ������ ��� ��������� �������� ����� ������� �����
double ComplexNumber::getImaginary() const {
    return imaginary;
}

// ��������� ������ ��� ���������� ������ ������������ �����
double ComplexNumber::calculateMagnitude() const {
    return sqrt(real * real + imaginary * imaginary);
}

// ��������� ������ ��� ������������� ������������ ����� � ������ �����
std::string ComplexNumber::toString() const {
    std::stringstream ss;
    ss << real << " + " << imaginary << "i";
    return ss.str();
}
