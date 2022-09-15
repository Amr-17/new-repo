/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   Pro_getenv.cpp
 * Author: aghanoum
 *
 * Created on 13 September 2022, 13:20
 */

#include <stdlib.h>
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	/* Eine liste von möglichen Umgebungvariables*/
	const char *env_var[2] = {"PUBLIC","HOME"}; /*  Intialiesieren von string mit zwei Elementen    */
	char *env_val[2];

	for(int i=0; i<2; i++)
	{
		/* Einen Value bekommen für die Umgebungsvariablen falls Vorhanden */
		env_val[i] = getenv(env_var[i]);
		if (env_val[i] != NULL)
			cout << "Variable = " << env_var[i] << ", Value= " << env_val[i] << endl;
		else
			cout << env_var[i] << " doesn't exist" << endl;
	}
}
