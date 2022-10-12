#define _USE_MATH_DEFINES

#include "Calculator.h"
#include <cmath>
#include <stdexcept> 
#include <iostream>
#include <string>

using namespace std;

Calculator::Calculator()
{
	_hist = new History();
	_prev_result = 0;
}

//Show and Clear History

void Calculator::show_history()
{
	_hist->show();
}

void Calculator::clear_history()
{
	_hist->clear();
}

//Get operand(s)

void Calculator::get_operand(double &op1, double &op2)
{
	op1 = get_input("first operand");
	op2 = get_input ("second operand");
}

void Calculator::get_operand(double &op)
{
	op = get_input("operand");
}

void Calculator::get_operand_trig(double &op)
{
	op = get_input("operand (in degrees)");
}


//Math functions

void Calculator::add(double op1, double op2)
{
	double result = op1 + op2;
	_prev_result = result;
	
	stringstream stream;
	stream.precision(5);
	stream << op1 << " + " << op2 << " = " << result;
	cout << stream.str() << endl;
	
	_hist->append(stream.str());
}

void Calculator::subtract(double op1, double op2)
{
	double result = op1 - op2;
	_prev_result = result;
		
	stringstream stream;
	stream.precision(5);
	stream << op1 << " - " << op2 << " = " << result;
	cout << stream.str() << endl;
	
	_hist->append(stream.str());
}

void Calculator::multiply(double op1, double op2)
{
	double result = op1 * op2;
	_prev_result = result;
		
	stringstream stream;
	stream.precision(5);
	stream << op1 << " * " << op2 << " = " << result;
	cout << stream.str() << endl;
	
	_hist->append(stream.str());
}

void Calculator::divide(double op1, double op2)
{
	double result = op1 / op2;
	_prev_result = result;
		
	stringstream stream;
	stream.precision(5);
	stream << op1 << " / " << op2 << " = " << result;
	cout << stream.str() << endl;
	
	_hist->append(stream.str());
}

void Calculator::sinfunction(double op)
{
	double result = sin(to_rad(op));
	_prev_result = result;
		
	stringstream stream;
	stream.precision(5);
	stream << "sin(" << op << " deg) = " << result;
	cout << stream.str() << endl;
	
	_hist->append(stream.str());
}

void Calculator::cosfunction(double op)
{
	double result = cos(to_rad(op));
	_prev_result = result;
		
	stringstream stream;
	stream.precision(5);
	stream << "cos(" << op << " deg) = " << result;
	cout << stream.str() << endl;
	
	_hist->append(stream.str());
}

void Calculator::tanfunction(double op)
{
	double result = tan(to_rad(op));
	_prev_result = result;
		
	stringstream stream;
	stream.precision(5);
	stream << "tan(" << op << " deg) = " << result;
	cout << stream.str() << endl;
	
	_hist->append(stream.str());
}

void Calculator::root(double op)
{
	double result = sqrt(op);
	_prev_result = result;
		
	stringstream stream;
	stream.precision(5);
	stream << "sqrt(" << op << ") = " << result;
	cout << stream.str() << endl;
	
	_hist->append(stream.str());
}

void Calculator::expfunction(double op)
{
	double result = exp(op);
	_prev_result = result;
		
	stringstream stream;
	stream.precision(5);
	stream << "exp(" << op << ") = " << result;
	cout << stream.str() << endl;
	
	_hist->append(stream.str());
}

void Calculator::logfunction(double op)
{
	double result = log10(op);
	_prev_result = result;
		
	stringstream stream;
	stream.precision(5);
	stream << "log(" << op << ") = " << result;
	cout << stream.str() << endl;
	
	_hist->append(stream.str());
}

void Calculator::lnfunction(double op)
{
	double result = log(op);
	_prev_result = result;
		
	stringstream stream;
	stream.precision(5);
	stream << "ln(" << op << ") = " << result;
	cout << stream.str() << endl;
	
	_hist->append(stream.str());
}


double Calculator::get_input(string label)
{
	string op;
	
	cout << "To use the result of previous calculation as an operand, you can type 'X'." << endl;
	do
	{
		cout << "Please enter the " << label << ": ";
		cin >> op;
		cout << endl;
		
		char code = toupper(op.at(0));
		if(code == 'X')
		{
			if(_hist->is_empty())
			{
				cout << "There is no previous calculation." << endl;
				continue;
			}
			cout << "Using " << _prev_result << " as the " << label << "." << endl << endl;
			return _prev_result;
		}
		else
			try 
			{	
				return stod(op);
  		    }
			catch(const invalid_argument& err)
			{
        		cout << "Please enter a number or 'X' the result of previous calculation." << endl;
		    } 
			catch(const out_of_range& err)
			{
        		cout << "The number is out of range." << endl;
    		}
	}   while(true);
}

double Calculator::to_rad(double deg)
{
	return deg * M_PI / 180;
}

