#include <iostream>
#include <fstream>
#include <ctime>

class Logger {
private:
    std::ofstream logfile_;

public:
    Logger(const std::string& filename) {
        logfile_.open(filename, std::ios::app); // Відкриття файлу для допису
    }

    Logger() : logfile_() {} // Конструктор за замовчуванням

    ~Logger() {
        if (logfile_.is_open()) {
            logfile_.close(); // Закриття файлу перед знищенням об'єкта
        }
    }

    void log(const std::string& message) {
        if (logfile_.is_open()) {
            // Отримання поточного часу
            std::time_t current_time = std::time(nullptr);
            std::string timestamp = std::ctime(&current_time);

            // Видалення символу нового рядка з кінця рядка
            timestamp.erase(timestamp.length() - 1);

            // Запис повідомлення в файл
            logfile_ << "[" << timestamp << "] " << message << std::endl;
        }
    }
};
    void check(Logger& logger, int L, int K);
