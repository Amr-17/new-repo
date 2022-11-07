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

#include <map>
#include <iostream>
#include <list>
#include <iosfwd>
#include <string>

using namespace std;

class Format {
public:

    //Format(string fname);
    char del = ' ';
    void Ergebnis(string word);
    Format(const string s, int len);
    void read(string fstr);
    void readname(string fstr);
    void maping(string wort, int numm);
    int LiesLaenge(string wort);
    string Liesname(string name);
    void maping1(string Feld, int Laenge);
    void show();
    void Lieswechselnd(string wechsel);
    void Zeichenfiltern(string wort);

private:
    pair<string, int> p;
    map<string, int> mp;
    string name;
    string event_id;
    list<string> fieldList;
    list<int> IntList;
};

#endif

