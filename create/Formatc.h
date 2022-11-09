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

class Format {
public:
    typedef pair <string, int> T_pair;
    char del = ' ';
    Format(const string s);
    void read(string fstr);
    void readname(string fstr);
    void maping(string wort, int numm);
    int LiesLaenge(string wort);
    string Liesname(string name);
    void maping1(string Feld, int Laenge);
    void show();
    void show2();
   // void Lieswechselnd(string wechsel);

private:
    
    size_t start;
    size_t end;
    vector<T_pair> Feldliste;
    int split(string const &str);
    void Ergebnis(string word);
    pair<string, int> p;
    multimap<string, int> mp;
    string name;
    string event_id;
   
};

#endif

