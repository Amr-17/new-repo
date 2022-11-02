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
#include <map>

using namespace std;

Format::Format(string s, int len) // Funktion zu Dateien Einlesen //
{
    //readname(s); 
    int start = s.find('=', 0);
    if (s.length() == 0 || s.find('=', 0) <= 0 || start <= 0) return;
    int end = s.length();
    //int len = s.length();
    //// cout << "start= " << start << " end=" << end << endl;    
    //string ss(s.substr(start, end-start));
    stringstream ss(s.substr(start, end - start));

    ////cout << "ss= " << len << endl;

    string word;
    while (!ss.eof()) {
        getline(ss, word, del);
        // jede Zeile wird damit eingelesen und bei einem leerzeichen eine zeile darunter kommen    //
        if (word != "") //  hier um leere zeilen in der Ausgabe zu entfernen    //
        {
            while (word.find('"') != string::npos)// hier um " zu entfernen    //
                word.replace(word.find('"'), 1, "");
            while (word.find('=') != string::npos)
                word.replace(word.find('='), 1, "");


            int fieldlen = LiesLaenge(word);
            string liesname = Liesname(word);
                if (liesname != "")
                cout << "Liesname = " << liesname << endl;
                if (fieldlen > -1) {
                cout << "Lieslaenge = " << fieldlen << endl;
                                   }
            //cout << word << endl; 
            //maping1(liesname, fieldlen);
            //maping(liesname, fieldlen);
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
/*   Mape mittels pair*/
void Format::maping(string wort, int numm)
{
    pair<string, int> p(wort, numm);
    cout << "pair= " << p.first << "," << p.second << endl;

}
/* Mape mittels map */
void Format::maping1(string Feld, int Laenge) //   //
{
    map<string, int> mp;
    mp.insert(pair<string, int>(Feld, Laenge));
    for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
        cout << "Feldname, Feldlaenge= " << itr->first << "," << itr->second << endl;
    }
}

/* string zu positiver integer Umwandeln
 * wenn wort kein Ziffern enthält dann wird -1 geliefert */
int Format::LiesLaenge(string wort) {
    int zahl = -1;
    if (wort != "") {
        if (wort.length() == 0)
            return zahl;
        if (!isdigit(wort.at(0)))
            return zahl;
        zahl = 0;
        for (int i = 0; i < wort.size(); i++) {
            char num = wort[i];
            if (num >= '0' && num <= '9') {
                int nn = num - '0';
                // cout << nn << endl;
                zahl = zahl * 10 + nn;

                //<< " zahl = " << zahl << " " << endl;
            }
        }
        // cout << " " << wort << endl;
    }
    return zahl;
}

/*liest die Feldname und liefert den zurück
 * Feldname könnte Ziffern enthalten dies wurde hier doch berücksichtigt und richtig erkannt 
 */
string Format::Liesname(string name) {
    string c;
    string feldname;
    bool weitermachen = true;
    if (name != ""){
    for (int i = 0; i < name.size() && weitermachen; i++) {
        //if ((name[i] >= 'A' && name[i] <= 'Z') || (name[i] >= 'a' && name[i] <= 'z'))
        if (name[i] != del && !(name [i] >= '0' && name [i] <= '9')) {
            c = name[i];
            feldname.append(c);
        }
        // else weitermachen = false ;
    }
    // cout << name.substr(0, j);
    
    return feldname;
    }
}


