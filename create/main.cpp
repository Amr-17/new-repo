/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: aghanoum
 *
 * Created on 10 October 2022, 13:55
 */
#include "alleformate.h"
#include "analyze.h"
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
//
using namespace std;
using std::cout;
using std::endl;

int main(int argc, char* argv[]) {
   string Foramtfile("C:\\Users\\aghanoum\\OneDrive - DXC Production\\Documents\\NetBeansProjects\\CppApplication_2\\Formate einiger Event.txt");
   alleformate alle_format;
   alle_format.Format_datei_einlesen(Foramtfile);
   
    ///////////
   string Meldung_file("C:\\Users\\aghanoum\\OneDrive - DXC Production\\Documents\\Meldungen.txt");
   //alle_format.Meldung_datei_einlesen(Meldung_file); 
   
   string zeile;
   ifstream datei1;
   datei1.open("C:\\Users\\aghanoum\\OneDrive - DXC Production\\Documents\\Meldungen.txt");
    ///////////
    
   

    //    string id_eingabe("1101");
    //    try {
    //        Format result(alle.get(id_eingabe));
    //        //  result.show();
    //    } catch (out_of_range&) {
    //        cout << "ID nicht vorhanden" << endl;
    //        return -3;
    //    }
    

    //  alle.show_alle();
   
    analyze newcode(alle_format);
    if (datei1.is_open()) {
        for (int i = 0; !datei1.eof(); i++) {
            getline(datei1, zeile);
            newcode.analysiere(zeile);
        }
    } else {
        cout << "Datei kann nicht geöffnet werden" << endl;
    }
    datei1.close();
    return 0;
}