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


using namespace std;

    Format::Format(string s, char del):name(s) // Funktion zu Dateien Einlesen //
{
	stringstream ss(s);
	string word;
	while (!ss.eof()) {
		getline(ss, word, del); // jede Zeile wird damit eingelesen und bei einem leerzeichen eine zeile darunter kommen    //
                if (word != "")// hier um leere zeilen zu entfernen    //
		{
                    while(word.find('"') != string::npos)// hier um " zu entfernen    //
                word.replace(word.find('"'), 1, "\n" );
                
			cout << word << endl;
		}
		
	}
}
//Format::Format(string fname):name(fname) 
//{
//   ifstream datei;
//   datei.open("C:\\Users\\aghanoum\\OneDrive - DXC Production\\Documents\\NetBeansProjects\\CppApplication_2\\Formate einiger Event.txt");
//   
//   for(int i=0;!datei.eof();i++)
//{
//    getline(datei, fname);
//         cout << "Format Konstructor: " + fname << endl;
//      }
//}
    
    
void Format::create(string fstr)
{
ifstream datei;
   datei.open("C:\\Users\\aghanoum\\OneDrive - DXC Production\\Documents\\NetBeansProjects\\CppApplication_2\\Formate einiger Event.txt");
  
   for(int i=0;!datei.eof();i++)
{
    getline(datei, fstr);
    if (fstr[0] == 'F') {
            cout << endl << "create: " + fstr.substr(0, fstr.find('=')) << endl;
   // cout << "create: " + fstr << endl;
}
}
}

