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

		// Input
		void get_operand(double &op1, double &op2);
		void get_operand(double &op);
		void get_operand_trig(double &op);
				
		// Operations
		void add(double op1, double op2);
		void subtract(double op1, double op2);
		void multiply(double op1, double op2);
		void divide(double op1, double op2);
		void sinfunction(double op);
		void cosfunction(double op);
		void tanfunction(double op);
		void root(double op);
		void expfunction(double op);
		void logfunction(double op);
		void lnfunction(double op);
		
		// History
		void show_history();
		void clear_history();
		
	private:
		History* _hist;
		double _prev_result;
		
		double get_input(string label);
		double to_rad(double deg);
		stringstream get_stream();
	protected:
};

#endif

