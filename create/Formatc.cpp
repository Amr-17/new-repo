/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.cc to edit this template
 */

/*  Diese Klasse dient dazu, dass die Formate und die Evente bestimmt werden , die aus einer Datei eingelesen wird.*/

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

using namespace std;

/* Konstruktor der Klasse Format zum Dateieneinlesen und in einem gezielten Format zum Wiedergeben */
Format::Format(const string s) {
    empty = make_pair("", 0);
    start = 0;
    end = 0;
    position = 0;
    readname(s); /* Aufruf des Funktions, die Name des Format wiedergibt */
    //Ergebnis(s); /* Aufruf des Funktions, die Feldname und Feldlänge wiedergibt */
    int splitresult = 0; /* Aufruf des Funktions Split unter bestimmten Bedingungen */
    while (end < s.length() && splitresult >= 0) {
        splitresult = split(s);
    }
}

/* Die Funktions für Wiedergabe von der Event-ID*/
string Format::getID() {
    return this->event_id;
}

/* Die Funktions für Wiedergabe von der Name des Format */
void Format::readname(string Eventformat) {
    if (Eventformat[0] == 'F') {
        string myname(Eventformat.substr(0, Eventformat.find('=')));
        string myname1(Eventformat.substr(7, 4));
        event_id = myname1;
        name = myname;
        start = Eventformat.find('"') + 1;
    }
}

/* Gibt die Feldliste alle Feldlistenelementen wieder in dem die position jedes mal erhöht sich um 1 */
Format::T_pair Format::getnext() {
    if (position >= Feldliste.size())
        return empty;
    return Feldliste[position++];
}

/* Split Funktion, die ein Feldlänge und Feldname liest und in einem Vektor "Feldliste" speichert, 
 * so dass die Reihenfolge vorhanden bleibt */
int Format::split(string const &str) {
    if (start >= str.length() || str[start] == '"') {
        return -1;
    }
    string token;
    end = str.find(del, start);
    token = str.substr(start, end - start);
    // Vor der Länge könnten mehrere leerzeichen stehen //
    end = str.find_first_not_of(del, end);
    int len = 0;
    string lenghthstr = str.substr(end, str.size() - end);
    len = LiesLaenge(lenghthstr);
    if (len < 0) {
        return -2;
    }
    end = str.find_first_not_of(del, end);
    T_pair pp(token, len);
    Feldliste.push_back(pp);
    start = end;
    return 0;
}

/* show Funktion zu der Ausgabe anhand der T_Pair "typdef" */
void Format::show() {
    cout << "Event_name: " + name << endl;
    cout << "Event_nummer: " + event_id << endl;
    for (auto itr = Feldliste.begin(); itr != Feldliste.end(); ++itr) {
        T_pair pp = *itr;
        cout << "Feldname, Feldlaenge = " << pp.first << "," << pp.second << endl;
    }
}

/* string zu positiver integer Umwandeln
 * wenn das erste Zeichen kein Ziffern enthält dann wird -1 geliefert */
int Format::LiesLaenge(string wort) {

    int zahl = -1;
    if (wort.length() == 0)
        return zahl;
    if (!isdigit(wort.at(0)))
        return zahl;
    zahl = 0;
    char num = wort[0];
    for (int i = 0; i < wort.size() && num != del; i++) {
        num = wort[i];
        if (num >= '0' && num <= '9') {
            int nn = num - '0';
            // cout << nn << endl;
            zahl = zahl * 10 + nn;
            end++;
            //cout << " zahl = " << zahl << " " << endl;
        }
    }
    // cout << " " << wort << endl;
    return zahl;
}

/*liest die Feldname und liefert den zurück
 * Feldname könnte Ziffern enthalten dies wurde hier doch berücksichtigt und richtig erkannt 
 */
string Format::Liesname(string name) {
    string c;
    string feldname;
    bool weitermachen = true;
    if (name != "") {
        for (int i = 0; i < name.size() && weitermachen; i++) {
            //if ((name[i] >= 'A' && name[i] <= 'Z') || (name[i] >= 'a' && name[i] <= 'z'))
            //if (name[i] != del && !(name [i] >= '0' && name [i] <= '9'))
            if (name[i] != del) {
                c = name[i];
                feldname.append(c);
            }
        }
        return feldname;
    }
}
