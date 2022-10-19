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
//
using namespace std;
using std::cout;
using std::endl;

int main(int argc, char* argv[]) {



    string ffstr;
    string zeile;
    ifstream datei;
    datei.open("C:\\Users\\aghanoum\\OneDrive - DXC Production\\Documents\\NetBeansProjects\\CppApplication_2\\Formate einiger Event.txt");


    for (int i = 0; !datei.eof(); i++) {
        getline(datei, zeile, '=');
        //cout << endl << zeile.substr(0, zeile.find('=')) << endl;

        Format Code(zeile, ' ');
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




