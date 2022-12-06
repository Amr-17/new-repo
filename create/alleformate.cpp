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

alle_formate::alle_formate() {
    
}
/* add-Funktion, die für die Setzung von den Strings(my_id) und die Formate(my_form) in Map dient */
  void alle_formate::add(Format& my_form) {
      string my_id = my_form.getID();
      // alle_pair pa(my_id, my_form);
        mpp.insert(make_pair(my_id,my_form));
    }

 /* show Funktion zu der Ausgabe der Event_name und (Feldname, Feldlaenge) anhand der T_Pair "typdef" */
void alle_formate::show_alle() {
    cout << "Event_name: " + name << endl;
    cout << "Event_nummer: " + event_id << endl;
    for (auto itr = Feldliste.begin(); itr != Feldliste.end(); ++itr) {
        T_pair pp = *itr;
        cout << "Feldname, Feldlaenge = " << pp.first << "," << pp.second << endl;
    }
}


 