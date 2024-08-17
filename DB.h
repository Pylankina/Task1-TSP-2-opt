#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include "Parser.h"

class DB:public Parser{
protected:
    vector<vector<double>> res;//вектор смежности
    vector <int> answer;
    double L;//длина пути
public:
    DB (ifstream &f_in);
    double calculation(int i, int j);
    void writting();
};