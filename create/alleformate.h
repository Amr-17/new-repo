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

#include "Formatc.h"
#include <vector>
#include <map>
#include <iostream>
#include <list>
#include <iosfwd>
#include <string>
using namespace std;
/*  Die Klasse alle_formate dient dem Hinzufügen bzw. der Verwaltung aller Formate von MLR-Events */
class alleformate {
public:
    
    //alleformate();
    typedef pair<string, Format> ID_pair;
    void add(Format& my_form);

    /* Liefert Format des MLR-Events mit der gegebenen IDs aus interner Verwaltung*/
    inline Format get(string ID) {
        return mpp.at(ID);
    }
    void show_alle();
private:
    map<string, Format> mpp;
    string name;
    string event_id;
};
#endif /* ALLEFORMATE_H */

