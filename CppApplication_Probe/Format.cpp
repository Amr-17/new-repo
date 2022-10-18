/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.cc to edit this template
 */
#include "Format.h"
#include <sstream>
#include <iostream>

using namespace std;

 Format::Format(std::string id) : Event_ID(id) {

    }
//    bool addfield(string fieldname, int length);
//    create(string fieldlist);

    void Format::addfield(string fieldname, int length) {

        pair<string, int> PAIR1(fieldname, length);
       // allfields.push_back(PAIR1);
    }

    
    std::vector<std::string> Format::Split(const std::string& s, char delimiter)
{
   std::vector<std::string> tokens;
   std::string token;
   std::istringstream tokenStream(s);
   while (std::getline(tokenStream, token, delimiter))
   {
      tokens.push_back(token);
   }
   return tokens;
}

    void Format::create(string fieldlist) {

//template<char delimiter>
//    class WordDelimitedBy : public string {
//    };

        istringstream iss(fieldlist);
        vector<string> results = Split(fieldlist,' ');
                //((istream_iterator<WordDelimitedBy < ' ' >> (iss)),
                //istream_iterator<WordDelimitedBy < ' ' >> ());

        for (std::vector<string>::iterator it = results.begin(); it != results.end(); ++it) {


            cout << it << endl;
            
        }
    }