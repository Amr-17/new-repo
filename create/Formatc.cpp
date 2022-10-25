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

Format::Format(string s, int len) // Funktion zu Dateien Einlesen //
{
    //readname(s); 
   
    char del = ' ';
    int start = s.find('=', 0);
    if (s.length()==0 || s.find('=',0) <= 0 || start <= 0 ) return;
    int end = s.length();
    //int len = s.length();
   //// cout << "start= " << start << " end=" << end << endl;    
   //string ss(s.substr(start, end-start));
    stringstream ss(s.substr(start, end-start));
    
    ////cout << "ss= " << len << endl;
    
    
   int nn;
   string word;
   //int i = atoi( word );
  //int num = stoi(word);
    while (!ss.eof()) {
        getline(ss, word, del); // jede Zeile wird damit eingelesen und bei einem leerzeichen eine zeile darunter kommen    //
        if (word != "")// hier um leere zeilen zu entfernen    //
        {

           while (word.find('"') != string::npos)// hier um " zu entfernen    //
           word.replace(word.find('"'), 1, "");
             while (word.find('=') != string::npos)
             word.replace(word.find('='), 1, "");
          
           
           for(int i = 0; i < word.size(); i++)   //    //   // // string zu int Umwandeln
           {
             char num = word[i];
                if(num >= '0' && num <= '9')
                {
                     int nn = num - '0';
                   // maping(word,nn);         ////hier wird das für nn richtig aber Word ist falsch und num 
                   // cout << nn << endl;

           }
           }
                    
                    //cout << word << endl;    //// hier word ist richtig nn ist falsch
                    //cout << nn << endl;
        }

    }
}
//Format::Format(string fname):name(fname) 
//{

//   for(int i=0;!datei.eof();i++)
//{
//    getline(datei, fname);
//         cout << "Format Konstructor: " + fname << endl;
//      }
//}

//void Format::crate(string fstr) {
//    ifstream datei;
//    datei.open("C:\\Users\\aghanoum\\OneDrive - DXC Production\\Documents\\NetBeansProjects\\CppApplication_2\\Formate einiger Event.txt");
//
//    for (int i = 0; !datei.eof(); i++) {
//        getline(datei, fstr);
//        if (fstr[0] == 'F') {
//            cout << endl << "create: " + fstr.substr(0, fstr.find('=')) << endl;
//            // cout << "create: " + fstr << endl;
//        }
//    }
//}

void Format::readname(string Eventformat) {
    if (Eventformat[0] == 'F') {
        string myname(Eventformat.substr(0, Eventformat.find('=')));
        string myname1(Eventformat.substr(7, 4));
        event_id = myname1;
        name = myname; 
        cout << "Event_name: " + name << endl;
        cout << "Event_nummer: " + event_id << endl;
    }
}
void Format::maping(string wort, int numm)  //   //
{
		 pair<string, int> p(wort,numm);
           cout << "pair= " << p.first << "," <<p.second << endl;
        
}