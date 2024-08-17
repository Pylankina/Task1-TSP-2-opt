#ifndef PARSER_H
#define PARSER_H
#include <iostream>
#include <string>
#include <fstream>
#include <ostream>
#include <sstream>
#include <vector>


using namespace std;

class Parser{
protected:
    int n;
    vector<pair<double, double>> coord;
public:
    Parser (ifstream &fin);
};
#endif 