#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> readlines(const string& filename);
void printlines(const vector<string>& lines);
void writelines(const vector<string>& lines, const string& filename);

int main(){

    vector<string> lines;

    lines = readlines("input.txt");
    printlines(lines);
    writelines(lines, "output.txt");
    
    return 0;

}
