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

analyze::analyze() // Konstuktor der Kalsse alle_formate //
{
}

/*Funktion für das Dateieinlesen */
void analyze::einlesen(const string Meldung, int len)
{
    int start = 1;
    if (Meldung.length()==0 || Meldung.find('=',0) <= 0 || start <= 0 ) return;
    int end = Meldung.length()-1;
    stringstream ss(Meldung.substr(start, end-start));
    string ME;
    while (!ss.eof()) {
        getline(ss, ME);
        cout << ME << endl;
    }
    
}


//void analyze::readmeldung(string Eventmeldung) {
//    if (Eventmeldung[0] == 'A') {
//        string myname(Eventmeldung.substr(0, Eventmeldung.find('=')));
//        string myname1(Eventmeldung.substr(7, 4));
//        event_id = myname1;
//        name = myname; 
//        cout << "Event_name: " + name << endl;
//        cout << "Event_nummer: " + event_id << endl;
//    }
//}