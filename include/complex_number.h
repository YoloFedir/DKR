#ifndef COMPLEX_NUMBER_H
#define COMPLEX_NUMBER_H

#include <string>

// Оголошення класу ComplexNumber
class ComplexNumber {
private:
    double real;         // Дійсна частина числа
    double imaginary;    // Уявна частина числа

public:
    // Конструктор класу
    ComplexNumber(double realPart, double imaginaryPart);

    // Методи для встановлення значень дійсної та уявної частин числа
    void setReal(double realPart);
    void setImaginary(double imaginaryPart);

    // Методи для отримання значень дійсної та уявної частин числа
    double getReal() const;
    double getImaginary() const;

    // Метод для обчислення модуля комплексного числа
    double calculateMagnitude() const;

    // Метод для представлення комплексного числа у вигляді рядка
    std::string toString() const;
};

#endif
