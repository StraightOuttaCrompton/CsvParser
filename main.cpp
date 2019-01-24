#include <iostream>
#include <fstream>
#include "CSVReader.h"

using namespace std;

int main() {
    CSVReader reader("../test.csv");

    vector<vector<string>> dataList = reader.getData();

    return 0;
}