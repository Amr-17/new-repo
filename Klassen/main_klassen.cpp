/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: aghanoum
 *
 * Created on 13 September 2022, 15:03
 */

#include <math.h>
#include <iostream>
#include <cstdlib>
#include <stdio.h>

/*class Name der Klaase {
private:
	// Private Daten und Funktionen, 
	// die nur in dieser Klasse bekannt sind.
public:
	// Öffentliche Daten und Funktionen, 
	// die auch außerhalb dieser Klasse bekannt sind.
protected:
    // Geschützte Daten und Funktionen,
    // die innerhalb der Klasse und den Erben bekannt sin.
};
*/
using namespace std;

class Kreis
{
public:
    float radius;
    float flaeche() {
        return (22/7) * radius * radius;
    }
};


/*
 * 
 */
int main() {
    Kreis jemand;
    Kreis jan;
    jemand.radius = 3;
    jan.radius = 4;
    cout << "Fläche von jemand ist = "<< jemand.flaeche() << endl;
    cout << "Fläche von jan ist = "<< jan.flaeche();
    
   
    return 0;
}
