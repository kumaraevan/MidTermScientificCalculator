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
