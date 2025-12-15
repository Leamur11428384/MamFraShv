#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <Functions.h>

using namespace std;

// Функция вывода на экран
void printlines(const vector<string>& lines) {
    for (const auto& line : lines) {
        cout << line << endl;
    }
}