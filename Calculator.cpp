#include "Calculator.h"
#include <cmath>

using namespace std;

Calculator::Calculator()
{
	_hist = new History();
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

void Calculator::getoperand(float &op1, float &op2)
{
	cout << "Please enter the first operand: ";
	cin >> op1;
	cout << endl;
	cout << "Please enter the second operand: ";
	cin >> op2;
	cout << endl;
}


void Calculator::getoperandtrig(float &op1)
{
	cout << "Please enter the angle (Degrees): ";
	cin >> op1;
	op1 = op1 * M_PI / 180;
}

void Calculator::getoneoperand(float &op1)
{
	cout << "Please enter the operand: ";
	cin >> op1;
	cout << endl;
}

//Math functions

void Calculator::add(float op1, float op2)
{
	float result = op1 + op2;
	
	cout << op1 << " + " << op2 << " = " << result << endl << endl;
	
	stringstream stream;
	stream.precision(3);
	stream << op1 << " + " << op2 << " = " << result << endl;
	
	_hist->append(stream.str());
}

void Calculator::subtract(float op1, float op2)
{
	float result = op1 - op2;
	cout << op1 << " - " << op2 << " = " << result << endl << endl;
	
	stringstream stream;
	stream.precision(3);
	stream << op1 << " - " << op2 << " = " << result << endl;
	
	_hist->append(stream.str());
}

void Calculator::multiply(float op1, float op2)
{
	float result = op1 * op2;
	
	cout << op1 << " * " << op2 << " = " << result << endl << endl;
	
	stringstream stream;
	stream.precision(3);
	stream << op1 << " * " << op2 << " = " << result << endl;
	
	_hist->append(stream.str());
}

void Calculator::divide(float op1, float op2)
{
	float result = op1 / op2;
	
	cout << op1 << " / " << op2 << " = " << result << endl << endl;
	
	stringstream stream;
	stream.precision(3);
	stream << op1 << " / " << op2 << " = " << result << endl;
	
	_hist->append(stream.str());
}

void Calculator::sinfunction(float op1)
{
	float result = sin(op1);
	
	cout << "Sin(" << op1 << " rad) = " << result << endl << endl;
	
	stringstream stream;
	stream.precision(3);
	stream << "Sin(" << op1 << " rad) = " << result << endl;
	
	_hist->append(stream.str());
}

void Calculator::cosfunction(float op1)
{
	float result = cos(op1);
	
	cout << "Cos(" << op1 << " rad) = " << result << endl << endl;
	
	stringstream stream;
	stream.precision(3);
	stream << "Cos(" << op1 << " rad) = " << result << endl;
	
	_hist->append(stream.str());
}

void Calculator::tanfunction(float op1)
{
	float result = tan(op1);
	
	cout << "Tan(" << op1 << " rad) = " << result << endl << endl;
	
	stringstream stream;
	stream.precision(3);
	stream << "Tan(" << op1 << " rad) = " << result << endl;
	
	_hist->append(stream.str());
}

void Calculator::root(float op1)
{
	float result = sqrt(op1);
	
	cout << "sqrt(" << op1 << ") = " << result << endl << endl;
	
	stringstream stream;
	stream.precision(3);
	stream << "sqrt(" << op1 << ") = " << result << endl;
	
	_hist->append(stream.str());
}

void Calculator::expfunction(float op1)
{
	float result = exp(op1);
	
	cout << "exp(" << op1 << ") = " << result << endl << endl;
	
	stringstream stream;
	stream.precision(3);
	stream << "exp(" << op1 << ") = " << result << endl;
	
	_hist->append(stream.str());
}

void Calculator::logfunction(float op1)
{
	float result = log10(op1);
	
	cout << "log(" << op1 << ") = " << result << endl << endl;
	
	stringstream stream;
	stream.precision(3);
	stream << "log(" << op1 << ") = " << result << endl;
	
	_hist->append(stream.str());
}

void Calculator::lnfunction(float op1)
{
	float result = log(op1);
	
	cout << "ln(" << op1 << ") = " << result << endl << endl;
	
	stringstream stream;
	stream.precision(3);
	stream << "ln(" << op1 << ") = " << result << endl;
	
	_hist->append(stream.str());
}
