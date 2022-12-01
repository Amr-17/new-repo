/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.cc to edit this template
 */


#include "analyze.h"
#include "alleformate.h"
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
#include <vector>
#include <map>
#include <iosfwd>

alle_formate::alle_formate() {
    
}
  void alle_formate::add(Format& my_form) {
      string my_id = my_form.getID();
      // alle_pair pa(my_id, my_form);
        mpp.insert(make_pair(my_id,my_form));
    }

 


 