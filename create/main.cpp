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

//string example{"FORMAT_1101=\"ISC-Header 28 teil_aktion  2 teil_nr       \
8 teil_schluessel       5 teil_grpnr    3 teil_code     2 teil_kz       2 sperr_kz \
      1 teil_benennung        18 teil_bez     40 teil_herkunft        2 teil_gang     1 abruf_kz      1 lh_var 1       beh_typ        1 beh_anz       2 geb_menge     12 mengeneinheit        2 teil_bereich_werker   4 teil_bereich1 4 teil_bereich2 4 teil_bereich3 4 teil_bereich 4 \
max_best_o_pa 12 max_beh_best 12 min_beh_best 12 ausschuss    12 max_beh_anz  6 min_beh_anz   \
6 aenderungsgrund       50 zusatzbedarf 12 zusatzbedarf_ME      2 rueckliefer_kz \
       1 min_reichweite        12 max_reichweite       12 bssch        5 dtaus 8 preis\""};

    string ffstr;
    string zeile;
    ifstream datei;
    datei.open("C:\\Users\\aghanoum\\OneDrive - DXC Production\\Documents\\NetBeansProjects\\CppApplication_2\\Formate einiger Event.txt");
    for (int i = 0; !datei.eof(); i++) 
    {
        getline(datei, zeile);
        
        //cout << endl << zeile.substr(0, zeile.find('=')) << endl;
       Format Code(zeile, zeile.length());
       
       map<string,Format> allFormats;
//       allFormats.insert(Code.getId(), Code);
//        Code.readname(example);
        //Format Code(zeile, ' ');
        
        //Code.create(ffstr);
        //        for (int i = 0; i < 500; i++){
        //             cout << zeile[i] << endl;
        //        }
        //   integerherausfiltern(zeile);

        }
    return 0;
}


//string zeile;
//    
//    ifstream datei;
//    datei.open("C:\\Users\\aghanoum\\OneDrive - DXC Production\\Documents\\NetBeansProjects\\CppApplication_2\\Formate einiger Event.txt");
//for (int i = 0; !datei.eof(); i++) {
//        getline(datei, zeile);
//        cout << zeile << endl;

// }




