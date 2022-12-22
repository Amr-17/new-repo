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

analyze::analyze(const alleformate& formateS) // Konstuktor der Kalsse alle_formate //
{
    Sammlung = formateS;
}

///*Funktion für das Dateieinlesen */
//void analyze::einlesen(const string Meldung, int len)
//{
//    int start = 1;
//    if (Meldung.length()==0 || Meldung.find('=',0) <= 0 || start <= 0 ) return;
//    int end = Meldung.length()-1;
//    stringstream ss(Meldung.substr(start, end-start));
//    string ME;
//    while (!ss.eof()) {
//        getline(ss, ME);
//        cout << ME << endl;
//    }
//    
//}

/* analysiert die Meldung und gibt die Evente und deren Positionen wieder*/
int analyze::analysiere(const string& Meldung) {
    int start = 1;
    if (Meldung.length() == 0 || Meldung.find('=', 0) <= 0 || start <= 0) return -5;
    int end = Meldung.length() - 1;
    stringstream ss(Meldung.substr(start, end - start));
    string ME;
    while (!ss.eof()) {
        getline(ss, ME);
        cout << "Die Meldung = " << ME << endl;
        string id_eingabe = ME.substr(0, 4);
        int pos = 0;
        string value;
        try {
            string fieldname;
            int fieldleng;
            //  cout << "zeige hier" << id_eingabe << endl;
            Format result(Sammlung.get(id_eingabe));
            Format::T_pair field = result.getnext();
            //  cout << "zeige hier" << id_eingabe << endl;

            while (field != result.empty && pos < ME.length()) {
                fieldname = field.first;
                fieldleng = field.second;
                value = ME.substr(pos, fieldleng);
                cout << fieldname << "(" << pos << "," << fieldleng + pos - 1 << ") = '" << value << "'" << endl;
                field = result.getnext();
                //cout << "zeige hier-2" << id_eingabe << endl;
                pos = fieldleng + pos;
                if  (ME.length() < pos){
                    cout << "Achtung !! Es werden in der Meldung "<< id_eingabe <<" weitere Felder erwartet!! "<<endl;}
                else if (ME.length()==pos){
                    cout << "Die Meldung ist fertig :)"<<endl;}

            }
                            if(ME.length() > pos){
                        cout << "Achtung !! Die Meldung "<< id_eingabe <<" enthält mehr Zeichenungen als erwartet!! "<<endl;
                            }
        } catch (out_of_range&) {
            cout << "Formatbeschreibung für Event-ID " << id_eingabe << " nicht vorhanden." << endl;
            return -4;
        }
    }
    return 0;
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