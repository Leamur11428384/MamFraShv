#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <Functions.h>

using namespace std;

vector<string> readlines(const string& filename) {
    vector<string> lines;
    ifstream file(filename);
    string line;


    while (getline(file, line)){
        lines.push_back(line);
    }
    
    return lines;
}
