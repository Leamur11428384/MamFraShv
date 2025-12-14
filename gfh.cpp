#include <iostream>
#include <fstream>
#include <vector>
#include <string>

void writeToFile(const std::vector<std::string>& lines, const std::string& filename) {
    // Открываем файл сразу при создании объекта
    std::ofstream outputFile(filename);
    
    if (!outputFile) {
        std::cerr << "Ошибка создания файла: " << filename << std::endl;
        return;
    }
    
    // Записываем все строки
    for (const auto& line : lines) {
        outputFile << line << "\n"; // Используем \n вместо endl для производительности
    }
    
    std::cout << "Данные записаны в " << filename << std::endl;
}