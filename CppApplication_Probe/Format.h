

/* 
 * File:   Format.h
 * Author: aghanoum
 *
 * Created on 28 September 2022, 12:44
 */
#pragma once

#ifndef FORMAT_H
#define FORMAT_H


#include <string>
#include <math.h>
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <sstream>
#include <fstream>
#include <list>
#include <string>
#include <vector>
using std::cout;
using std::endl;
using namespace std;


class Format {
public:

    Format(std::string id);
    //    bool addfield(string fieldname, int length);
    void create(string fieldlist);



private:
void addfield(string fieldname, int length);
    
    string Event_ID;
    //std::list<pair<string, int>> allfields;
    vector<std::string> Split(const std::string& s, char delimiter);
};

#endif /* FORMAT_H */


