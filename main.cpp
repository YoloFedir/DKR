#include <iostream>
#include "complex_number.h"
#include "logger.h"

int main() {
    // Створення об'єкту Logger та відкриття файлу журналу
    Logger logger("log.txt");

    // Запис важливого моменту у журнал
    logger.log("Початок роботи програми.");

    double realPart1, imaginaryPart1, realPart2, imaginaryPart2;

    // Введення даних для першого комплексного числа
    std::cout << "Enter the real part of the first complex number: ";
    std::cin >> realPart1;
    std::cout << "Enter the imaginary part of the first complex number: ";
    std::cin >> imaginaryPart1;

    // Введення даних для другого комплексного числа
    std::cout << "Enter the real part of the second complex number: ";
    std::cin >> realPart2;
    std::cout << "Enter the imaginary part of the second complex number: ";
    std::cin >> imaginaryPart2;

    // Створення комплексних чисел на основі введених даних
    ComplexNumber number1(realPart1, imaginaryPart1);
    ComplexNumber number2(realPart2, imaginaryPart2);

    // Обчислення суми та модуля
    ComplexNumber sum(number1.getReal() + number2.getReal(), number1.getImaginary() + number2.getImaginary());
    double magnitude = sum.calculateMagnitude();

    // Виведення результату
    std::cout << "The modulus of the sum of two complex numbers: " << magnitude << std::endl;
    std::cout << "Complex number number1: " << number1.toString() << std::endl;
    std::cout << "Complex number number2: " << number2.toString() << std::endl;

    // Запис ще одного важливого моменту у журнал
    logger.log("Complex number number1");

    return 0;
}
