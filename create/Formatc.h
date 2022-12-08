/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.h to edit this template
 */

/*
 * File:   Format.h
 * Author: aghanoum
 *
 * Created on 10 October 2022, 13:56
 */

#ifndef _FORMAT_HEADER
#define _FORMAT_HEADER

#include <vector>
#include <map>
#include <iostream>
#include <list>
#include <iosfwd>
#include <string>

using namespace std;

/*  Diese Klasse dient dazu, dass die Formate und die Events bestimmt werden, die aus einer Datei eingelesen wird.*/
class Format {
public:
    typedef pair <string, int> T_pair;
    char del = ' ';
    Format(const string s);
    T_pair getnext();
    void read(string fstr);
    void readname(string fstr);
    int LiesLaenge(string wort);
    string Liesname(string name);
    void show();
    string getID();
    T_pair empty;
    inline void reset() {
    
    }
private:
    int position;
    size_t start;
    size_t end;
    string name;
    string event_id;
    vector<T_pair> Feldliste;
    int split(string const &str);

};

#endif

