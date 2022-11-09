/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.cc to edit this template
 */
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

/* Klasse zum Dateieneinlesen und in einem gezielten Format zum Wiedergeben */
Format::Format(const string s) {
     start = 0;
     end = 0;
    readname(s); /* Aufruf des Funktions, die Name des Format wiedergibt */
    //Ergebnis(s); /* Aufruf des Funktions, die Feldname und Feldlänge wiedergibt */
    split(s);
}

/* Die Funktions für Wiedergabe von der Name des Format */
void Format::readname(string Eventformat) {
    if (Eventformat[0] == 'F') {
        string myname(Eventformat.substr(0, Eventformat.find('=')));
        string myname1(Eventformat.substr(7, 4));
        event_id = myname1;
        name = myname;
        start = Eventformat.find('"')+1;
    }
}

/* Mape mittels pair */
void Format::maping(string wort, int numm) {
    T_pair p(wort, numm);
    //cout << "pair= " << p.first << "," << p.second << endl;
}

/* Mape mittels map */
inline void Format::maping1(string Feld, int Laenge) {
    mp.insert(T_pair(Feld, Laenge));
    // for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
    // cout << "Feldname, Feldlaenge = " << itr->first << "," << itr->second << endl;
    //}
}

int Format::split(string const &str) {
    string token;
    //cout << "end = " << end << endl << "start = " << start << endl << str << endl << "del =x" << del << "x" << endl;
   // while ((start2 = str.find(del, start)) != string::npos) {
        //end = max(str.length(), str.find(del, start2));
        end = str.find(del, start);
        token = str.substr(start, end-start);
    //}
    cout << "end = " << end << endl << "start = " << start << endl << token << endl;
    end++;
    int len = 0;
    string lenghthstr = str.substr(end, str.size()- end);
    cout << "lengthstr = " << lenghthstr << endl;
    len = LiesLaenge(lenghthstr);
    cout << "len = " << len << endl;
    T_pair pp (token, len);
    Feldliste.push_back(pp);
    start = end;
}

/* show Funktion zu der Ausgabe */
void Format::show() {

    cout << "Event_name: " + name << endl;
    cout << "Event_nummer: " + event_id << endl;
    for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
        cout << "Feldname, Feldlaenge = " << itr->first << "," << itr->second << endl;
        //cout << "pair = Feldname, Feldlaenge= " << p.first << "," << p.second << endl;
    }
}

void Format::show2() {

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
        
            cout << " zahl = " << zahl << " " << endl;
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


//void Format::Lieswechselnd(string wechselword) {
//    int fieldlen = 0;
//    string liesname = "";
//    bool readname = true;
//if (readname) {
//                liesname = Liesname(wechselword);
//                //if (liesname != "")
//                //cout << "Liesname = " << liesname << endl;
//                readname = false;
//            } else {
//                fieldlen = LiesLaenge(wechselword);
//                if (fieldlen > -1) {
//                    //cout << "Lieslaenge = " << fieldlen << endl;
//                    maping1(liesname, fieldlen);
//                } else {
//                    cout << " Formatfehler: kein Ziffer in Word gefunden: "
//                            << wechselword << " in diesem: " << this->name << endl;
//                }
//                readname = true;
//            }
//}

void Format::Ergebnis(string word) {
    int start = word.find('=', 0) + 2;
    if (word.length() == 0 || word.find('=', 0) <= 0 || start <= 0) return;
    int end = word.length();
    stringstream ss(word.substr(start, end - start));
    //string word;
    int fieldlen = 0;
    string liesname = "";
    bool readname = true;
    while (!ss.eof()) {
        getline(ss, word, del); /* Text wird damit Zeilenweise eingelesen und bei einem leerzeichen eine zeile darunter kommen   */
        if (word != "") /*   leere Zeilen die durch das Leerzeichen im Text ignorieren     */ {
            //cout << word << endl; 
            /* Die Zeilen Wechselnd mit dem Namenfeld und Feldlänge für eine richtige Ausgabe lesen*/
            if (readname) {
                liesname = Liesname(word);
                //cout << "Liesname = " << liesname << endl;
                readname = false;
            } else {
                fieldlen = LiesLaenge(word);
                if (fieldlen > -1) {
                    //cout << "Lieslaenge = " << fieldlen << endl;
                    maping1(liesname, fieldlen); /* Mabingsfunktion aufrufen  */
                } else {
                    cout << " Formatfehler: kein Ziffer in Word gefunden: "
                            << word << " in diesem: " << this->name << endl;
                }
                readname = true;
            }

        }
    }

}

