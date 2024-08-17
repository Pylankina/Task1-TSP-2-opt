#include <iostream>
#include <string.h>
#include <math.h>
#include <fstream>
#include <sstream>
#include <vector>
#include "DB.h"


double DB::calculation(int i, int j){ //вычисляем длину пути от i вершины до j 
    auto x1=coord[i].first;
    auto y1=coord[i].second;
    auto x2=coord[j].first;
    auto y2=coord[j].second;
    return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}

DB::DB (ifstream &f_in): Parser(f_in){
    L=0.0;
    for (int i=0; i<n; i++)//инициализация 
        res.push_back(vector<double> (n, 0));
    
    for (int i=0; i<n; i++){ //заполняем длины
        for(int j=0; j<n; j++){
            if(i!=j)
                res[i][j]=calculation(i, j);
        }
    }
    
    for(int i=0; i<n; i++){ //придумываем первое решение, просто вершины подряд 
        answer.push_back(i);
    }
}

void DB::writting(){ // функция записи ответа в файл
    ofstream out;
    out.open("answer.txt");
    if (out.is_open()){
        out << L<<"\n";
        for (int i=0; i<=n; i++)
        out<<answer[i]<<"  ";
    }
    out.close();
}