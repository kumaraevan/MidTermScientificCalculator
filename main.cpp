#include <iostream>
#include <string>
#include "Calculator.h"
#include "Histort.h"

using nsamespace std;

int main (int argc, char** argv, float op1, float op2)
{
    Calculator* calc = new Calculator;
    
    int option = 0;
    
    //Show the menu
    while (option !=14){
          cout << "Scientific Calculator" << endl;
          cout << "------------------------" << endl << endl;
          cout << "Options" << endl;
          cout << "1. Addition" << endl;
          cout << "2. Substraction" << endl;
          cout << "3. Multiply" << endl;
          cout << "4. Divide" << endl;
          cout << "5. Sine (Sin)" << endl;
          cout << "6. Cosine (Cos)" << endl;
          
          
