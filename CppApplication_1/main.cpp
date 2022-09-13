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
/*
 * 
 */
int main() {

    ofstream out;
    out.open("test.txt");
    out << "hel,lo";
    
    out.close();

     ifstream ino("test.txt");

     char www [1000];

     ino.getline(www,1000,',');
     ino.close();
    //Ausgabe
     cout << www <<std::endl;





    return 0;
}