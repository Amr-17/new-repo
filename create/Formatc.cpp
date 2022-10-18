/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.cc to edit this template
 */


#include "Formatc.h"
#include <iostream>
#include <fstream>


using namespace std;

Format::Format(string fname):name(fname) {
   ifstream datei;
   datei.open("C:\\Users\\aghanoum\\OneDrive - DXC Production\\Documents\\NetBeansProjects\\CppApplication_2\\Formate einiger Event.txt");
   
   for(int i=0;!datei.eof();i++)
{
    getline(datei, fname);
         cout << "Format Konstructor: " + fname << endl;
      }
   
    
}

void Format::create(string fstr){
ifstream datei;
   datei.open("C:\\Users\\aghanoum\\OneDrive - DXC Production\\Documents\\NetBeansProjects\\CppApplication_2\\Formate einiger Event.txt");
  
   for(int i=0;!datei.eof();i++)
{
    getline(datei, fstr);
    if (fstr[0] == 'F') {
            cout << endl << "create: " +fstr.substr(0, fstr.find('=')) << endl;
   // cout << "create: " + fstr << endl;
}
}
}
