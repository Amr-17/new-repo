/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: aghanoum
 *
 * Created on 6 September 2022, 11:20
 */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main() {
    
    ofstream Dokument;          /* */
    Dokument.open("test1.txt");
    Dokument << "hel,lll,lo,";
    Dokument.close();
    
    
     ifstream ino("test1.txt");
     
     char w [256] ;
     
     ino.getline(w,256,',');
     ino.close();
    //Ausgabe
     cout << w <<endl;
   
    
    return 0;
}