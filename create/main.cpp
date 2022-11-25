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
    
    alle_formate alle;
    string zeile;
    ifstream datei;
    datei.open("C:\\Users\\aghanoum\\OneDrive - DXC Production\\Documents\\NetBeansProjects\\CppApplication_2\\Formate einiger Event.txt");
    
    for (int i = 0; !datei.eof(); i++) 
    {
       getline(datei, zeile);
       Format Code(zeile);
       alle.add(Code);
       //Code.show2();
             }
    string id_eingabe ("1718");
   // if (name == id_eingabe)
    { cout << "ID nicht vorhanden" << endl;
    alle.get(id_eingabe).show2();
    }
    return 0;
}
