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

#include <iostream>
#include <list>
#include <iosfwd>
#include <string>

using namespace std;

class Format {
public:

    //Format(string fname);
    Format(const string s, int len);
    void create(string fstr);
    void read(string fstr);
    void readname(string fstr);
    void maping(string wort, int numm);
 
private:
    string name;
    string event_id;
    list<string> fieldList;
    list<int> IntList;
};

#endif

