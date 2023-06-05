#ifndef COMPLEX_NUMBER_H
#define COMPLEX_NUMBER_H

#include <string>

// ���������� ����� ComplexNumber
class ComplexNumber {
private:
    double real;         // ĳ���� ������� �����
    double imaginary;    // ����� ������� �����

public:
    // ����������� �����
    ComplexNumber(double realPart, double imaginaryPart);

    // ������ ��� ������������ ������� ����� �� ����� ������ �����
    void setReal(double realPart);
    void setImaginary(double imaginaryPart);

    // ������ ��� ��������� ������� ����� �� ����� ������ �����
    double getReal() const;
    double getImaginary() const;

    // ����� ��� ���������� ������ ������������ �����
    double calculateMagnitude() const;

    // ����� ��� ������������� ������������ ����� � ������ �����
    std::string toString() const;
};

#endif
