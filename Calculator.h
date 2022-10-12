#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <iostream>   
#include <string>
#include <sstream>
#include "History.h"

class Calculator
{
	public:
		Calculator();
		
		// Operations
		void getoperand(float &op1, float &op2);
		void getoperandtrig(float &op1);
		void getoneoperand(float &op1);
		void add(float op1, float op2);
		void subtract(float op1, float op2);
		void multiply(float op1, float op2);
		void divide(float op1, float op2);
		void sinfunction(float op1);
		void cosfunction(float op1);
		void tanfunction(float op1);
		void root(float op1);
		void expfunction(float op1);
		void logfunction(float op1);
		void lnfunction(float op1);
		
		
		// History
		void show_history();
		void clear_history();
		
	private:
		History* _hist;
	protected:
};

#endif

