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
    
    std::ofstream out;
    out.open("test.txt");
    out << "hello";
    out.close();
    return 0;
    

}