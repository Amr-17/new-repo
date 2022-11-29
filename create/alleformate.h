/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.h to edit this template
 */

/* 
 * File:   alleformate.h
 * Author: aghanoum
 *
 * Created on 22 November 2022, 00:00
 */

#ifndef ALLEFORMATE_H
#define ALLEFORMATE_H

#include "analyze.h"
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
    
    alle_formate();
    typedef pair <string, Format> alle_pair;
    void add(Format my_form);

    inline Format get(string ID) {
        return mpp.at(ID);
    }
private:
    map<string, Format> mpp;
    
    

};
#endif /* ALLEFORMATE_H */

