#include <iostream>
#include <fstream>
#include <ctime>

class Logger {
private:
    std::ofstream logfile_;

public:
    Logger(const std::string& filename) {
        logfile_.open(filename, std::ios::app); // ³������� ����� ��� ������
    }

    Logger() : logfile_() {} // ����������� �� �������������

    ~Logger() {
        if (logfile_.is_open()) {
            logfile_.close(); // �������� ����� ����� ��������� ��'����
        }
    }

    void log(const std::string& message) {
        if (logfile_.is_open()) {
            // ��������� ��������� ����
            std::time_t current_time = std::time(nullptr);
            std::string timestamp = std::ctime(&current_time);

            // ��������� ������� ������ ����� � ���� �����
            timestamp.erase(timestamp.length() - 1);

            // ����� ����������� � ����
            logfile_ << "[" << timestamp << "] " << message << std::endl;
        }
    }
};
    void check(Logger& logger, int L, int K);
