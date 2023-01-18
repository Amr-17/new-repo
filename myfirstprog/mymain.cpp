
// C++ program to illustrate Pointers
  
#include <bits/stdc++.h>
using namespace std;
void geeks()
{
    int var = 20;
  
    // declare pointer variable
    //int* ptr;
  
    // note that data type of ptr and var must be same
    int* ptr = &var;
  
    // assign the address of a variable to a pointer
    cout << "Value at ptr = " << ptr << "\n";
    cout << "Value at var = " << var << "\n";
    cout << "Value at &var = " << &var << "\n";
    cout << "Value at *ptr = " << *ptr << "\n";
    cout << "Value at &ptr = " << &ptr << "\n";
     var = 10;
    cout<< "*****var = 10*****"<<endl;
    cout << "Value at ptr = " << ptr << "\n";
    cout << "Value at var = " << var << "\n";
    cout << "Value at &var = " << &var << "\n";
    cout << "Value at *ptr = " << *ptr << "\n";
    cout << "Value at &ptr = " << &ptr << "\n";
     *ptr = 15;
    cout<< "**** (*ptr = 15) *****"<<endl;
    cout << "Value at ptr = " << ptr << "\n";
    cout << "Value at var = " << var << "\n";
    cout << "Value at &var = " << &var << "\n";
    cout << "Value at *ptr = " << *ptr << "\n";
    cout << "Value at &ptr = " << &ptr << "\n";
}
// Driver program
int main() 
{ 
  geeks(); 
  
    int x = 10;
 
    // ref is a reference to x.
    int& ref = x;
    cout<< "ref=" << ref <<endl;
    cout<< "Vor_x=" << x <<endl;
    // Value of x is now changed to 20
    ref = 20;
    cout << "x = " << x << '\n';
 
    // Value of x is now changed to 30
    x = 30;
    cout << "ref = " << ref << '\n';
 
  return 0;
}



//
//#include <iostream>
//using namespace std;
//int main()
//{
//    int i = 10; // simple or ordinary variable.
//    int* p = &i; // single pointer
//    int** pt = &p; // double pointer
//    int*** ptr = &pt; // triple pointer
//    // All the above pointers differ in the value they store
//    // or point to.
//    cout << "i = " << i << "\t"
//         << "p = " << p << "\t"
//         << "pt = " << pt << "\t"
//         << "ptr = " << ptr << '\n';
//    int a = 5; // simple or ordinary variable
//    int& S = a;
//    int& S0 = S;
//    int& S1 = S0;
//    cout << "a = " << a << "\t"
//         << "S = " << S << "\t"
//         << "S0 = " << S0 << "\t"
//         << "S1 = " << S1 << '\n';
//    // All the above references do not differ in their
//    // values as they all refer to the same variable.
//}