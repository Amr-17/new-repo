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
/*  Die Klasse alle_formate dient für das Hinzufügen alle Formate von den allen Events */
class alle_formate {
public:
    
    alle_formate();
    //typedef pair <string, Format> alle_pair;
    typedef pair <string, int> T_pair;
    void add(Format& my_form);

    inline Format get(string ID) {
        return mpp.at(ID);
    }
    void show_alle();
private:
    map<string, Format> mpp;
    string name;
    string event_id;
    vector<T_pair> Feldliste;
    

};
#endif /* ALLEFORMATE_H */

