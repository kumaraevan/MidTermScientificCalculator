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
