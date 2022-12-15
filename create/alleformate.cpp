/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.cc to edit this template
 */


#include "analyze.h"
#include "alleformate.h"
#include "Formatc.h"
#include <fstream>
#include <string>
#include <math.h>
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <sstream>
#include <list>
#include <map>
#include <vector>
#include <map>
#include <iosfwd>

/*  Die Klasse alle_formate dient für das Hinzufügen alle Formate von den allen Events */

//alleformate::alleformate() {
//    
//}

/* Add-Funktion, die für die Setzung von den Strings(my_id) und die Formate(my_form) in Map dient */
void alleformate::add(Format& my_form) {
    string my_id = my_form.getID();
    alle.insert(make_pair(my_id, my_form));
}

/* show Funktion zu der Ausgabe der Event_name und (Feldname, Feldlaenge) anhand der T_Pair "typdef" */
void alleformate::show_alle() {
    for (auto itr = alle.begin(); itr != alle.end(); ++itr) {
        ID_pair pp = *itr;
        // cout << "Event-ID = " << pp.first << ", Format = "; 
        pp.second.show();
    }
}

/* show Funktion zu der Ausgabe der Event_name und (Feldname, Feldlaenge) anhand der T_Pair "typdef" */

int alleformate::Format_datei_einlesen(string dateipfad) {
    string zeile;
    ifstream datei;
    
    datei.open(dateipfad);
    if (!datei.is_open()) {
        cout << "Datei kann nicht geöffnet werden :" << dateipfad << endl; return -6;
    }
    for (int i = 0; !datei.eof(); i++) {
        getline(datei, zeile);
        Format Code(zeile);
        add(Code);
        //Code.show();
   }
    datei.close();
}

int alleformate::Meldung_datei_einlesen(string dateipfad) {
    string zeile;
    ifstream datei;
       alleformate all_formats;
       analyze newcode(all_formats);

    datei.open(dateipfad);
    if (!datei.is_open()) {
        cout << "Datei kann nicht geöffnet werden :" << dateipfad << endl; return -5;
    }
    for (int i = 0; !datei.eof(); i++) {
        getline(datei, zeile);
            newcode.analysiere(zeile);
   }
    datei.close();
}