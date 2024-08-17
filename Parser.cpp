#include "Parser.h"
using namespace std;

Parser::Parser(ifstream &fin) {
    setlocale(LC_ALL, "eng");
    string s;
    fin >> s;
    n=stoi(s);
    cout<<"OK2"<<endl;
    int i=0;
    double m1, m2;
    while (!fin.eof()) {
        fin >> s;
        m1=stod(s);
        fin >> s;
        m2=stod(s);
        coord.push_back(make_pair(m1, m2));
        i++;
        cout<<m1<<m2<<endl;
    }
    cout<<"-----"<<endl;
    for(int i = 0; i < coord.size(); i++){
        cout << coord[i].first << ", " << coord[i].second << endl;
    }
    cout<<"-----"<<endl;
}
  