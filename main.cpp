/**
 * Scientific Calculator
 * Author: Joshua Matthew Eliasaputra
 */

#include <iostream>
#include <string>
#include "Calculator.h"
#include "History.h"

using namespace std;

/**
 * Main Function
 */

int main(int argc, char** argv, double op1, double op2) 
{
	Calculator* calc = new Calculator;
	
	int option = 0;
	
	while (option != 14)
	{
		//Shows the Menu
		cout << "Scientific Calculator" << endl;
		cout << "------------------------" << endl << endl;
		cout << "Options" << endl;
		cout << "1. Addition" << endl;
		cout << "2. Subtraction" << endl;
		cout << "3. Multiply" << endl;
		cout << "4. Divide" << endl;
		cout << "5. Sine (Sin)" << endl;
		cout << "6. Cosine (Cos)" << endl;
		cout << "7. Tangent (Tan)" << endl;
		cout << "8. Square Root" << endl;
		cout << "9. Exponential (exp)" << endl;
		cout << "10. Logarithm (Log)" << endl;
		cout << "11. Natural Logarithm (Ln)" << endl;
		cout << "12. Show History" << endl;
		cout << "13. Clear History" << endl;
		cout << "14. Exit Program" << endl;
		cout << endl;
	
		cout << "Enter Option (1-14): ";
		cin >> option;
		cout << endl;
		
		if(cin.fail())
		{
			cout << "Not a valid choice. Please input again." << endl << endl;
			cin.clear();
			cin.ignore(10000, '\n');
		}
	else 
	{
		switch(option)
		{
			case 1:
				calc->get_operand(op1, op2);
				calc->add(op1, op2);
				break;
			case 2:
				calc->get_operand(op1, op2);
				calc->subtract(op1, op2);
				break;
			case 3:
				calc->get_operand(op1, op2);
				calc->multiply(op1, op2);
				break;
			case 4:
				calc->get_operand(op1, op2);
				calc->divide(op1, op2);
				break;
			case 5:
				calc->get_operand_trig(op1);
				calc->sinfunction(op1);
				break;
			case 6:
				calc->get_operand_trig(op1);
				calc->cosfunction(op1);
				break;
			case 7:
				calc->get_operand_trig(op1);
				calc->tanfunction(op1);
				break;
			case 8:
				calc->get_operand(op1);
				calc->root(op1);
				break;
			case 9:
				calc->get_operand(op1);
				calc->expfunction(op1);
				break;
			case 10:
				calc->get_operand(op1);
				calc->logfunction(op1);
				break;
			case 11:
				calc->get_operand(op1);
				calc->lnfunction(op1);
				break;
			case 12:
				cout << "History: " << endl;
				calc->show_history();
				break;
			case 13:
				cout << "History Cleared." << endl << endl;
				calc->clear_history();
				break;
			case 14:
				cout << "Thank you for using Scientific Calculator." << endl;
				break;
			default:
				cout << "Not a valid choice. Please input again." << endl << endl;
				cin.clear();
				cin.ignore(10000, '\n');
				break;
			}
		
			cout << endl;
		}
	}	
	return 0;
}
          
