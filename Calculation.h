#ifndef CALCULATION_H
#define CALCULATION_H

#ifndef DEG_SYMBOL
#define DEG_SYMBOL "°"
#endif

#include <string>
using namespace std;

/**
 * Calculation node in linked list
 */
class Calculation
{
	public:
		Calculation(string calc);
		string get_current();
		Calculation* get_next();
		void set_next(Calculation* next);
		
	private:
		string _data;
		Calculation *_next;
		
	protected:
};

#endif
