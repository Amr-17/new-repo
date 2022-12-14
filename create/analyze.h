/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.h to edit this template
 */

/* 
 * File:   analyze.h
 * Author: aghanoum
 *
 * Created on 29 November 2022, 23:12
 */

#ifndef ANALYZE_H
#define ANALYZE_H

#include "Formatc.h"
#include "alleformate.h"
#include <vector>
#include <map>
#include <iostream>
#include <list>
#include <iosfwd>
#include <string>

using namespace std;

class analyze {
public:
    analyze(const alleformate& formateS);
    void readmeldung(string meld);
    int analysiere(const string& Meldung);
    void einlesen(const string Meldung, int len);

private:
    alleformate Sammlung;
};

#endif /* ANALYZE_H */

