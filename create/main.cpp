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
    
   string Foramt_file("C:\\Users\\aghanoum\\OneDrive - DXC Production\\Documents\\NetBeansProjects\\CppApplication_2\\Formate einiger Event.txt");
   alleformate all_formats;
   all_formats.Format_datei_einlesen(Foramt_file);
    ///////////
   string Meldung_file("C:\\Users\\aghanoum\\OneDrive - DXC Production\\Documents\\Meldungen.txt");
   all_formats.Meldung_datei_einlesen(Meldung_file); 
   
//        string id_eingabe("1101");
//        try {
//            Format result(alle_format.get(id_eingabe));
//              result.show();
//        } catch (out_of_range&) {
//            cout << "ID nicht vorhanden" << endl;
//            return -3;
//        }
    return 0;
}