#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <vector>
#include <string>

// чтение строк из файла
std::vector<std::string> readlines(const std::string& filename);

// вывод строк на экран
void printlines(const std::vector<std::string>& lines);

// запись строк в файл
void writelines(const std::vector<std::string>& lines,
                const std::string& filename);

#endif