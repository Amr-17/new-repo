/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.h to edit this template
 */

/* 
 * File:   alleformate.h
 * Author: aghanoum
 *
 * Created on 15 November 2022, 22:05
 */

#ifndef ALLEFORMATE_H
#define ALLEFORMATE_H
#include "Formatc.h"
#include <vector>
#include <map>
#include <iostream>
#include <list>
#include <iosfwd>
#include <string>
using namespace std;

class alle_formate {
public:
    
    alle_formate(const string st);
    typedef pair <string, Format> alle_pair;
    void add(Format my_form);

private:
    map<string, Format> mpp;

    void inline Format get(string ID) {
        return mpp.at(ID);
    }

    void inline add(Format my_form) {
        mpp.insert(my_form.getID(), my_form);
    }

};

#endif /* ALLEFORMATE_H */

