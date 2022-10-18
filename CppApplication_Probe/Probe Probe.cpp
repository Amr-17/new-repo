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

#include <fstream>
#include <string>
#include <math.h>
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <sstream>
#include <list>
#include "Format.h" // das ist was wir vergessen haben !!
using namespace std;
using std::cout;
using std::endl;


//class Format {
//public:
//
//    Format(string id) : Event_ID(id) {
//
//    }
////    bool addfield(string fieldname, int length);
////    create(string fieldlist);
//
//    void addfield(string fieldname, int length) {
//
//        pair<string, int> PAIR1(fieldname, length);
//        allfields.push_back(PAIR1);
  //  }

//    void create(string fieldlist) {
//
//
//
//        istringstream iss(fieldlist);
//        vector<string> results((istream_iterator<WordDelimitedBy < ' ' >> (iss)),
//                istream_iterator<WordDelimitedBy < ' ' >> ());
//
//        for (std::vector<string>::iterator it = results.begin(); it != results.end(); ++it) {
//
//
//            std::cout << it;
//        }
//    }
//    /*float flaeche() {
//          return (22/7) * radius * radius;
//      }
//   
//      void setRadius(float radius) {
//          this->radius = radius;
//      }
//
//      float getRadius() const {
//          return radius;
//     } */
//private:
//
//    template<char delimiter>
//    class WordDelimitedBy : public string {
//    };
//    string Event_ID;
//    list<pair<string, int>> allfields;
//
//    /*
//     
//     */
//
//    bool Format::addfield(string fieldname, int length) {
//
//        pair<string, int> PAIR1(fieldname, length);
//        allfields.push_back(PAIR1);
//    }
//
//    Format::create(string fieldlist) {
//
//
//
//        istringstream iss(fieldlist);
//        vector<string> results((istream_iterator<WordDelimitedBy < ' ' >> (iss)),
//                istream_iterator<WordDelimitedBy < ' ' >> ());
//
//        for (std::vector<string>::iterator it = results.begin(); it != results.end(); ++it) {
//
//
//            std::cout << it;
//        }
//    }
//};

void integerherausfiltern(string zeile) {
    stringstream str;

    /* Storing the whole string into string stream */
    str << zeile;

    /* Running loop till the end of the stream */
    string temp;
    int found;
    while (!str.eof()) {

        /* extracting word by word from stream */
        str >> temp;

        /* Checking the given word is integer or not */
        if (stringstream(temp) >> found)
            cout << found << " ";

        /* To save from space at the end of string */
        temp = "";
    }
}

// Driver code

int main() {

    string zeile;
    
    ifstream datei;
    datei.open("C:\\Users\\aghanoum\\OneDrive - DXC Production\\Documents\\NetBeansProjects\\CppApplication_2\\Formate einiger Event.txt");

        
    for (int i = 0; !datei.eof(); i++) {
        getline(datei, zeile);
        if (zeile[0] == 'F') {
            cout << endl << zeile.substr(0, zeile.find('=')) << endl;
            integerherausfiltern(zeile);
       }

    }
    return 0;
}
