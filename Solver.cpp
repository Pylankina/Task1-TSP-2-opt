#include <algorithm>
#include <vector>
#include <math.h>
#include "Solver.h"
 
 
 Solver::Solver(ifstream &fin) : DB(fin){
    bool f = 1;
    while (f) {
        f = 0;
        L = way();//вычислили длину марсшрута
        for (int i = 1; i < answer.size(); ++i) {
            for (int j = i + 1; j < answer.size(); ++j) {
                // Меняем местами элементы i и j, создавая новый маршрут
                swap(answer[i], answer[j]);
                double newL = way();
                // Если новый маршрут короче, обновляем и отмечаем улучшение
                if (newL < L) {
                    L = newL;
                    f = 1;
                }
                else// Возвращаем обратно, если нет улучшения
                    swap(answer[i], answer[j]);
            }
        }
    }
 }
 
double Solver::way(){
    double WAY = 0.0;
    for (int i = 0; i < answer.size()-1; ++i) 
        WAY += res[answer[i]][answer[i+1]];
    return WAY;
 } 
  