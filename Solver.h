#include "DB.h"

class Solver:public DB{
public:
    Solver(ifstream &fin);
    vector<int> localSearch();
    double distance(pair<double, double> a, pair<double, double> b);
    double way();
};