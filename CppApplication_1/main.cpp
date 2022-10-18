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
//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
///*
// * 
// */
//int main() {
//
//    ofstream out;
//    out.open("test.txt");
//    out << "hel,lo";
//    
//    out.close();
//
//     ifstream ino("test.txt");
//
//     char www [1000];
//
//     ino.getline(www,1000,',');
//     ino.close();
//    //Ausgabe
//     cout << www <<std::endl;
//
//
//
//
//
//    return 0;
//}
////////////////////////////////////////////////////////////////////////
//#include <bits/stdc++.h>
//using namespace std;
//
//// A quick way to split strings separated via spaces.
//void simple_tokenizer(string s)
//{
//	stringstream ss(s);
//	string word;
//	while (ss >> word) {
//		cout << word << endl;
//	}
//}
//
//// A quick way to split strings separated via any character
//// delimiter.
//void adv_tokenizer(string s, char del)
//{
//    string zeile;
//    
//    
// 
//	stringstream ss(s);
//	string word;
//	while (!ss.eof()) {
//		getline(ss, word, del);
//		cout << word << endl;
//	}
//}
//
//int main(int argc, char const* argv[])
//{
//    
//
//	string a = "How do you do!";
//	string b = "How$do$you$do!";
//	// Takes only space separated C++ strings.
//	simple_tokenizer(a);
//	cout << endl;
//	adv_tokenizer(b, '$');
//	cout << endl;
//	return 0;
//}
// CPP program to split an alphanumeric
// string using STL
////////////////////////////////////////////////////////
//#include<bits/stdc++.h>
//using namespace std;
//
//void splitString(string str)
//{
//	string alpha, num, special;
//	for (int n=0; n<str.length(); n++)
//	{
//		if (isdigit(str[n]))
//			num.push_back(str[n]);
//		else if((str[n] >= 'A' && str[n] <= 'Z') ||
//				(str[n] >= 'a' && str[n] <= 'z'))
//			alpha.push_back(str[n]);
//		else
//			special.push_back(str[n]);
//	}
//
//	cout << alpha << endl;
//	cout << num << endl;
//	cout << special << endl;
//}
//
//
//int main()
//{
//    string fname;
//    ifstream datei;
//   datei.open("C:\\Users\\aghanoum\\OneDrive - DXC Production\\Documents\\NetBeansProjects\\CppApplication_2\\Formate einiger Event.txt");
//   
//   for(int i=0;!datei.eof();i++)
//{
//    getline(datei, fname);
//   }
//	splitString(fname);
//	return 0;
//}
///////////////////////////////////////////////////////////77

#include <fstream>
#include <string>
#include <math.h>
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <sstream>
#include <list>
//
using namespace std;
using std::cout;
using std::endl;


void adv_tokenizer(string s, char del) // Funktion zur Dateien Einlesen //
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
//void splitString(string str)  // Funktion zum filtern der Zahlen   //
//{
//	string num;
//	for (int n=0; n<str.length(); n++)
//	{
//		if (isdigit(str[n]))
//			num.push_back(str[n]);
//        }}
//void integerherausfiltern(string zeile) // Funktion2 zum filtern der Zahlen   //
//{
//    stringstream str;
//
//    /* Storing the whole string into string stream */
//    str << zeile;
//
//    /* Running loop till the end of the stream */
//    string temp;
//    int found;
//    while (!str.eof()) {
//
//        /* extracting word by word from stream */
//        str >> temp;
//
//        /* Checking the given word is integer or not */
//        if (stringstream(temp) >> found)
//            cout << found << " ";
//
//        /* To save from space at the end of string */
//        temp = "";
//    }
//}


int main() {

string zeile;
    ifstream datei;
    datei.open("C:\\Users\\aghanoum\\OneDrive - DXC Production\\Documents\\NetBeansProjects\\CppApplication_2\\Formate einiger Event.txt");

        
    for (int i = 0; !datei.eof(); i++) {
        getline(datei, zeile,'=');
           //cout << endl << zeile.substr(0, zeile.find('=')) << endl;
                adv_tokenizer(zeile, ' ');
//        for (int i = 0; i < 500; i++){
//             cout << zeile[i] << endl;
//        }
                //   integerherausfiltern(zeile);
       
    }
    return 0;
}
